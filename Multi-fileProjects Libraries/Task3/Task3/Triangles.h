#include "Figures.h"

#pragma once

#ifndef TRIANGLES_H
#define TRIANGLES_H

class Triangle : public Figure
{
public:
	Triangle(int len_a, int len_b, int len_c, int angle_A, int angle_B, int angle_C);
	std::string getNameFigure() override;
	void getValueSide();
	void getValueAngle();
	bool checkFigure() override;
	void print_info() override;
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

class Right_angled_Triangle : public Triangle
{
public:
	Right_angled_Triangle(int len_a, int len_b, int len_c, int angle_A, int angle_B);
	std::string getNameFigure() override;
	bool checkFigure() override;
	
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

class Isosceles_Triangle : public Triangle
{
public:
	Isosceles_Triangle(int len_a, int len_b, int angle_A, int angle_B);
	std::string getNameFigure() override;
	bool checkFigure() override;

private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

class Equilateral_Triangle : public Triangle
{
public:
	Equilateral_Triangle(int len_a);
	std::string getNameFigure() override;
	bool checkFigure() override;

private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

#endif 