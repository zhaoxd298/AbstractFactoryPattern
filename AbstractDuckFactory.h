#ifndef ABSTRACTDUCKFACTORY_H
#define ABSTRACTDUCKFACTORY_H

#include "Duck.h"

namespace AbstractFactory {
	
// 抽象工具接口
class AbstractDuckFactory
{
public:
	AbstractDuckFactory() {}
	virtual ~AbstractDuckFactory() {}	

	virtual Duck* createMallardDuck() = 0;
	virtual Duck* createModelDuck() = 0;
	virtual Duck* createRubberDuck() = 0;
};


class DuckFactory : public AbstractDuckFactory
{
public:
	DuckFactory() {}
	virtual ~DuckFactory() {}

	Duck* createMallardDuck()
	{
		return new MallardDuck();
	}
	Duck* createModelDuck()
	{
		return new ModelDuck();
	}
	Duck* createRubberDuck() 
	{
		return new RubberDuck();
	}	
};

}





#endif
