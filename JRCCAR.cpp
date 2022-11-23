#include "JRCCAR.h"
#include "Arduino.h"

 JRCCAR::JRCCAR (int in1,int in2, int in3,int in4){

  In1=in1;
  In2=in2;
  In3=in3;
  In4=in4;


}

void JRCCAR::PinSetup() {
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);

}
void JRCCAR::stop()
{
    digitalWrite(In1,LOW);
    digitalWrite(In2,LOW);
    digitalWrite(In3,LOW);
    digitalWrite(In4,LOW);
}

void JRCCAR::forward(){
    digitalWrite(In1,HIGH);
    digitalWrite(In2,LOW);
    digitalWrite(In3,HIGH);
    digitalWrite(In4,LOW);
}

void JRCCAR::backward() {
    digitalWrite(In1,LOW);
    digitalWrite(In2,HIGH);
    digitalWrite(In3,LOW);
    digitalWrite(In4,HIGH);
}

void JRCCAR::left(){
    digitalWrite(In1,HIGH);
    digitalWrite(In2,LOW);
    digitalWrite(In3,LOW);
    digitalWrite(In4,HIGH);
}
void JRCCAR::right() {

    digitalWrite(In1,LOW);
    digitalWrite(In2,HIGH);
    digitalWrite(In3,HIGH);
    digitalWrite(In4,LOW);

}
