#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//����
int myMax(int a, int b);
//�P���x����
float myMax(float a, float b);
//�{���x����
double myMax(double a, double b);

//�֐��e���v���[�g
template <typename T>
T tMax(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

//�N���X�e���v���[�g
template <typename T>
class Vec2
{
public:
	T x1;
	T y1;
	T x2;
	T y2;

	T GetX() { return(x1); }
	void SetX(T _x) { x1 = _x; }


	void PrintVec() { cout << "(x,y)=(" << x1 << "," << y1 << ")" << endl; }
	void PrintMaxVec() { "(x1,y1)�@(x2,y2) : " << GetVecLength() << endl; }

	//�x�N�g���̒�����T�^�ŕԂ������o�֐������
	T GetVecLength(T _x, T _y) { return sqrt(_x * _x + _y * _y); }

	//�x�N�g���̒����Ŕ�r���鉉�Z�q���I�[�o�[���[�h
	T VecMax(T _xy1, T _xy2) { if (_xy1 < _xy2) { return _xy2; } return _xy1; }
};
//�x�N�g���̒�����T�^�ŕԂ������o�֐������
//�x�N�g���̒����Ŕ�r���鉉�Z�q���I�[�o�[���[�h
//�x�N�g���̒������ׂĒ�������\�����Ă����Ă��邩�m�F(tMax�ɓ����)


int main()
{
	//int var1 = 10;
	//int var2 = 20;
	////int res1 = myMax(var1, var2);
	//int res1 = tMax<int>(var1, var2);
	//cout << "myMax 10 20 : " << res1 << endl;
	//float var3 = 5.3;
	//float var4 = 6.7;
	////float res2 = myMax(var3, var4);
	//float res2 = tMax<float>(var3, var4);
	//cout << "myMax 5.3 6.7 : " << res2 << endl;
	//double var5 = 25.9;
	//double var6 = 23.2;
	////double res3 = myMax(var5, var6);
	//double res3 = tMax<double>(var5, var6);
	//cout << "myMax 25.9 23.2 : " << res3 << endl;


	Vec2<float> v;
	v.x1 = 2;
	v.y1 = 3;
	v.x2 = 4;
	v.y2 = 5;
	//v.PrintVec();

	//�x�N�g���̒������ׂĒ�������\�����Ă����Ă��邩�m�F(tMax�ɓ����)
	//float res = tMax<float>(v.GetVecLength(v.x1, v.y1), v.GetVecLength(v.x2, v.y2));
	//cout << res << endl;

	cout << v.VecMax(v.GetVecLength(v.x1, v.y1), v.GetVecLength(v.x2, v.y2)) << endl;

	return 0;
}

int myMax(int a, int b)
{
	if (a < b)
	{
		return b;
	}
	return a;
}

float myMax(float a, float b)
{
	if (a < b)
	{
		return b;
	}
	return a;
}

double myMax(double a, double b)
{
	if (a < b)
	{
		return b;
	}
	return a;
}
