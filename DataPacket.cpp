#include "Arduino.h"
#include "DataPacket.h"
#include <SoftwareSerial.h>

DataPacket::DataPacket(){
	_temp = 0.0;
	_humidity = 0.0;
	_lowpulseoccupancy = 0;
	_ratio = 0.0;
	_concentration = 0.0;
	_airquality = 0;
}

void DataPacket::print_packet(SoftwareSerial& OpenLog){
	Serial.println(_temp);
	Serial.println(_humidity);
	Serial.println(_lowpulseoccupancy);
	Serial.println(_ratio);
	Serial.println(_concentration);
	Serial.println(_airquality);
	
	OpenLog.println(_temp);
	OpenLog.println(_humidity);
	OpenLog.println(_lowpulseoccupancy);
    OpenLog.println(_ratio);
    OpenLog.println(_concentration);
	OpenLog.println(_airquality);
}

int DataPacket::get_airquality(){
	return _airquality;
}
float DataPacket::get_temp(){
	return _temp;
}
float DataPacket::get_humid(){
	return _humidity;
}
unsigned long DataPacket::get_lowpulseoccupancy(){
	return _lowpulseoccupancy;
}
float DataPacket::get_ratio(){
	return _ratio;
}
float DataPacket::get_concentration(){
	return _concentration;
}


void DataPacket::set_airquality(int airquality){
	_airquality = airquality;
}		
void DataPacket::set_temp(float temp){
	_temp = temp;
}
void DataPacket::set_humid(float humid){
	_humidity = humid;
}
void DataPacket::set_lowpulseoccupancy(unsigned long lowpulseoccupancy){
	_lowpulseoccupancy = lowpulseoccupancy;
}
void DataPacket::set_ratio(float ratio){
	_ratio = ratio;
}
void DataPacket::set_concentration(float concentration){
	_concentration = concentration;
}