# DHT Sensor Library #

This is Adafruit's Arduino library for the DHT series of low cost temperature/humidity sensors. 

To download, click the DOWNLOADS button in the top right corner, rename the uncompressed folder DHT. Check that the DHT folder contains DHT.cpp and DHT.h. Place the DHT library folder your <arduinosketchfolder>/libraries/ folder. You may need to create the libraries subfolder if its your first library. Restart the IDE.

### Revision History ###
**Jack Christensen Jun-2015**  
Added getData() function to return temperature and relative humidity as integers, C\*10 and RH\*10. This reduces code footprint by over 1800 bytes. Added basic examples to compare using floating point variables vs. integers.