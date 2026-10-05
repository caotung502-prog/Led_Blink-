#include <Arduino.h>

// Hàm setup chạy 1 lần khi khởi động
void setup() {
  // Cấu hình chân LED_BUILTIN (chân 13) làm đầu ra (OUTPUT)
  pinMode(LED_BUILTIN, OUTPUT);
}

// Hàm loop lặp đi lặp lại vô hạn
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Bật đèn LED sáng
  delay(1000);                       // Chờ 1 giây (1000ms)
  digitalWrite(LED_BUILTIN, LOW);    // Tắt đèn LED
  delay(1000);                       // Chờ 1 giây
}
