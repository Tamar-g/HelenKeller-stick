# Helen Keller stick - Embedded Smart Navigation Stick

A real-time embedded navigation system designed to assist visually impaired users by detecting obstacles and environmental hazards and providing immediate audio feedback.

The project combines **embedded C++ development, real-time sensor processing, hardware integration, distance measurement, and decision-making logic** in a compact assistive-technology system.
![20240717_130449](https://github.com/user-attachments/assets/04a5bfef-120e-4947-8625-1a236d5e6e21)

Action demo:
https://github.com/user-attachments/assets/ef2784ae-d705-48cc-bcb4-e6b30ae937b6

## Overview

The Smart Navigation Stick continuously monitors its surroundings using multiple sensors and processes their readings in real time.

Based on the detected environment, the system determines whether an obstacle or hazard is present and provides an appropriate audio alert to the user.

The project was developed as an end-to-end embedded system, covering the interaction between **hardware, low-level software, sensor data, and user feedback**.

## Key Features

* Real-time obstacle and hazard detection
* Multi-sensor environment monitoring
* Ultrasonic distance measurement
* Real-time sensor data processing
* Threshold-based decision-making logic
* Multi-modal audio alerts
* Hardware–software integration
* Embedded C++ implementation
* Serial communication for debugging and monitoring
* Low-level debugging and system investigation

## System Architecture

```text
        ┌─────────────────────┐
        │   Physical Sensors  │
        │                     │
        │  Distance / Hazard  │
        └──────────┬──────────┘
                   │
                   ▼
        ┌─────────────────────┐
        │   Microcontroller   │
        │                     │
        │  Sensor Acquisition │
        │  Data Processing    │
        │  Decision Logic     │
        └──────────┬──────────┘
                   │
                   ▼
        ┌─────────────────────┐
        │  Navigation Logic    │
        │                     │
        │ Obstacle Detection  │
        │ Hazard Detection    │
        │ Alert Selection     │
        └──────────┬──────────┘
                   │
                   ▼
        ┌─────────────────────┐
        │    Audio Alerts     │
        │                     │
        │  User Feedback      │
        └─────────────────────┘
```

## Embedded Implementation

The system is implemented in **C++** and runs on a microcontroller connected to multiple hardware components.

The software is responsible for:

1. Acquiring sensor measurements.
2. Processing sensor data in real time.
3. Measuring distances to detected objects.
4. Applying decision-making logic to identify potential obstacles and hazards.
5. Triggering the appropriate audio feedback.
6. Supporting debugging and monitoring through serial communication.

The project also includes communication and peripheral integration using embedded interfaces such as **SPI**, together with direct interaction with the connected hardware.

## Hardware–Software Integration

A major focus of the project is the integration between the embedded software and physical hardware.

The system combines multiple components into a single real-time workflow, requiring coordination between:

* Sensors
* Microcontroller
* Communication interfaces
* Distance-measurement logic
* Audio output
* Embedded control logic

This makes the project a practical example of **hardware/software co-integration and real-time embedded development**.

## Technologies

| Category      | Technologies                                      |
| ------------- | ------------------------------------------------- |
| Language      | C++                                               |
| Platform      | Microcontroller / Embedded                        |
| Sensors       | Ultrasonic and hazard-detection sensors           |
| Communication | SPI, Serial                                       |
| Processing    | Real-time sensor processing                       |
| Output        | Audio alerts                                      |
| Focus         | Embedded Systems, Hardware Integration, Debugging |

## Engineering Focus

This project demonstrates hands-on experience with:

* Embedded software development
* Real-time systems
* Sensor integration
* Hardware–software interfaces
* Low-level debugging
* Data acquisition and processing
* Decision-making logic
* System-level integration

## Project

**GitHub:** [Tamar-g/HelenKeller-stick](https://github.com/Tamar-g/HelenKeller-stick)


