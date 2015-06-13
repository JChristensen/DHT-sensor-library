//Basic DHT sensor test sketch using floating point variables.
//Jack Christensen Jun-2015

#include <DHT.h>                //http://github.com/JChristensen/DHT-sensor-library
#include <Streaming.h>          //http://arduiniana.org/libraries/streaming/

const uint8_t DHT_PIN(2);       //connect sensor to this pin

//uncomment one line below to match the sensor being used
//const uint8_t DHT_TYPE(DHT11);  //DHT 11 
//const uint8_t DHT_TYPE(DHT21);  //DHT 21 (AM2301)
const uint8_t DHT_TYPE(DHT22);  //DHT 22  (AM2302)

DHT dht(DHT_PIN, DHT_TYPE);     //initialize sensor for regular 16MHz Arduino

void setup(void)
{
    Serial.begin(9600); 
    Serial << F( "\n" __FILE__ " " __DATE__ " " __TIME__ "\n" );
    dht.begin();
}

void loop(void)
{
    delay(2000);    //must wait at least 2 seconds between measurements (it's a slow sensor)
    float rh = dht.readHumidity();
    float c = dht.readTemperature();    //read temperature as Celsius
    if ( isnan(rh) || isnan(c) )
    {
        Serial << F("Sensor read error!\n");
    }
    else
    {
        Serial << _FLOAT(c, 1) << F(" C\t\t") << _FLOAT(rh, 1) << F(" %RH\n");
    }
  }
