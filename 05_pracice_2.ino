void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(7, LOW);
  delay(1000);
  
  int x = 0;
  while (x < 5) {
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    delay(100);
    x++;                    
  }

 
  digitalWrite(7, HIGH);

  while (1) {
  }
}
