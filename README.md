# 🌦️ Weather Information System

> **A console-based C++ application for offline weather data management and user query simulation.**



## 📘 Overview

**Weather Information System** is a console-based project developed as part of a **2nd semester C++ course** by **Team Core5** — *Asik, Ishtiaq, and Monjur*.  
The program enables users to **query weather data** for capital cities and allows administrators to **add or update records** stored locally.


## 🚀 Features

### 🛠️ Admin Panel
- 🔐 **Secure Authentication:** Protected by username and password.
- 🧾 **Comprehensive Data Management:** Add or update detailed weather data:
  - Temperature (°C)
  - Humidity (%)
  - Precipitation (mm)
  - Wind Speed (m/s)
  - Wind Direction (°)
  - Air Pressure (hPa)
  - Visibility (m)
  - Dew Point (°C)
  - Air Quality Index (AQI)
  - UV Index
  - Weather Condition & Forecast
- 🗂️ **City Directory Overview:** View all stored cities in the database.
- 💾 **Persistent Storage:** Saves data in `weather_data.txt`.
- ⚙️ **Flexible Exit Options:** Save changes or exit without saving.


### 👥 User Mode
- 🌍 **Country-to-Capital Mapping:** Includes 50+ countries mapped to their capitals.
- 🔎 **Case-Insensitive Search:** Accepts all capitalization styles.
- 📊 **Detailed Weather Display:** Neatly formatted report with all weather parameters.
- 🧭 **User-Friendly Output:** Clear and readable console display.


### 💽 Data Persistence
- 📂 **File-Based Storage:** Stores all weather data in `weather_data.txt`.
- 🔄 **Automatic Loading:** Loads data automatically on startup.
- 🧷 **Automatic Saving:** Automatically saves updates on exit.


## 🧰 Technologies Used

| Component | Description |
|------------|-------------|
| **Language** | C++ |
| **Data Storage** | Text files |
| **Libraries/Features** | `fstream`, `string`, `sstream`, `map`, `algorithm (transform)`, `try-catch`, `ctime` |


## ⚙️ How It Works

1. **Startup:** Loads existing data from `weather_data.txt` or starts empty.  
2. **Main Menu:** Options — Admin Login, User Mode, or Exit.  
3. **Admin Login:** Authenticate and manage weather data.  
4. **Admin Panel:** Add/update city data, view all cities, and choose to save or discard changes.  
5. **User Mode:** Enter a country name → retrieve its capital → display weather report.  
6. **Exit:** Data saved automatically before program termination.

---

## 🗂️ Project Structure



📁 Weather-Information-System
│
├── main.cpp                 # Core application logic
├── weather_data.txt         # Local data storage
├── README.md                # Project documentation
│
├── structs/
│   └── WeatherData.h        # Weather data structure
│
└── classes/
└── WeatherFileHandler.h # Handles file I/O operations

````

---

## ▶️ How to Run

```bash
# 1️⃣ Clone the repository
git clone https://github.com/YourUsername/Weather-Information-System.git

# 2️⃣ Navigate into the directory
cd Weather-Information-System

# 3️⃣ Compile the program
g++ main.cpp -o weather_system

# 4️⃣ Run the program
./weather_system
````

---

## 🖼️ Screenshots

### 🔧 Admin Panel

*(Example showing data add/update options)*
![Admin Panel](assets/admin_panel.png)

### 🌤️ User Mode Query

*(Example showing a weather search result)*
![User Mode](assets/user_mode.png)

> *Replace image paths with your actual screenshot locations after upload.*

---

## 💡 Challenges & Learnings

* First major **C++ console project**.
* Implemented **file I/O** for data persistence.
* Worked with **maps** and **structs** for organized data handling.
* Built a **menu-driven console interface**.
* Applied **exception handling** and **string processing**.
* Improved teamwork and code integration skills.

---

## 🔮 Future Improvements

* 🗑️ Add delete functionality for city records.
* ✅ Enhance input validation.
* 🌐 Integrate real-time weather APIs.
* 🎨 Add colors and better formatting to the UI.
* 🌅 Display sunrise/sunset times.

---

## 👨‍💻 Team Core5

| Name                 | Student ID | Role      |
| -------------------- | ---------- | --------- |
| **Md Asikur Rahman** | C241092    | Developer |
| **Md Istiaq Uddin**  | C241089    | Developer |
| **Md Monjur Uddin**  | C241096    | Developer |

---

## ⭐ Support

If you found this project helpful, please give it a **⭐ Star** on GitHub and share your feedback!

---

**Team Core5 — Weather Information System (C++)**

```
