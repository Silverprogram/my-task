const int buttonPin = 7;
const int buzzerPin = 8;


void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
    if(digitalRead(buttonPin)==LOW)
    {
    tone(buzzerPin, 559, 300);
    delay(350);
 
    tone(buzzerPin, 323, 500);
    delay(550);
    }
    
  }
