// This file is automatically generated by the Open Roberta Lab.

#include <Arduino.h>
#include <RobertaFunctions/NEPODefs.h>


double ___item;
int _output_P2 = A0;
void setup()
{
    ___item = ((double)analogRead(_output_P2))*5/1024;
}

void loop()
{
}
