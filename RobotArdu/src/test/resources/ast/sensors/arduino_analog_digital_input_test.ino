// This file is automatically generated by the Open Roberta Lab.

#include <Arduino.h>
#include <math.h>
#include <RobertaFunctions/NEPODefs.h>


double ___item;
double ___item2;
int _input_S = 0;
int _input_S2 = A0;
void setup()
{
    pinMode(_input_S, INPUT);
    pinMode(_input_S2, INPUT);
    ___item = analogRead(_input_S2);
    ___item2 = digitalRead(_input_S);
}

void loop()
{
}
