# Embedded C Programming Examples with Continuous Integration and Code Quality
## SEAT WARMER
---
### In action
---
| ON | OFF |
|---|---|
|![on](https://user-images.githubusercontent.com/81506807/116658999-87a3e180-a9ae-11eb-828a-01fa7dc116fb.JPG) | ![off](https://user-images.githubusercontent.com/81506807/116660415-9c817480-a9b0-11eb-93a6-4dd87cf024d7.JPG)|

## Operation
---
- Only when both switches are closed, LED glows indicating presence of a person and pressing of heater switch.
- Analog input from the temperature sensor is obtained and converted to digital signal using the ADC.
- A PWM signal of varying duty cycle is generated in accordance with the range of digital values obtained from the ADC.
- The temperature values corresponding to different range of ADC values is printed on the Serial monitor.    

### CI and Code quality
---
| Codacy | Cppcheck | Build |
|---|---|---|
| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/2d20a719bc3942ceb9875e3e31e185da)](https://www.codacy.com/gh/258067/258067-embedded-c/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=258067/258067-embedded-c&amp;utm_campaign=Badge_Grade) | [![Cppcheck](https://github.com/258067/258067-embedded-c/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/258067/258067-embedded-c/actions/workflows/CodeQuality.yml) | [![Compile-Linux](https://github.com/258067/258067-embedded-c/actions/workflows/Compile.yml/badge.svg)](https://github.com/258067/258067-embedded-c/actions/workflows/Compile.yml) |