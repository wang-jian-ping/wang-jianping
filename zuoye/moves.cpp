#include<iostream>
using namespace std;
using i = int;
class A
{
private:
	int* i;
public:
	A() :i(new int(0)) 
	{ 
		cout << "����" << endl; 
	}

	A(const A& a) :i(new int(*a.i)) //����Ŀ������캯��
	{
		cout << "��������" << endl;
	}

	A(A&& a) :i(a.i)
	{
		a.i = nullptr;
		cout << "�ƶ�����" << endl;
	}

	~A()
	{
		cout << "����" << endl;
		delete i;
	}
};

A GetA()
{
	A b;
	return b;
}


int main() {

	A a = GetA();


	return 0;
}