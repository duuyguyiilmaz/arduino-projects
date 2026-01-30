const int LedArray[]={2,3,4,5};
void setup() {
for(int i =0;i<4;i++){

  pinMode(LedArray[i],OUTPUT);
}
}

void loop() {
    // Left to right
  for(int i = 0;i<4;i++){
    digitalWrite(LedArray[i],HIGH);
    delay(50);
    digitalWrite(LedArray[i],LOW);
  }
    // Right to left

   for(int i = 3;i>=0;i--){
    digitalWrite(LedArray[i],HIGH);
    delay(50);
    digitalWrite(LedArray[i],LOW);
  }


}
