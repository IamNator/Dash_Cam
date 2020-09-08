

/* The ESP32 has four SPi buses, however as of right now only two of
 * them are available to use, HSPI and VSPI. Simply using the SPI API 
 * as illustrated in Arduino examples will use VSPI, leaving HSPI unused.
 * 
 * However if we simply intialise two instance of the SPI class for both
 * of these buses both can be used. However when just using these the Arduino
 * way only will actually be outputting at a time.
 * 
 * Logic analyser capture is in the same folder as this example as
 * "multiple_bus_output.png"
 * 
 * created 30/04/2018 by Alistair Symonds
 */
#include <SPI.h>

static const int spiClk = 1000000; // 1 MHz

//uninitalised pointers to SPI objects
//SPIClass * vspi = NULL;
SPIClass * hspi = NULL;

void setup() {
  //initialise two instances of the SPIClass attached to VSPI and HSPI respectively
 // vspi = new SPIClass(VSPI);
  hspi = new SPIClass(HSPI);
  
  //clock miso mosi ss

 
  //initialise hspi with default pins
  //SCLK = 14, MISO = 12, MOSI = 13, SS = 15
  hspi->begin(); 
  //alternatively route through GPIO pins
  //hspi->begin(25, 26, 27, 32); //SCLK, MISO, MOSI, SS

  //set up slave select pins as outputs as the Arduino API
  //doesn't handle automatically pulling SS low
  pinMode(15, OUTPUT); //HSPI SS

}

// the loop function runs over and over again until power down or reset
void loop() {
  //use the SPI buses
  hspiCommand();
 // delay(100);
}



void hspiCommand() {
  byte stuff = 0b11001100;
  
  hspi->beginTransaction(SPISettings(spiClk, MSBFIRST, SPI_MODE0));
  digitalWrite(15, LOW);
  hspi->transfer(stuff);
  digitalWrite(15, HIGH);
  hspi->endTransaction();
}