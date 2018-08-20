#include <cstdio> // printf()
#include <unistd.h> // sleep()
#include "Adafruit_ADS1015.h"
#include <iostream>

using namespace std;
int main() {
	printf("Hello!\n");
	
	printf("Getting single-ended readings from AIN0..3\n");
	printf("ADC Range: +/- 6.144V (1 bit = 3mV/ADS1015, 0.1875mV/ADS1115)\n");
	
	Adafruit_ADS1015 ads = Adafruit_ADS1015(0x48); /* Use this for the 12-bit version */
	
	cout << "after\n";
	
// The ADC input range (or gain) can be changed via the following functions, but be careful never to exceed VDD +0.3V max, or to exceed the upper and lower limits if you adjust the input range! Setting these values incorrectly may destroy your ADC!

	// ads.setGain(GAIN_TWOTHIRDS);		// 2/3x gain +/- 6.144V	1 bit = 3mV (default)
	// ads.setGain(GAIN_ONE);			// 1x gain	 +/- 4.096V	1 bit = 2mV
	// ads.setGain(GAIN_TWO);			// 2x gain	 +/- 2.048V	1 bit = 1mV
	// ads.setGain(GAIN_FOUR);			// 4x gain	 +/- 1.024V	1 bit = 0.5mV
	// ads.setGain(GAIN_EIGHT);			// 8x gain	 +/- 0.512V	1 bit = 0.25mV
	// ads.setGain(GAIN_SIXTEEN);		// 16x gain	+/- 0.256V	1 bit = 0.125mV

// The data sample rate (SPS: Sample per second) can be set between 128 and 3300 SPS for the ADS1015 with a default value of 1600 SPS.
	// ads.setSps(SPS_128);	// SPS:		128
	// ads.setSps(SPS_250);	// SPS:		250
	// ads.setSps(SPS_490);	// SPS:		490
	// ads.setSps(SPS_920);	// SPS:		920
	// ads.setSps(SPS_1600); // SPS:	1600 (default)
	// ads.setSps(SPS_2400); // SPS:	2400
	// ads.setSps(SPS_3300); // SPS:	3300
	
	while(1) {
		//int16_t adc0;
		//int16_t adc1;
		//int16_t adc2;
		int16_t adc3;

		//adc0 = ads.readADC_SingleEnded(0);
		//adc1 = ads.readADC_SingleEnded(1);
		//adc2 = ads.readADC_SingleEnded(2);
		cout << "before adc3 read\n";
		adc3 = ads.readADC_SingleEnded(3);
		cout << "after adc3 read\n";
		//printf("AIN0: %d\n", adc0);
		//printf("AIN1: %d\n", adc1);
		//printf("AIN2: %d\n", adc2);
		cout << "AIN3: " << adc3 << "\n";		
		sleep(1);
	}
}