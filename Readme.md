This project is part of LnT STEPin program. The objective is to learn Embedded C programming.

For simulation, [SimulIDE](https://github.com/riuandg5/lnt-emb-c-activities/blob/master/images/overview.png?raw=true) is used.

# Overview
Objective is to make a Car Seat Heater. The whole project is divided into four different activities.
![overview](https://user-images.githubusercontent.com/86160630/126757412-35739259-3b69-46ac-a710-41c532277fce.png)

## Activity 1
* Show status of the heater (ON or OFF) using an LED on the car dashboard.
* Heater can be turned ON or OFF using a switch only if the seat is occupied.
* Occupancy of the seat is known by a sensor.

### In Action
* `DASHBOARD_LED`
    * Show heater status.
    * Connected to `B0`.
* `HEATER_SWITCH`
    * Switch to turn heater ON or OFF.
    * Connected to `D0`.
* `BUTTON_SENSOR`
    * Sensor (emulated as switch) to sense seat occupancy.
    * Connected to `D1`.

| Case 00                            | Case 01                            |
|------------------------------------|------------------------------------|
| ![activity1_1](https://user-images.githubusercontent.com/86160630/126757023-7dface46-afce-44c6-9624-395222b5beca.png) | ![activity1_2](https://user-images.githubusercontent.com/86160630/126757655-7cd6781f-0b19-4737-831a-87a1064c9bee.png) |

| Case 10                            | Case 11                            |
|------------------------------------|------------------------------------|
| 
![activity1_3](https://user-images.githubusercontent.com/86160630/126757820-7918a187-6b4d-4bb3-8045-90adf9520a95.png) | ![case 11](images/activity1_4.png) |
