# ESP32 Web Hosting with Port Forwarding 🌍🚀

This project demonstrates how to host a website on an ESP32 and make it accessible over the internet using **port forwarding**.

## 📌 Features
- Serve a website directly from the ESP32
- Make it accessible worldwide with port forwarding
- Lightweight and efficient for IoT applications
- No third-party hosting required – full control over your server

## 🛠️ Hardware Requirements
- ESP32 Development Board
- USB Cable
- Wi-Fi Connection
- Router with Port Forwarding Support

## 📜 Software Requirements
- Arduino IDE / ESP-IDF / MicroPython (choose your preferred environment)
- ESPAsyncWebServer Library (for handling web requests in Arduino IDE)

## 🚀 Setup Instructions
### 1️⃣ Flash the ESP32 Web Server Code
1. Install the necessary ESP32 board files in **Arduino IDE**.
2. Install required libraries:
   - `ESPAsyncWebServer`
   - `AsyncTCP`
3. Upload the provided **ESP32 web server** code to your ESP32.

### 2️⃣ Configure Your Router for Port Forwarding
1. Log into your **router's admin panel**.
2. Navigate to **Port Forwarding / Virtual Server Settings**.
3. Add a new rule:
   - **Internal IP:** ESP32’s local IP address (Check using Serial Monitor)
   - **Internal Port:** 80 (or the port used in your ESP32 code)
   - **External Port:** Any available port (e.g., 8080)
   - **Protocol:** TCP
4. Save and apply settings.

### 3️⃣ Find Your Public IP Address
- Go to [WhatIsMyIP](https://www.whatismyip.com/) to get your **public IP address**.
- Now, you can access your ESP32-hosted website from anywhere using:
  ```
  http://<Your-Public-IP>:8080
  ```

## 🔧 Troubleshooting
- **ESP32 Not Connecting to Wi-Fi?**
  - Double-check SSID & password in the code.
  - Ensure your router supports 2.4GHz Wi-Fi (ESP32 doesn’t work with 5GHz).
- **Website Not Accessible?**
  - Check if your ISP blocks port forwarding (try a different port).
  - Verify firewall settings.

## 📽️ Demo & Video Tutorial
🎥 Watch the reels video [here](#) *(Add your link once uploaded!)*

## 📂 Project Files
- `esp32_web_server.ino` → Arduino sketch for the web server.
- `index.html` → Webpage content served by ESP32.

## ⭐ Contribute
Feel free to fork, modify, and improve this project! If you find this useful, give it a ⭐ on GitHub!

## 📝 License
This project is open-source under the **MIT License**.
