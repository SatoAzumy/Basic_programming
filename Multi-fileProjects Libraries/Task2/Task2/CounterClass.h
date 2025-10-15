#pragma once
#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
	int count;
public:
	Counter(int count);
	int currentValue();
	void increaseValue();
	void decreaseValue();
};

#endif 