// This file is automatically generated by the Open Roberta Lab.

#include <Arduino.h>
#include <NEPODefs.h>


double ___item;
int _trigger_U = 7;
int _echo_U = 6;
double _getUltrasonicDistance(int trigger, int echo)
{
    digitalWrite(trigger, LOW);
    delay(5);
    digitalWrite(trigger, HIGH);
    delay(10);
    digitalWrite(trigger, LOW);
    return pulseIn(echo, HIGH) * 0.03432/2;
}

void setup()
{
    pinMode(_trigger_U, OUTPUT);
    pinMode(_echo_U, INPUT);
    ___item = _getUltrasonicDistance(_trigger_U, _echo_U);
}

void loop()
{
}