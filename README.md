# Button-LED-Control
Button ilə LED idarə etmə layihəsi

## Layihə Haqqında

Bu layihə, iki düymə istifadə edərək bir LED-in idarə edilməsini nümayiş etdirir. Bir düyməyə basıldığında LED- i yandirir, digəri isə LED-i söndürür.



## Tələb olunan Komponentlər

- 1x **Arduino Uno** və ya hər hansı digər Arduino lövhəsi
- 2x **Button** (düymə)
- 1x **LED** (işıq yayan diod)
- 1x **220Ω Rezistor** (LED üçün)
- 2x **10kΩ Rezistor** (Button-lar üçün)
- **Jumper kabelləri** və **breadboard** (layihəni qurmaq üçün)

## Quraşdırma

 **Arduino-nu bağlayın**:
   - **LED**-i Arduino-nun **Pin 4**-nə qoşun.
   - **Button 1**-i **Pin 2**-yə qoşun.
   - **Button 2**-ni **Pin 3**-ə qoşun.
   - Button-ların hər birinə **10kΩ rezistor** əlavə edin (pull-down rezistor olaraq istifadə olunur).

## Tinkercad Simulyasiya Linki:
https://www.tinkercad.com/things/hLySgMp2n1v-epic-stantia

## Kod 

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


