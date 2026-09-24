# Air Quality Monitoring System (IoT)

An IoT-based system that continuously measures air pollutants and atmospheric conditions, then streams the data to a cloud dashboard for real-time monitoring and alerts.

## 📋 Project Description

The **IoT Air Quality Monitoring System** is designed to continuously measure the concentration of pollutants and atmospheric conditions in the environment. The device collects real-time air-quality data using sensors and sends it to a cloud platform via Wi-Fi. A live dashboard displays the Air Quality Index (AQI), historical trends, and triggers alerts whenever pollution levels exceed safe limits.

This project was built as an IoT graduation project for AMIT Learning.

## ⚙️ How It Works

1. The **MQ135** gas sensor detects harmful gases (CO2, NH3, benzene, NOx) in the air.
2. The **BME280** sensor reads temperature and humidity.
3. The **ESP32** collects readings from both sensors and connects to Wi-Fi.
4. Data is sent to the cloud in real time.
5. A live dashboard displays the Air Quality Index (AQI), trends over time, and raises alerts when pollution levels cross safe thresholds.

## 🔧 Hardware Components

| Component | Purpose |
|---|---|
| ESP32 | Main microcontroller + Wi-Fi connectivity |
| MQ135 Gas Sensor | Detects CO2, NH3, benzene, NOx |
| BME280 (or DHT22) | Measures temperature and humidity |

## ☁️ Software / Platform

- Arduino IDE / C++ (ESP32 firmware)
- Cloud platform for data logging and live dashboard
- Wi-Fi based data transmission

## 🚀 Features

- Real-time air quality monitoring
- Live dashboard with AQI, temperature, and humidity
- Historical trend tracking
- Automatic alerts when pollution levels exceed safe limits

## 📁 Repository Contents

- `iot_graduation_project.cpp` — Main firmware for the ESP32

## 🎥 Demo

Watch the project demo video: [Air Quality Monitoring System - Demo](https://youtu.be/fCLHMUe8_DI)

## 👤 Author

**Omer Emad**
Mechatronics Engineering Student — Mansoura University
AMIT Learning — Embedded Systems & IoT Track
