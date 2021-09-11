#include <iostream>
#include <cmath>
using namespace std;
class MyClass
{
public:
	MyClass(int size)

	{
		cout << "вызов конструктора         "<< x << endl;
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		for (int i = 0; i < size; i++)
		{
			cout << data[i] << endl;
		}


	}
	/*
	MyClass(int x, int y)
	{
		cout << "Конструктур с 2 аргументатми" << this << endl;
		this->x = x;
		this->y = y;
	}
	*/
	~MyClass()
	{
		delete[] data;
		cout << "вызов десттруктора" << endl;
	}
	
	void sum();
private:
	int* data;
	int x=7;
	int y = 10;
	
	friend void vor(MyClass &z);
	friend int pop(MyClass w);
};

class My
{
public:
	My();
	~My();
	int sum();

private:
	int x = 4;
	int y = 44;
};


int My::sum()
{
	int l = x + y;
	cout << l;
	return l;
}
void vor(MyClass &z)
{
	z.x = 10;
	int p = z.x;
	
}

void func()
{
	cout << "вызов функции" << endl;
	MyClass a(5);
	cout << "закрытие функции" << endl;
}
int main()
{
	setlocale(LC_ALL, "rus");
	func();
	MyClass g(5);
	
	My i;
	i.sum();


	return 0;
}