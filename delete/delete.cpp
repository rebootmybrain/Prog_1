#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Human;
class Apple;


class ass
{
public:
	ass(int x1, int x2)
	{
		this->x1 = x1;
		this->x2 = x2;
	}

	void printing()
	{
		cout << x1 + x2 << endl << endl;
	}

	
private:
	int x1, x2;

	class pop
	{
	public:
		pop(int m)
		{
			this->m = m;
			
		}
		string Get()
		{
			return "m = " + to_string(m);
		}

	private:
		int m;
		
	};

	

	
};

class Human
{
public:
	void take(Apple & apple);
	void Eat(Apple & apple)
	{
		
	}
	
private:
	
	
};

class Apple
{
	
	friend Human;
public:
	static int count;
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		count++;
		id = count;
	}
	int GetId()
	{
		return id;
	}
	void print()
	{
		cout << weight << " " << color;
	}
	//friend void Human::take(Apple& apple);

	static void Changer(Apple& apple, string cl)
	{
		apple.color = cl;
	}
private:
	int weight;
	string color;
	int id;

};

class Pop
{
public:
	Pop()
	{
		r = g = b = 0;
	}
	Pop(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;

	}
	string Get()
	{
		return "massiv " + to_string(r) +"  " + to_string(g) +"  " + to_string(b);
	}

private:
	int r;
	int g;
	int b;

};


int Apple::count=0;

void Human::take(Apple& apple)
{
	cout << apple.weight <<"   " << apple.color<<endl;
}

int main()
{
	ass one(2, 29);
	one.printing();



	setlocale(LC_ALL, "rus");
	Apple apple(150, "red");
	Apple apple2(222, "blue");
	Apple apple3(111, "black");
	
	
	
	Human human;
	
	human.take(apple);
	human.take(apple2);
	human.take(apple3);
	
	cout << apple.count << endl;
	
	cout << apple.GetId() << endl;
	cout << apple2.GetId() << endl;
	cout << apple3.GetId() << endl;

	apple.Changer(apple, "Purple");

	human.take(apple);
	
	const int len = 5;
	Pop arr[len]
	{
		Pop(121,23,2322),
		Pop(14321,245763,2322),
		Pop(188921,267683,23672),
		Pop(178721,26563,23768722),
		Pop(1545321,45423,236522),


	};
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].Get() << endl;

	}
	
	return 0;
}
