
#define BLYNK_TEMPLATE_ID "TMPL69SYacvHx"
#define BLYNK_TEMPLATE_NAME "Air Quality Monitoring System"
#define BLYNK_AUTH_TOKEN "DrOs22LcIlaBrRRFDMbQILuKf9AiKzLb"


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

#define GAS_PIN 35

char ssid[] = "Wokwi-GUEST";
char pass[] = "";


DHT dht(32,DHT22);

BlynkTimer timer;


void SendTempHumData()
{
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if(isnan(temp) || isnan(hum))
  {
    return;
  }

  Blynk.virtualWrite(V1,temp);
  Blynk.virtualWrite(V2,hum);
}

void SendGasData()
{
  int raw = analogRead(GAS_PIN);
  float gas = map(raw, 0,4095,0,1000);
  Blynk.virtualWrite(V0, gas);
}

void setup()
{
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  dht.begin();
  timer.setInterval(2000, SendTempHumData);
  timer.setInterval(2000, SendGasData);
}

void loop()
{
  Blynk.run();
  timer.run();
}
