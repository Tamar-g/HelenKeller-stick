 #include <SPI.h>
#include <ISD4004.h>
ISD4004 voice(8,3);//ss,int
int waterSensorPin = A0;
int buzzerPin = A2;
int buttonPin = 5;
#define TRIG_PIN_left 7
#define ECHO_PIN_left 2  
#define TRIG_PIN_forward 9 
#define ECHO_PIN_forward 4
#define TRIG_PIN_right 10 
#define ECHO_PIN_right 6



void setup() {
  pinMode(buttonPin, INPUT); 
  pinMode(buzzerPin, OUTPUT);
  pinMode(TRIG_PIN_left, OUTPUT); 
  pinMode(ECHO_PIN_left, INPUT);  
  pinMode(TRIG_PIN_forward, OUTPUT); 
  pinMode(ECHO_PIN_forward, INPUT);  
  pinMode(TRIG_PIN_right, OUTPUT); 
  pinMode(ECHO_PIN_right, INPUT);  
  Serial.begin(9600);   
}
void announce_obstacle( int num)
{
 voice.PlayInt(600);
 switch (num)
 {
  case 1:
     voice.PlayInt(800);
    break;
  case 0:
    voice.PlayInt(850);
    break;
  case 2:
    voice.PlayInt(900);
    break;
}
}

void announce_water()
{
   voice.PlayInt(0);
 
}
void announce_help()
{
   voice.PlayInt(200);
 
}
void do_buzz()
{
  tone(buzzerPin, 500);
  delay(500);
  noTone(buzzerPin); 

}

void loop() {
  long duration_left, distance_left,duration_forward,distance_forward , duration_right, distance_right; 
  int sensorValue = analogRead(waterSensorPin);

   

   if (sensorValue >600) {
    do_buzz();
    announce_water();
    Serial.print("water! sensorValue: ");
    Serial.println(sensorValue);
  }
  else
  {
    Serial.println("no water");
  }

  
  digitalWrite(TRIG_PIN_forward, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN_forward, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN_forward, LOW);
  
  duration_forward = pulseIn(ECHO_PIN_forward, HIGH); 
  distance_forward = duration_forward / 58.2;  
  if(distance_forward<10){
    Serial.println("FORWARD");
    do_buzz();
    announce_obstacle(0);
    } 
  Serial.print("Distance = ");
  Serial.print(distance_forward);
  Serial.println("_forward cm");

  
  digitalWrite(TRIG_PIN_right, LOW);
  
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN_right, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN_right, LOW);



  duration_right = pulseIn(ECHO_PIN_right, HIGH); 
  distance_right = duration_right / 58.2;   
  if(distance_right<10){
    Serial.println("RIGHT");
    do_buzz();
    announce_obstacle(1);
    }
  Serial.print("Distance = ");
  Serial.print(distance_right);
  Serial.println("_right cm");



  digitalWrite(TRIG_PIN_left, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN_left, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN_left, LOW);
  
  duration_left = pulseIn(ECHO_PIN_left, HIGH); 
  distance_left = duration_left / 58.2;
  if(distance_left<10){
    Serial.println("LEFT");
    do_buzz();
    announce_obstacle(2);
    }
  Serial.print("Distance = ");
  Serial.print(distance_left);
  Serial.println("_left cm");
  
 Serial.println(buttonPin);
 if(digitalRead(buttonPin)==1)

}
