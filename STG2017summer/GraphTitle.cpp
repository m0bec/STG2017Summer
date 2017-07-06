#include "GraphTitle.h"

GraphTitle::GraphTitle()
{

}

GraphTitle::~GraphTitle(){

}

void GraphTitle::LoadGraph()
{
	gr_back_ground.load("background_title.png");
}

void GraphTitle::UnLoadGraph()
{

}

void GraphTitle::DrawGr()
{
	gr_back_ground.draw(0, 0);
}