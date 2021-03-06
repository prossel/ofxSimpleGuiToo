#pragma once

#include "ofxSimpleGuiControl.h"


class ofxSimpleGuiColorPicker : public ofxSimpleGuiControl {
public:
	
	ofFloatColor    *value;
	float		min, max;
	
	float		barwidth[4];
	float		pct[4];
	
	ofxSimpleGuiColorPicker(string name, ofFloatColor& color, float max = 1);
	void setup();
#ifndef OFXMSAGUI_DONT_USE_XML
	void loadFromXML(ofxXmlSettings &XML);
	void saveToXML(ofxXmlSettings &XML);
#endif
	float getValue(int i);
	void setValue(float f, int i);
	void updateSlider();	
	void onPress(int x, int y, int button);
	void onDragOver(int x, int y, int button);
	void onDragOutside(int x, int y, int button);
	void update();
	void draw(float x, float y);
};
