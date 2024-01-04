#include "stdint.h"

#define MAX_ANALOG_INPUT 255
// #define MAX_OUTPUT_VOLTAGE  ;
#define PWM_RESOLUTION 256

const static int POT_PIN = A2;
const static int PWM_PIN = 11;

void setup() {
  // potentiometer input
  pinMode(POT_PIN, INPUT);

  //
  pinMode(PWM_PIN, OUTPUT);
}

void loop() {
  // read potentiometer input
  uint16_t pot_input = analogRead(POT_PIN);
  printf("pot input: %d\n", pot_input);

  // convert to duty cycle range
  // uint16_t targ_voltage = float(pot_input / MAX_ANALOG_INPUT);

  // output on PWM
  uint16_t pwm_output = PWM_RESOLUTION * (float)(pot_input / MAX_ANALOG_INPUT);
  printf("pwm output: %d\n", pwm_output);
}
