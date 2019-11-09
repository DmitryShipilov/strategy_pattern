#include "classes.h"

void FlyWithWings::fly(void) {
	std::cout << "FlyWithWings" << std::endl;
}

void FlyNoWay::fly(void) {
	cout << "FlyNoWay" << endl;
}

void Quack::quack(void) {
	cout << "Duck quacks" << endl;
}

void Squeak::quack(void) {
	cout << "Rubber duck quacks" << endl;
}

void MuteQuack::quack(void) {
	cout << "Mute quack (no sound)" << endl;
}

void Duck::display(void) {

}

void Duck::performQuack(void) {
	this->quackBehavior->quack();
}

void Duck::performFly(void) {
	this->flyBehavior->fly();
}

void Duck::swim(void) {
	cout << "Every duck can swim!" << endl;
}


ModelDuck::ModelDuck(void)
{
	this->flyBehavior = new FlyNoWay;
	this->quackBehavior = new Quack;
}

void ModelDuck::setFlyBehavior(FlyBehavior* _flyBehavior) {
	this->flyBehavior = _flyBehavior;
}

void ModelDuck::setQuckBehavior(QuackBehavor* _quackBehavior) {
	this->quackBehavior = _quackBehavior;
}

void ModelDuck::display(void) {
	cout << "I'm model duck!" << endl;
}

ModelDuck::~ModelDuck() {
	delete this->flyBehavior, this->quackBehavior;
}

void MallardDuck::display(void) {
	cout << "I'm MallardDuck" << endl;
}

void RedHeadDuck::display(void) {
	cout << "I'm RedHeadDuck" << endl;
}

void RubberDuck::display(void) {
	cout << "I'm rubberDuck!" << endl;
}

void DecoyDuck::display(void) {
	cout << "I'm DecoyDuck" << endl;
}