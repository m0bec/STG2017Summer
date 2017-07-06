#pragma once
#include "ofMain.h"

class GraphTitle
{
public:
	GraphTitle();
	~GraphTitle();
	ofImage gr_back_ground;
	
	void LoadGraph();
	void UnLoadGraph();
	void DrawGr();
};