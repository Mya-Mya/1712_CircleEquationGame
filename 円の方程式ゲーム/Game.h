#pragma once

#include "DrawCircle.h"

class Game {
private:
	Mya::DrawCircleFtomStandard *pQ;
	Mya::DrawCircleFtomStandard *pA;
	int width, height;
public:
	Game(int inwidth,int inheight);
	void DO();
	
};