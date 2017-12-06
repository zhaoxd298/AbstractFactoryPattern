#include "AbstractDuckFactory.h"

using namespace AbstractFactory;

int main()
{
	AbstractDuckFactory* duckFactory = new DuckFactory();

	Duck* rubber = duckFactory->createRubberDuck();
	Duck* mallardDuck = duckFactory->createMallardDuck();
	rubber->performQuack();
	rubber->performFly();

	mallardDuck->performQuack();
	mallardDuck->performFly();
	

	delete rubber;
	delete mallardDuck;
	delete duckFactory;
}