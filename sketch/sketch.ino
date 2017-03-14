
// this example is public domain. enjoy!
// www.ladyada.net/learn/sensors/thermocouple

#include <max6675.h>
#include <ModbusRtu.h>

// data array for modbus network sharing
uint16_t au16data[16] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1 };

/**
 *  Modbus object declaration
 *  u8id : node id = 0 for master, = 1..247 for slave
 *  u8serno : serial port (use 0 for Serial)
 *  u8txenpin : 0 for RS-232 and USB-FTDI 
 *               or any pin number > 1 for RS-485
 */
Modbus slave(1,0,0); // this is slave @1 and RS-232 or USB-FTDI




int thermoDO = 4;
int thermoCS = 2;
int thermoCLK = 3;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);
int vccPin = 5;
int gndPin = 6;
  

int led = 9;  
  
void setup() {
  slave.begin( 19200, SERIAL_8E1 ); // 19200 baud, 8-bits, even, 1-bit stop
  // use Arduino pins 
  pinMode(vccPin, OUTPUT); digitalWrite(vccPin, HIGH);
  pinMode(gndPin, OUTPUT); digitalWrite(gndPin, LOW);
  pinMode(led, OUTPUT);
 delay(500);
  
}

void loop() {
  // basic readout test, just print the current temp
  
   //Serial.print("C = "); 
   
   au16data[2] = ((uint16_t) thermocouple.readCelsius()*100);
   analogWrite(led, (au16data[4]/100.0)*255);
   slave.poll( au16data, 16 );
   delay(500);
}
