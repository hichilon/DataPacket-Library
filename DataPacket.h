#ifndef DataPacket_h
#define DataPacket_h
#include <SoftwareSerial.h>

#include "Arduino.h"

class DataPacket{
	public:
		DataPacket();
		void print_packet(SoftwareSerial& OpenLog);
		float get_temp();
		float get_humid();
		unsigned long get_lowpulseoccupancy();
		float get_ratio();
		float get_concentration();
		int get_airquality();
		
		void set_temp(float temp);
		void set_humid(float humid);
		void set_lowpulseoccupancy(unsigned long lowpulseoccupancy);
		void set_ratio(float ratio);
		void set_concentration(float concentration);
		void set_airquality(int airquality);
	private:
		float _temp;
		float _humidity;
		unsigned long _lowpulseoccupancy;
		float _ratio;
		float _concentration;
		int _airquality;
};
#endif