#include<iostream>
using namespace std;
using i = int;
class people
{
	friend class animal;
	i age;
	i weight;
	char name;
};

class animal
{
public:
	
	void run()
	{
		cout<<"usingÓëÓÑÔªº¯Êý"<<endl;
	}
};
int main()
{
	animal A;
	A.run();
	return 0;
//}


