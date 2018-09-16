
#pragma once
#include "Singleton.h"

class Keyboard : public Singleton<Keyboard> {

	friend Singleton< Keyboard >;

public:
	//�L�[�̓��͏�Ԃ��X�V
	void Update();

	//�����̃L�[�R�[�h�̃L�[�̓��͏�Ԃ�Ԃ�
	int Get(int KeyCode);

private:
	int m_Key[256];  // �L�[�̓��͏�Ԋi�[�p�ϐ�
};