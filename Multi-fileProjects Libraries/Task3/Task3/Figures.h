#include <iostream>
#include <Windows.h>

#pragma once

#ifndef FIGURES_H
#define FIGURES_H

class Figure
{
public:
	Figure(int length);
	virtual void getSideLength();
	virtual std::string getNameFigure();
	virtual bool checkFigure(); 
	virtual void print_info();
private:
	int sideLength;
};

#endif 
