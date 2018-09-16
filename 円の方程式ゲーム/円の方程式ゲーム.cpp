// 円の方程式ゲーム.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include"DxLib.h"
#include"DrawCircle.h"
#include"Game.h"
#include"Keyboard.h"
#define WIDTH 1280
#define HEIGHT 720



int main()
{
	SetGraphMode(WIDTH, HEIGHT, 16);
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);

	Game *pGame = new Game(WIDTH, HEIGHT);

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		pGame->DO();
	}
	DxLib_End();
	return 0;
}

