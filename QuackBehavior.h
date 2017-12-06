#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <iostream>


namespace AbstractFactory {

using std::cout;
using std::endl;

class QuackBehavior {
public:
	QuackBehavior() {}
	virtual ~QuackBehavior() {}
	virtual void quack() = 0;	
};

class Quack : public QuackBehavior {
public:
	void quack() 
	{
		// 实现鸭子呱呱叫
		cout << "Quack" << endl;
	}
};

class Squeak : public QuackBehavior {
public:
	void quack() 
	{
		// 橡皮鸭子吱吱叫
		cout << "Squeak" << endl;
	}
};

class MuteQuack : public QuackBehavior {
public:
	void quack() 
	{
		// 什么都不做，不会叫
		cout << "MuteQuack" << endl;
	}
};
}

#endif
