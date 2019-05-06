int switchPin = 2;
int led1 = 3;
int led2 = 4;
int led3= 5;
int led4 = 6;
int led5= 7;
int led6 = 8;
int led7= 9;
int led8 = 10; 
int led9 = 11;
int led10 = 12;
int led11 = 13;
int led12= 14;
int led13= 15;



void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(led11, OUTPUT);
pinMode(led12, OUTPUT);
pinMode(led13, OUTPUT);

}

void loop() {
  digitalWrite(led1, HIGH);
  delay (1000);
digitalWrite(led2, HIGH); //
delay (1000);
digitalWrite(led3, HIGH); //left eye
delay (1000);
digitalWrite(led4, HIGH); //
delay (1000);
digitalWrite(led5, HIGH);
delay (1000);
//
digitalWrite(led6, HIGH);
delay(500);
// laser
digitalWrite(led7, HIGH); //
delay (500);
digitalWrite(led8, HIGH);
delay (500);
//
digitalWrite(led9, HIGH); //left glove
delay (1000);
digitalWrite(led10, HIGH); //
delay (1000);
digitalWrite(led11, HIGH); //
delay (1000);
digitalWrite(led12, HIGH); //
delay (1000);
digitalWrite(led13, HIGH); 
delay (1000);
//right eye

}
