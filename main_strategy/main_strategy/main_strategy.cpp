#include "classes.h"

void duckOrNot(Duck* duck) {
	duck->display();
}

int main()
{
	ModelDuck* modelDuck = new ModelDuck();

	cout << "Set duck behavior" << endl;
	modelDuck->setFlyBehavior(new FlyWithWings);
	modelDuck->setQuckBehavior(new Quack);

	
	modelDuck->performFly();
	modelDuck->performQuack();
	cout << endl;

	cout << "Another set duck behavior" << endl;
	modelDuck->setFlyBehavior(new FlyNoWay);
	modelDuck->setQuckBehavior(new Squeak);


	modelDuck->performFly();
	modelDuck->performQuack();

	duckOrNot(modelDuck);
	delete modelDuck;
	
	cout << endl;

    return 0;
}