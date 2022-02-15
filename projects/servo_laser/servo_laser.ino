#include <Servo.h>
//servo
Servo prueba;

int hola = 12;

//para el laser
const int pin = 5;


void setup(){



  //servo
  prueba.attach(6);
  
  //laser
  pinMode(pin, OUTPUT);
  
}

void loop(){




  //laser
  digitalWrite(pin, HIGH);   // poner el Pin en HIGH
  delay(2000);               // esperar 5 segundos
  digitalWrite(pin, LOW);    // poner el Pin en LOW
  delay(2000); 

  // servo
  for( int e = 0; e<100; e++  ){
    prueba.write(0);
    delay(2000);
    prueba.write(200);
    delay(2000);
    prueba.write(90);
    delay(2000);
    prueba.write(180);
    delay(2000);
    Serial.println(e);
  }

  Serial.println("hola veamos" +  hola);

}
