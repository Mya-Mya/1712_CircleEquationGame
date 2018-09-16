#pragma once
namespace Mya {
	/*�~�̕�������{�^����������
	�R���X�g���N�^�ł͉�ʃT�C�Y�ƃf�t�H���gxyr���w�肷��
	SetDtail�ł�x���W�Ay���W�Ar�̍������w�肷��
	*/
	class DrawCircleFtomStandard {
	private:
		int width,height;
		int x, y, r;
		int color;
	public:
		//(width, height, x, y, r, color)
		DrawCircleFtomStandard(int inwidth, int inheight, int inx, int iny, int inr, int incolor);
		void SetDetail(int inx, int iny, int inr);
		void Draw();
		int CheckX();
		int CheckY();
		int CheckR();
	};
}


/*
DrawCircleFromGeneral
x^2 + y^2 + ax + bx + c = 0�@����
(x +  (a / 2))^2 + (y +  (b / 2))^2 - c -(a / 2)^2 - (b / 2)^2 = 0�@�ƂȂ�
(x-p)^2+(y-q)^2-r=0�Ƃ����
p=-(a / 2)
q=-(b / 2)
r=c+(a / 2)^2 +(b / 2)^2 �ƂȂ�
����͐��w��̍��W��Ԃɂ����Đ���ɕ`�悳�����̂Ȃ̂ŁADxLib��ł̍��W�ɕϊ����Ȃ��Ƃ����Ȃ�
��ʒ��������_�Ƃ��Ē��S���W��(x,y)�Ƃ����
x=p+WIDTH/2
y=-q+HEIGHT/2
*/