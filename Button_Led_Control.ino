
int buttonPin1 = 2;   
int buttonPin2 = 3;   
int ledPin = 4;      

void setup() {
  pinMode(buttonPin1, INPUT);  
  pinMode(buttonPin2, INPUT);  
  pinMode(ledPin, OUTPUT);     
}
void loop() {
  
 int buttonState1 = digitalRead(buttonPin1);
  
 int buttonState2 = digitalRead(buttonPin2);

  
  if (buttonState1 == HIGH) {
    digitalWrite(ledPin, HIGH); 
  }
   
   if (buttonState2 ==HIGH) {
    digitalWrite(ledPin, LOW);   
  }
}
