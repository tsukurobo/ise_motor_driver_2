#include "Arduino.h"
#include "ti2c_slave.h"
#include <Wire.h>
#define SIZE 100

const char postfix = '$';

Ti2c::Ti2c(uint8_t i2caddr) {
  //initializer
  this->addr = i2caddr;
}

void Ti2c::sendStr(char buf[]) {
  int c = Wire.write(buf);// 1バイトをキューへ送信
}

void Ti2c::receiveStr() {
  char b_buf[SIZE] = "";
  int i = 0;
    byte val;

    while (Wire.available()) {
      val = Wire.read();
      if (val == postfix) {
        b_buf[i++] = '\0';
        break;
      } else {
        b_buf[i++] = val;
      }
    }
    if (val == postfix) {
      sprintf(this->buf, "%s", b_buf);
    }
}
