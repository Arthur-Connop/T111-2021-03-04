
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void flash(int times, int wait)
{
  for(int i = 0; i <= times; i++){
    digitalWrite(LED_BUILTIN, HIGH); delay(wait);
    digitalWrite(LED_BUILTIN, LOW);  delay(wait);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 9; i >= 0; i--){
    flash(i, 50);
    delay(500);
  }

  while(true){
    flash(1, 500);
  }
}
