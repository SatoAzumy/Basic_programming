#include "Figures.h"

#pragma once

#ifndef QUADRILATERALS_H
#define QUADRILATERALS_H

class Quadrilateral : public Figure
{
public:
	Quadrilateral(int len_a, int len_b, int len_c, int len_d, int angle_A, int angle_B, int angle_C, int angle_D);
	std::string getNameFigure() override;
	void getValueSide() ;
	void getValueAngle() ;
	bool checkFigure() override;
	void print_info() override;
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};
class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int len_a, int len_b, int angle_A, int angle_B);
	std::string getNameFigure() override ;
	bool checkFigure() override;

private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

class Rectangles : public Parallelogram
{
public:
	Rectangles(int len_a, int len_b);
	std::string getNameFigure() override;
	bool checkFigure() override;

private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

class Square : public Rectangles
{
public:
	Square(int len_a);
	std::string getNameFigure() override;
	bool checkFigure() override;

private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

class Rrhomb : public Parallelogram
{
public:
	Rrhomb(int len_a, int angle_A, int angle_B);
	std::string getNameFigure() override;
	bool checkFigure() override;

private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

#endif 