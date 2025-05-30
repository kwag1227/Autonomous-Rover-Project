# All-Terrain Sampling Rover Project

## 1. Define Mission Requirements

### a. What is the goal?
The goal of this project is to create a rover-like robot that has similar functionality to real-life rovers used today, albeit on a much simpler scale. I plan to add to this project over time, learning about advanced features related to computer vision and robot navigation eventually.

### b. What are the operational constraints?

#### i. Mechanical:
- Collect 10mL sample and store
- Traversable across rocky/uneven terrain

#### ii. Electrical:
- Minimum runtime of 15 minutes
- Wireless operation
- Solar-rechargeable battery

#### iii. Software:
- Autonomous control – Finite State Machine
- Sensor feedback (IMU, Camera, Ultrasonic Sensor, Wheel Encoders)
- Decision-making based on I/O
- GPS tracking

---

## 2. Subsystem Breakdown

### a. Chassis
- **Purpose**: Houses majority of electronics and hardware, provides protection against outside elements  
- **Function**: Shield electronics, maintain upright position, hold inner contents securely  
- **Components**: Frame, housings, internal/external mounts  

### b. Drivetrain
- **Purpose**: High-torque system that allows for movement on steep inclines  
- **Function**: Forward/backward movement, differential drive, steering capability  
- **Components**: 4x Wheel motors (BLDC), high-grip wheels, leg assemblies, wire housing  

### c. Power System
- **Purpose**: Providing power to all components  
- **Function**: Voltage regulation, current protection, battery management, stepping down voltage for logic devices, on/off control  
- **Components**: Battery pack, on/off switch, 12V-to-5V buck converter, fuse/current limiter, ground bus, microcontroller breakout board, PCB board  

### d. Control
- **Purpose**: Managing I/O and coordinating robot functions  
- **Function**: Generating PWM signals, processing remote control inputs, managing sensor data, using logic to make decisions  
- **Components**: Main Controller (Raspberry Pi 3 – Arduino Mega doesn’t support camera), Drive ESCs, Articulated Arm Controller (Pi Pico)  

### e. Sensing
- **Purpose**: Measuring and recording data for decision-making  
- **Function**: Track robot position/orientation, detect obstacles, track state of sample collector  
- **Components**: Ultrasonic sensor, IMU, camera module, wheel encoders  

### f. Actuation
- **Purpose**: Controlling the sample-collecting device  
- **Function**: Using a 2–3 DOF articulated arm for scooping  
- **Components**: 1 main arm link, 3 servo motors (base rotation, shoulder hinge, wrist hinge – high torque), end effector (scooper)  

### g. Communications
- **Purpose**: Data transfer between subsystems  
- **Function**: Sensor/controller communication, command output, code uploading  
- **Components**: UART/I2C/SPI buses, USB/Ethernet (for code uploading)  

---

## 3. Performance Specs

### Chassis
- **Max weight capacity**: ≥ 18 lbs

### Drivetrain
- **Max obstacle height**: 150% of Wheel Diameter (6.75")
- **Minimum drive motor torque**: 17.7 in-lbs (2.0 N*m)

### Power System
- **Battery life**: ≥ 15 minutes continuous operation
- **Voltage rails**: 12V, 5V
- **Safety**: Include overcurrent protection and emergency shutoff

### Control
- **Latency (input to actuation)**: ≤ 100 ms
- **Redundancy**: Safe failure behavior if primary controller fails
- **Interface compatibility**: Must support all communication protocols

### Sensing
- **Obstacle detection range (ultrasonic)**: ≥ 5'
- **IMU update rate**: ≥ 100 Hz
- **Camera resolution**: ≥ 640x480 @ 30 fps
- **Sensor fusion accuracy**: ≤ ±5° orientation error

### Actuation (Sampler Device)
- **Reach**: ≥ 10" from arm base
- **Payload capacity**: ≥ 3lbs (soil or rock sample)
- **Servo torque**: Sufficient to operate at full arm extension under load
- **Repeatability**: ≤ 0.5" positioning error
- **Degrees of Freedom**: 3

### Communications
- **Internal latency (inter-microcontroller)**: ≤ 10 ms
- **Signal integrity**: Must operate reliably under EMI from motors
- **Wiring**: Clearly labeled, shielded where needed
- **Bandwidth**: Must support 30 fps camera feed to Pi 3
- **Protocol support**: WIFI UART, I2C, SPI, PWM

### Software
- **Error handling**: Subsystem-level watchdogs and fail-safe states
- **Modularity**: Software structured into independent modules for each subsystem
- **Real-time control loop**: ≥ 10 Hz for locomotion and sensing
- **Remote override**: Support for manual override during autonomous mode

---

## 4. Interfacing

### a. I2C
- **Benefits**: Only two wires to connect many components  
- **Usage**: Connecting sensors to the Pi  
- **Limitations**: Short-range, noise-prone, address conflicts, slow speed (not suitable for camera)  

### b. CSI
- **Benefits**: High data throughput, Pi-optimized, easy and power-efficient  
- **Usage**: Connecting camera module  
- **Limitations**: Limited number of ports, requires CSI-compatible camera  

### c. Wi-Fi
- **Usage**: Streaming camera feed/sensor data to laptop from Pi  

### d. PWM
- **Usage**: Controller output signal to ESCs and motors  

### e. UART
- **Benefits**: Only 2 lines, GPS-compatible, asynchronous  
- **Usage**: Communicating with GPS module  
- **Limitations**: One-to-one device connection, baud rate must match, code must read data quickly  

---

## 5. Documentation

- **BOM Link**: _[https://docs.google.com/spreadsheets/d/1kCPw5noG4wiGUhccGp7jNWA5f-jaydbZb4b8pzQ2dAw/edit?usp=sharing]_  
- **GitHub**: _[https://github.com/kwag1227/Autonomous-Rover-Project/tree/main]_  
- **YouTube Video Progress Reports**: _[Add playlist or links]_