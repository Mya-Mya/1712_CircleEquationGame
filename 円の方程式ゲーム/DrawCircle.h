#pragma once
namespace Mya {
	/*円の方程式基本型を実装する
	コンストラクタでは画面サイズとデフォルトxyrを指定する
	SetDtailではx座標、y座標、rの差分を指定する
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
x^2 + y^2 + ax + bx + c = 0　から
(x +  (a / 2))^2 + (y +  (b / 2))^2 - c -(a / 2)^2 - (b / 2)^2 = 0　となり
(x-p)^2+(y-q)^2-r=0とすると
p=-(a / 2)
q=-(b / 2)
r=c+(a / 2)^2 +(b / 2)^2 となる
これは数学上の座標空間において正常に描画されるものなので、DxLib上での座標に変換しないといけない
画面中央を原点として中心座標を(x,y)とすると
x=p+WIDTH/2
y=-q+HEIGHT/2
*/