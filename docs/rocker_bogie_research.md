
# Rocker-Bogie Drivetrain Research

## Overview
Below is notes taken regarding the rocker-bogie suspension system that will be used for this project. 
This is a preliminary document intended for future reference during the design phase.
Created on 5/20/25

## Mechanical Design
- 3 Main Components:
    1. Differential - Pivot point about center of chassis, connects left and right rockers to the rover body. Acts as a counter-balancing mechanism (one rocker goes up, the other goes down), keeping the chassis more level and all wheels in contact with the ground. Can be done using bevel gears, but NASA opts for a pivoting mechanical linkage, which reduces points of failure.
    2. Rocker - Main joint that connects the front wheel to the bogie. The rocker linkage connector is fastened to the joint hub, and the joint hub rotates around a fixed shaft protruding from the chassis. See reference images for joint hub design.
    3. Bogie - Secondary rocker that connects the middle and back wheels together.
- This design provides fully passive stability, there are no springs that maintain a default position.

## Kinematics & Geometry
- For both the rocker and bogie, the links on each side are the same length. This means that the middle wheels are shifted closer to the back wheels than to the front wheel.
- Wheels can traverse obstacles 1.5-2 * wheel diameter
- Can handle 45 degree tilt in any direction
- Front and back wheels are aligned, middle wheels stick out about half a wheel more

## Materials and Components
- All of the weight of the rocker-bogie suspension will be on the rocker joint hub components, which should be made of a stronger material.
- All components are stiff and a fixed size besides the wheel tread, which should be slightly pliable and have a tread pattern of simple horizontal lines.

## Design Considerations for My Rover
- I should probably use the same differential system used by NASA, which will be easier to 3d print. An additional linkage is required on each side with this version. This linkage is connected via two pinned joints, allowing for the linkage to remain forward-facing despite the transverse-plane rotation of the differential bar and sagittal-plane rotation of the rocker joint hub.
- While NASA utilizes four steering motors (one for each corner), I only need to use two for the front two wheels. Use Ackermann steering calculations to independently control the angle of each wheel during a turn. Include motor hubs for back wheels in case want more manuevarability in future.
- The sides are mirrors of each other, don't make them identical.
- The rocker joint component, on which the rocker linkage connection is fastened, is tilted slightly upwards, which is what allows for the linkages to go outwards at an angle, rather than being straight up and down.
- Dimensions (given in mm) have been uploaded to reference images folder, decide what scale you want to use for this and convert values from there. Keep in mind that the values used in the the reference image dimensions are not the same scale as the real rover, but they are proportionally accurate.
- Make sure that the rocker joint 3d-printed component is printed with the layers travelling along the shaft that the links are fastened too. That area us under the most stress due to it holding the full weight of the chassis.


## References
NASA JPL Youtube Video - https://www.youtube.com/watch?v=BC441bV1wFc
NASA Website Perserverance Rover Breakdown - https://science.nasa.gov/mission/mars-2020-perseverance/rover-components/
DIY Rover Youtube Video - https://www.youtube.com/watch?v=NOZZMsMAGh0&t=1s
NASA-provided 3D Model - https://science.nasa.gov/resource/mars-perseverance-rover-3d-model/
Check reference images folder
