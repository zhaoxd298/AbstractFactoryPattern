#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>

namespace AbstractFactory {

using std::cout;
using std::endl;

class FlyBehavior {
public:
	FlyBehavior() {}
	virtual ~FlyBehavior() {}
	virtual void fly() = 0;
};

class FlyWithWings : public FlyBehavior {
	void fly()
	{
		// 实现鸭子飞行
		cout << "FlyWithWings" << endl;
	}
};

class FlyNoWay : public FlyBehavior {
	void fly()
	{
		// 什么都不做，不会飞
		cout << "FlyNoWay" << endl;
	}
};

class FlyRocketPowered : public FlyBehavior {
	void fly()
	{
		// 像火箭一样飞
		cout << "FlyRocketPowered" << endl;
	}
};

}

#endif
