
#pragma once
#include "Singleton.h"

class Keyboard : public Singleton<Keyboard> {

	friend Singleton< Keyboard >;

public:
	//キーの入力状態を更新
	void Update();

	//引数のキーコードのキーの入力状態を返す
	int Get(int KeyCode);

private:
	int m_Key[256];  // キーの入力状態格納用変数
};