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
		cout << "构造" << endl; 
	}

	A(const A& a) :i(new int(*a.i)) //深拷贝的拷贝构造函数
	{
		cout << "拷贝构造" << endl;
	}

	A(A&& a) :i(a.i)
	{
		a.i = nullptr;
		cout << "移动构造" << endl;
	}

	~A()
	{
		cout << "析构" << endl;
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