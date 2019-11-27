#ifndef IMD_GLOBAL_H
#define IMD_GLOBAL_H



typedef enum I2CAddrMode {
  I2C_PRESET,
  I2C_ADDR1,
  I2C_ADDR2,
} I2CAddrMode;

typedef enum PIDMode {
  PID_POSITION,
  PID_VELOCITY,
} PIDMode;

bool is_pid, is_brake, is_test;
long int counter;
I2CAddrMode i2c_addr_mode;
PIDMode pid_mode;
//Ti2c receiver;



#endif

