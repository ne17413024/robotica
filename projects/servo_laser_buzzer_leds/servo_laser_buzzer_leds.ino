//www.tecnosalva.com

const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;
 
const int buzzerPin = 13;
const int ledPin1 = 12;
const int ledPin2 = 13;
 
int counter = 0;


////////////////////////////////////////////////////////////////////////

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
int valor = 100;
int valor1 = 150;
int valor2 = 220;

////////////////////////////////////////////////////////////////////////

int pin = 5;

////////////////////////////////////////////////////////////////////////

#include <Servo.h>
//servo
Servo prueba;





void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  ////////////////////////////////////////////

  // el modo de los leds
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  ////////////////////////////////////////////

  pinMode(pin, OUTPUT);  //definir pin como salida  

  ////////////////////////////////////////////

  //servo
  prueba.attach(6);
  
  
}
 
void loop()
{

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

  ////////////////////////////////////////////////////////////

  digitalWrite(pin, HIGH);   
  delay(5000);               
  digitalWrite(pin, LOW);    
  delay(5000);
  digitalWrite(pin, HIGH);   

  ////////////////////////////////////////////////////////////


  // servo
  for( int e = 0; e<3; e++  ){
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
  


  ////////////////////////////////////////////////////////////
 
  //Play first section
  firstSection();
 
  //Play second section
  secondSection();
 
  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 350);  
  beep(a, 125);
  beep(cH, 500);
  beep(a, 375);  
  beep(cH, 125);
  beep(eH, 650);
 
  delay(500);
 
  //Repeat second section
  secondSection();
 

  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 650);  
 
  delay(650);
}
 
void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
 
  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counter++;
}
 
void firstSection()
{
  beep(a, 500);
  beep(a, 500);    
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);  
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);
 
  delay(500);
 
  beep(eH, 500);
  beep(eH, 500);
  beep(eH, 500);  
  beep(fH, 350);
  beep(cH, 150);
  beep(gS, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);
 
  delay(500);
}
 
void secondSection()
{
  beep(aH, 500);
  beep(a, 300);
  beep(a, 150);
  beep(aH, 500);
  beep(gSH, 325);
  beep(gH, 175);
  beep(fSH, 125);
  beep(fH, 125);    
  beep(fSH, 250);
 
  delay(325);
 
  beep(aS, 250);
  beep(dSH, 500);
  beep(dH, 325);  
  beep(cSH, 175);  
  beep(cH, 125);  
  beep(b, 125);  
  beep(cH, 250);  
 
  delay(350);
}
