
# Autonomous Rover Project – High-Level System Block Diagram

## 📦 Subsystem Breakdown

### 1. Chassis
**Components:**
- Frame
- Top and bottom plates
- Side plates
- Front and back plates
- Battery housing
- Internal/external mounts

---

### 2. Drivetrain
**Components:**
- 4x BLDC drive motors
- 2x High-torque servo motors (for steering)
- High-grip, flexible wheels
- Wheel hubs
- Rocker-bogie assembly
- Differential bar assembly

---

### 3. Power System
**Components:**
- LiPo battery
- Battery connector (XT90)
- DC On/off switch
- 12V-5V Buck converter
- Screw terminals
- Fuse/breaker
- Ground bus
- Power PCB board
- Wire hose
- Zip ties

---

### 4. Control
**Components:**
- Main Controller: Raspberry Pi 3
- Robot Controller: Raspberry Pi Pico
- Main PCB Board
- Drive ESCs
- GPIO headers

---

### 5. Sensing
**Components:**
- Ultrasonic sensor
- IMU
- Camera module
- Wheel encoders
- Limit switches? (for arm)
- GPS?

---

### 6. Actuation 
**Components:**
- Main arm link
- Shoulder joint hub
- Wrist joint hub
- End effector (scooper)
- 3x Additional high-torque servo motors (shoulder rotation, shoulder hinge, wrist hinge)

---

### 7. Communications
**Components:**
- UART bus wiring/connectors
- UART twisted wire cables (TX+gnd, RX+gnd)
- I2C bus wiring/connectors
- I2C twisted wire cables (SDA+gnd, SCL+gnd)
- I2C pull-up resistors (For SDA and SCL lines)
- CSI ribbon cable
- PWM wires

---

## 🖼️ Block Diagram

**Diagram Filename:** `Rover Block Diagram.png`

_Description:_  
This diagram illustrates the connections and dependencies between all major subsystems, including power distribution, sensory input, decision-making, and actuation systems.

---

## 📌 Notes & Future Considerations

- Consider adding solar recharging or power monitoring sensors.
- Possible integration of SLAM or GPS for autonomous mapping in the future.
- Expand sensing array with LIDAR or stereo vision for better 3D awareness.
