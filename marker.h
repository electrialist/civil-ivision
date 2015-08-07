//Marker.h
#pragma once
#include <string>
#include <opencv\cv.h>
#include <opencv\highgui.h>
using namespace std;
using namespace cv;

class Marker
{
public:
	Marker(void);
	~Marker(void);

	Marker(string name);

	int getXpos();
	void setXpos(int x);

	int getYpos();
	void setYpos(int Y);

	Scalar getHSVmin();
	Scalar getHSVmax();

	void setHSVmin(Scalar min);
	void setHSVmax(Scalar max);

	string getType(){ return type; }
	void setType(string t){ type = t; }

	Scalar getColour(){
		return Colour;
	}
	void setColour(Scalar c){
		Colour = c;
	}

private:
	
	int xPos, yPos;
	string type;
	cv::Scalar HSVmin, HSVmax;
	Scalar Colour;
};
