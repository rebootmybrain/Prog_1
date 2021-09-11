#include <iostream>
#include <cmath>
#include<string>
using namespace std;

class Car
{
public:
	
	virtual void Engine()
	{
		cout << "vjjjjvjjjjj";
	}
	

private:

};

class Gelic : public Car
{
public:
	
	void Engine() override
	{
		cout << "BROOMBRBRBR";
	}
	

private:

};

class Tesla: public Car
{
public:
	
	void Engine() override
	{
		cout << "----------";
	}
	

private:

};
int main()
{
	Car car;
	car.Engine();

}