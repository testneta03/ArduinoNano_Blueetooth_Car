#include <SoftwareSerial.h>

#define IN1 5
#define IN2 6
#define IN3 9
#define IN4 10

char x;

SoftwareSerial mySerial(3, 2);  // RX, TX

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  mySerial.begin(9600);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);
}


void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN4, LOW);
}


void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN4, HIGH);
}

void loop() {
  if (mySerial.available()) {
    x = mySerial.read();
    Serial.println(x);

    if (x == 'f') {
      moveForward();
      delay(3000);
    } else if (x == 'b') {
      moveBackward();
      delay(3000);
    } else if (x == 'l') {
      turnLeft();
      delay(3000);
    } else if (x == 'r') {
      turnRight();
      delay(3000);
    } else if (x == 's') {
      stopMotors();
    }
  }
}
