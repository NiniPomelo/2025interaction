// week07_2_arduino_blink_blink
// 修改自 week07_1_arduini_blink 只是再多插一支 LED
// 小心, 有一支要接地GND, 另一支要接 13
// 小心, 有一支腳要接GND, 另一支要接 12 (多這一行)
void setup() {
  pinMode(12, OUTPUT); // 把第12隻腳,能送出資料 OUTPUT (多這一行)
  pinMode(13, OUTPUT); // 把第13隻腳,能送出資料 OUTPUT
}

void loop() {
  digitalWrite(12, HIGH); // 發亮
  digitalWrite(13, LOW); // 暗掉
  delay(500);
  digitalWrite(12, LOW); // 暗掉
  digitalWrite(13, HIGH); // 發亮
  delay(500);
}
