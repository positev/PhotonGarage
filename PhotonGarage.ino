/*
 * Project PhotonGarage
 * Description: by connecting D7 to the trigger pin, 3.3v to vin and gnd to gnd on a relay
 * Author:Trevor Keegan
 * Date: 10/23/2018
 */

int TriggerPin = D7;

void setup() {
    Particle.function("Garage", OpenFunction);
}

void loop() {
    
}
int OpenFunction(String extra){
  // using a relay that changed position when power is PULLED from the trigger pin uses the following steps

  // prepare to apply power to the pin
    pinMode(TriggerPin,OUTPUT);

  // apply power to the pin
    digitalWrite(TriggerPin, LOW);

  // wait 500 milliseconds or half a second
    delay(500);

  // force the pin to pull power
    pinMode(TriggerPin,INPUT);

  // return zero because the particle function requires something returned but it realy doesnt matter
    return 0;
}
