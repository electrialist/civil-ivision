//Marker.cpp
//This is an include file of the main program.

#include "Marker.h"
Marker::Marker(){
}

Marker::Marker(string name){
	setType(name);
	if (name == "yellow"){
		setHSVmin(Scalar(25, 50, 131));
		setHSVmax(Scalar(40, 213, 221));
		setColour(Scalar(230, 245, 50));
	}
}
Marker::~Marker(){
}
int Marker::getXpos(){
	return Marker::xPos;
}
void Marker::setXpos(int x){
	Marker::xPos = x;
	xPos = x;
}
int Marker::getYpos(){
	return Marker::yPos;
}
void Marker::setYpos(int y){
	Marker::yPos = y;
	yPos = y;
}
Scalar Marker::getHSVmin(){
	return Marker::HSVmin;
}
Scalar Marker::getHSVmax(){
	return Marker::HSVmax;
}
void Marker::setHSVmin(Scalar min){
	Marker::HSVmin = min;
}
void Marker::setHSVmax(Scalar max){
	Marker::HSVmax = max;} 
