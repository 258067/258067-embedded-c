# Embedded C Programming Examples with Continuous Integration and Code Quality
## SEAT WARMER
---
### In action
---
 #### ON   
 ![on](https://user-images.githubusercontent.com/81506807/116658999-87a3e180-a9ae-11eb-828a-01fa7dc116fb.JPG) 
 #### OFF
 ![off](https://user-images.githubusercontent.com/81506807/116660415-9c817480-a9b0-11eb-93a6-4dd87cf024d7.JPG)|
### Serial monitor output 
![serial](https://user-images.githubusercontent.com/81506807/116662041-e66b5a00-a9b2-11eb-9ae5-cd14e58226cd.JPG)
### Oscilloscope output
![osc](https://user-images.githubusercontent.com/81506807/116662009-dbb0c500-a9b2-11eb-9847-feb1b88c674d.JPG) 
### RAM table output
![ram](https://user-images.githubusercontent.com/81506807/116662028-e10e0f80-a9b2-11eb-9a47-99eb0f72bd14.JPG)
### Operation
* When both switches are closed, LED glows indicating the presence of a person and turning on of the heater.
* Analog input form the temperature sensor is obtained and coverted to digital signal using ADC.
* A PWM signal with varying duty cycle is generated based on the range of values obtained from the ADC.
* The temperature values corresponding to different range of values of ADC and printed on the serial monitor.
 
### CI and Code quality
---
| Codacy | Cppcheck | Build |
|---|---|---|
| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/2d20a719bc3942ceb9875e3e31e185da)](https://www.codacy.com/gh/258067/258067-embedded-c/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=258067/258067-embedded-c&amp;utm_campaign=Badge_Grade) | [![Cppcheck](https://github.com/258067/258067-embedded-c/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/258067/258067-embedded-c/actions/workflows/CodeQuality.yml) | [![Compile-Linux](https://github.com/258067/258067-embedded-c/actions/workflows/Compile.yml/badge.svg)](https://github.com/258067/258067-embedded-c/actions/workflows/Compile.yml) |
