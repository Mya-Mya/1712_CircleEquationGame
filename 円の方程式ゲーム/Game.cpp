#include "Game.h"
#include"DxLib.h"
#include"Keyboard.h"

Game::Game(int inwidth, int inheight)
{
	width = inwidth;
	height = inheight;
	pQ = new Mya::DrawCircleFtomStandard(width,height,0,0,100,GetColor(255,50,50));
	pA = new Mya::DrawCircleFtomStandard(width, height, 0, 0, 50,GetColor(255,255,255));
}

void Game::DO()
{
	Keyboard::Instance()->Update();
	
	if (Keyboard::Instance()->Get(KEY_INPUT_W) == 1) pA->SetDetail(0, 0, 5);
	if (Keyboard::Instance()->Get(KEY_INPUT_Z) == 1)pA->SetDetail(0, 0, -5);
	if (Keyboard::Instance()->Get(KEY_INPUT_UP) == 1)pA->SetDetail(0, 10, 0);
	if (Keyboard::Instance()->Get(KEY_INPUT_DOWN) == 1)pA->SetDetail(0, -10, 0);
	if (Keyboard::Instance()->Get(KEY_INPUT_LEFT) == 1)pA->SetDetail(-10, 0, 0);
	if (Keyboard::Instance()->Get(KEY_INPUT_RIGHT) == 1)pA->SetDetail(10, 0, 0);

	pA->Draw();
	pQ->Draw();

	DrawFormatString(0, 0, GetColor(255, 255, 255), "クエスチョンサークルが見えない時はEnterを押してください");

	if (Keyboard::Instance()->Get(KEY_INPUT_RETURN) == 1) {
		delete pQ;
		pQ = new Mya::DrawCircleFtomStandard(width, height, 0, 0, 100, GetColor(255, 50, 50));
	}
	if ((pA->CheckX()) != (pQ->CheckX())) return;
	if ((pA->CheckY()) != (pQ->CheckY())) return;
	if ((pA->CheckR()) != (pQ->CheckR())) return;
	pQ->SetDetail(-80 + 10 * (rand() % 16), -80 + 10 * (rand() % 16), -5 + 5 * (rand() % 5));
	
}


