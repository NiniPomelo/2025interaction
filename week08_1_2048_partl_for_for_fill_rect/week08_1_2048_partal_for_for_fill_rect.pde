// week08_1_2048_partl_for_for_fill_rect
// File-Preference 字型放大

void setup(){
  size(410, 410); // 讓邊線漂亮一點
}
void draw(){
  background(188, 176, 162); // 色彩用滴管，吸範例的圖
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      fill(206, 194, 185); // 色彩用滴管，吸範例的圖
      noStroke(); // 不要有黑色外框
      rect(j*100+10, i*100+10, 90, 90, 5);
    }
  }
}
