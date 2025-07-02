# Stm32-bluepill

my personal guide to work with the stm32 ( bluepill )

# STM32 Blue Pill Projects

This repository contains example projects, drivers, and sketches for the STM32F103C8T6 "Blue Pill" development board, using the STM32duino core and the Arduino IDE or PlatformIO.

## 📦 Overview

The STM32 Blue Pill is a low-cost ARM Cortex-M3 board based on the STM32F103C8T6 microcontroller. This repo aims to make development easy and accessible by providing well-documented examples and starter templates.

## 🧰 Requirements

- STM32 Blue Pill (STM32F103C8T6)
- USB to Serial adapter (for programming via USART)
- Arduino IDE or PlatformIO
- STM32duino core installed in Arduino IDE

## 🔌 Installation

### Arduino IDE

1. Install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Add the STM32 package:
   - Go to **File > Preferences**
   - Add this URL to **Additional Board Manager URLs**:
     ```
     https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json
     ```
3. Go to **Tools > Board > Board Manager**, search for `STM32`, and install **STM32 MCU based boards** by STMicroelectronics.
4. Select **BluePill F103C8** as the board.
5. Choose your upload method (e.g., `Serial`, `STLink`, `DFU`).
6. Install any required libraries.

## 🚀 Getting Started

Example: **Blink LED**

```cpp
void setup() {
  pinMode(PC13, OUTPUT);
}

void loop() {
  digitalWrite(PC13, LOW);  // LED on (active-low)
  delay(500);
  digitalWrite(PC13, HIGH); // LED off
  delay(500);
}
