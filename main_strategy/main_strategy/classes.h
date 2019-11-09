#pragma once
#include <iostream>
using std::cout;
using std::endl;

class FlyBehavior
{
public:
	virtual void fly(void) = 0;
};

class QuackBehavor
{
public:
	virtual void quack(void) = 0;
};

class Quack:public QuackBehavor
{
public:
	void quack(void) override;
};

class Squeak : public QuackBehavor
{
	void quack(void) override;
};

class MuteQuack : public QuackBehavor
{
	void quack(void) override;
};

class FlyWithWings: public FlyBehavior
{
	void fly(void) override;
};

class FlyNoWay : public FlyBehavior
{
	void fly(void) override;
};

class Duck
{
public:
	Duck() {};

	virtual void display(void) = 0;
	void swim(void);
	void performQuack(void);
	void performFly(void);

	virtual ~Duck() {};
protected:
	FlyBehavior* flyBehavior;
	QuackBehavor* quackBehavior;
};

class ChangeBehavior: public Duck
{
public:
	ChangeBehavior() {};

	virtual void setQuckBehavior(QuackBehavor* _quackBehavior) = 0;
	virtual void setFlyBehavior(FlyBehavior* _flyBehavior) = 0;
};

class ModelDuck : public ChangeBehavior
{
public:
	ModelDuck(void);

	void setQuckBehavior(QuackBehavor* _quackBehavior) override;
	void setFlyBehavior(FlyBehavior* _flyBehavior) override;

	void display(void) override;

	~ModelDuck();
};

class MallardDuck : public Duck
{
public:
	void display(void) override;
};

class RedHeadDuck :public Duck
{
public:
	void display(void) override;
};

class RubberDuck :public Duck
{
public:
	void display(void) override;
};

class DecoyDuck : public Duck
{
public:
	void display(void) override;
};