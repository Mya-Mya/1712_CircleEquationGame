#include"DrawCircle.h"
#include"DxLib.h"

Mya::DrawCircleFtomStandard::DrawCircleFtomStandard(int inwidth, int inheight,int inx,int iny,int inr, int incolor) 
{
	width=inwidth ;
	height=inheight ;
	color = incolor;
	//‰æ–Ê’†‰›‚ğŒ´“_‚Æ‚·‚é
	x =inx + (width / 2);
	y =(-1)*iny + (height / 2);
	r =inr;
}

void Mya::DrawCircleFtomStandard::SetDetail(int inx, int iny, int inr)
{
	x += inx;
	y += (-1)*iny;
	r += inr;

	//Á‚¦‚È‚¢‚æ‚¤‚É
	if (r < 10) r = 10;
}

void Mya::DrawCircleFtomStandard::Draw()
{
	DxLib::DrawCircle(x, y,r, color, FALSE);
}

int Mya::DrawCircleFtomStandard::CheckX() {
	return x;
}

int Mya::DrawCircleFtomStandard::CheckY() {
	return y;
}

int Mya::DrawCircleFtomStandard::CheckR() {
	return r;
}