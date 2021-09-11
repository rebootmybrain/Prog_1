#include <iostream>
#include <cmath>
#include<string>
using namespace std;

class One
{ 
private:
	string st;
public:
	One()
	{
		cout << "конструктор 1"<< endl;
	}
	One(string st)
	{
		this->st = st;
		cout << st<< endl;
	}
	string name = "Abobous";
	string color;
	string GetName()
	{

		cout << name<< endl;
		return name;
	}
	void SetName(string name)
	{
		this->name = name;
	}
	~One()
	{
		cout << "deконструктор 1" << endl;
	}
};


class Two : public One
{
public:
	Two(): One("xyz")
	{
		cout << "конструктор 2"<< endl;
	}
	~Two()
	{
		cout << "deконструктор 2" << endl;
	}
	string size;

};
int main()
{
	setlocale(LC_ALL, "rus");
	One one;
	one.color;
	one.name;
	Two two;
	two.size;
	two.name;
	two.GetName();
	one.GetName();
	two.SetName("Bishbarmak");
	two.GetName();
}


