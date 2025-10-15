#include "CounterClass.h"

 Counter::Counter(int count)
{
	this->count = count;
}
int Counter::currentValue()
{
	return this->count;
}
void Counter::increaseValue()
{
	this->count++;
}
void Counter::decreaseValue()
{
	this->count--;
}

