#ifndef JRCCAR_h
#define JRCCAR_h
#include "Arduino.h"

class JRCCAR {

private:
    int In1;
    int In2;
    int In3;
    int In4;

public:

    JRCCAR(int in1, int in2, int in3, int in4);
    void PinSetup();
    void stop();
    void forward();
    void backward();
    void left();
    void right();



};

#endif
