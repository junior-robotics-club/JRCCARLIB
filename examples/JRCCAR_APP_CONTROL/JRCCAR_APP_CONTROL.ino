
#include <SoftwareSerial.h>
SoftwareSerial CAR_BT(2, 3);

#include <JRCCAR.h>
JRCCAR car(8, 9, 10, 11);

int car_data;

void setup()
{

  Serial.begin(9600);
  CAR_BT.begin(9600);
  car.PinSetup();
}

void loop()
{
  
  if (CAR_BT.available() > 0) {
    car_data = CAR_BT.read();
    Serial.println(car_data);

  }

  Serial.println(car_data);
  if (car_data == 1) {
    car.forward();
  }
  else if (car_data == 2) {
    car.backward();
  }
  else if (car_data == 3) {
    car.left();
  }
  else if (car_data == 4) {
    car.right();
  }
  else if (car_data == 5) {
    car.stop();
  }
}
