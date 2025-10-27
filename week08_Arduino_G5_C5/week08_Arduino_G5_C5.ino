// week08_Arduino_G5_C5
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // 建立 Serial 連線
  pinMode(8, OUTPUT); // 「發聲音」 的8
  tone(8, 784, 100);
  delay(100);
  tone(8, 523, 100);
  delay(100);
}
void serilEvent() { // 要收 USB Serial 資料
  while (Serial.available()){
    char now = Serial.read();
    if (now=='R') {
      tone(8, 784, 100);
      delay(100);
      tone(8, 523, 100);
      delay(100);

    }

    else {
      tone(8, 523, 100);
      delay(100);
      tone(8, 784, 100);
      delay(100);
    }
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  
}
