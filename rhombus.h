/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <math.h>

using namespace std;


/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus
{
private:
	float diagH;
	float diagV;
	
	float Side();

public:

	//default constructor
	Rhombus();

	// init constructor
	Rhombus(float dH, float dV);

	//copy constructor
	Rhombus(const Rhombus &r);
	
	//destructor
	~Rhombus();
	
	//overload operator =
	Rhombus& operator=(const Rhombus &r); 

	//overload operator ==
	bool operator==(const Rhombus &r);

	
	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);
	
	void GetDim(float &dH, float &dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide();
	
	float GetArea();
	float GetPerimeter();
	

};

#endif