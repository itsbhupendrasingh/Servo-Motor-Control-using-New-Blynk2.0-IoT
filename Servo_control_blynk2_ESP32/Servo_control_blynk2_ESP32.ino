/*
 * This program is property of SME Dehradun. for any query related to this program, 
 * contact us at www.smedehradn.com
 * if your want any soluiton related for any IoT Customized Boards and Sensor, 
 * then contact to www.nuttyengineer.com 
 */
// Fill-in information from your Blynk Template here

#define BLYNK_TEMPLATE_ID "TMPL4aFAOfUh"
#define BLYNK_DEVICE_NAME "Servo control blynk20"

#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#include "BlynkEdgent.h"
#include<Servo.h>
Servo servo;

BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); 
  servo.write(s0);
  Blynk.virtualWrite(V1, s0);
}

void setup()
{
  Serial.begin(9600);
  servo.attach(13);
  BlynkEdgent.begin();
  delay(2000); 
}

void loop() 
{
  BlynkEdgent.run();
}
