

// led 1 
int led = 11;

//led 2
int led1 = 10;

//led 3 
int led2 = 9;

//led 4
int led3 = 8;


// el tiempo
int dt = 1000;

// la potencia 
int valor = 30;
int valor1 = 80;
int valor2 = 130;


void setup() {
  
  // el modo de los leds
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
}

void loop() {

  //la secuencia de los led 

  //LED 1 
  analogWrite(led, valor);
  delay(dt);
  analogWrite(led, 0);
  delay(dt);

  //LED 2
  analogWrite(led1, valor1);
  delay(dt);
  analogWrite(led1, 0);
  delay(dt);

  //LED 3
  analogWrite(led2, valor2);
  delay(dt);
  analogWrite(led2, 0);
  delay(dt);

  //LED4
  digitalWrite(led3, HIGH);
  delay(dt);
  digitalWrite(led3, LOW);
  delay(dt);
  

}
