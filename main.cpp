/*! \file main.cpp
	\brief program to test the class rhombus and its funcitonalities
	Details.
*/

#include<iostream>

#include "rhombus.h"

int main() 
{

	//test variables
	float dH1;
	float dV1;

	float dH2;
	float dV2;

	float P;
	float A;

	Rhombus objA;
	Rhombus objB(4, 8);
	Rhombus objC = objB;

	objA.SetDim(5, 10);
	objA.SetDiagH(6);
	objA.SetDiagV(18);

	dH1 = objA.GetDiagH();
	dV1 = objA.GetDiagV();
	objA.GetDim(dH2, dV2);

	if (objC == objA) 
	{
		cout << "TEST - differents" << endl;
	}

	objC = objA;

	if (objC == objA) 
	{
		cout << "TEST - equals" << endl;
	}

	P = objA.GetPerimeter();
	A = objA.GetArea();
}