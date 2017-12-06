#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

namespace AbstractFactory {

using std::cout;
using std::endl;
using std::string;

class Duck {
private:
	string m_name;
	FlyBehavior* m_flyBehavior;
	QuackBehavior* m_quackBehavior;

public:
	Duck(string name) 
	{
		this->m_name = name;
	}
	virtual ~Duck() {}
	void setFlyBehavior(FlyBehavior* flyBehavior)
	{
		m_flyBehavior = flyBehavior;
	}
	void setQuackBehavior(QuackBehavior* quackBehavior)
	{
		m_quackBehavior = quackBehavior;
	}
	void performFly()
	{
		cout << m_name << ":";
		m_flyBehavior->fly();
	}
	void performQuack()
	{
		cout << m_name << ":";
		m_quackBehavior->quack();
	}

	
};

// 绿头鸭
class MallardDuck : public Duck {
private:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
public:
	MallardDuck() : Duck("MallardDuck")
	{
		flyBehavior = new FlyWithWings();
		quackBehavior = new Quack();
		this->setQuackBehavior(quackBehavior);
		this->setFlyBehavior(flyBehavior);
	}
	virtual ~MallardDuck()
	{
		delete flyBehavior;
		delete quackBehavior;
	}

	void display()
	{
		cout << "I'm a real Mallard duck!" << endl;
	}
};

// 模型鸭
class ModelDuck : public Duck {
private:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
public:
	ModelDuck() : Duck("ModelDuck")
	{
		flyBehavior = new FlyNoWay();
		quackBehavior = new Quack();
		this->setQuackBehavior(quackBehavior);
		this->setFlyBehavior(flyBehavior);
	}
	~ModelDuck()
	{
		delete flyBehavior;
		delete quackBehavior;
	}


	void display()
	{
		cout << "I'm a model duck!" << endl;
	}
};

// 橡皮鸭
class RubberDuck : public Duck {
private:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
public:
	RubberDuck() : Duck("RubberDuck")
	{
		flyBehavior = new FlyNoWay();
		quackBehavior = new Squeak();
		this->setQuackBehavior(quackBehavior);
		this->setFlyBehavior(flyBehavior);
	}
	~RubberDuck()
	{
		delete flyBehavior;
		delete quackBehavior;
	}


	void display()
	{
		cout << "I'm a model duck!" << endl;
	}
};

}




#endif
