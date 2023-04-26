/// \file rhombus.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "rhombus.h"

/// @brief default constructor 
Rhombus::Rhombus() {

	cout << "Rhombus - constructor - default" << endl;

	diagH = 0.;
	diagV = 0.;
}

/// @brief constructor 
/// @param dH diagH of the rhombus
/// @param dV diagV of the rhombus
Rhombus::Rhombus(float dH, float dV) {

	diagH = 0.;
	diagV = 0.;

	cout << "Rhombus - constructor" << endl;

	if (dH <= 0.) 
		cout << "WARNING: Rhombus - constructor: DiagH should be > 0" << endl;
	else
		diagH = dH;

	if (dV <= 0.) 
		cout << "WARNING: Rhombus - constructor: DiagL should be > 0" << endl;
	else
		diagV = dV;

}


/// @brief copy constructor 
/// @param reference to the object that should be copied 
Rhombus::Rhombus(const Rhombus &r) { 

	cout << "Rhombus - copy constructor" << endl;

	diagH = r.diagH;
	diagV = r.diagV;
	
}


/// @brief destructor 
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;

}


/// @brief overload of operator = 
/// @param reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus &r) { 

	cout << "Rhombus - operator =" << endl;

	diagH = r.diagH;
	diagV = r.diagV;
	
	return *this;	
}

/// @brief overload of operator == 
/// @param reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rhombus::operator==(const Rhombus &r) { 

	if (r.diagH == diagH && r.diagV == diagV)
	{
		return true;
	}

	return false;
}


/// @brief set diagonals of the object
/// @param dH DiagH 
/// @param dV DiagV 
void Rhombus::SetDim(float dH, float dV) {

	SetDiagH(dH);
	SetDiagV(dV);
}


/// @brief set diagH of the object
/// @param dH diagH 
void Rhombus::SetDiagH(float dH) {

	if (dH < 0.) {
		cout << "WARNING: Rhombus - SetWidth: width should be > 0" << endl;
		return;
	}

	diagH = dH;

}

/// @brief set diagV of the object
/// @param dV diagV 
void Rhombus::SetDiagV(float dV) {

	if (dV < 0.) {
		cout << "WARNING: Rhombus - SetLength: length should be > 0" << endl;
		return;
	}

	diagV = dV;

}


/// @brief get diagH and diagV of the object
/// @param dH diagH 
/// @param dV diagV
void Rhombus::GetDim(float &dH, float &dV) {

	dH = diagH;
	dV = diagV;
	
	return;
}


/// @brief get diagH of the object
/// @return diagH 
float Rhombus::GetDiagH() {

	return diagH;

}

/// @brief get diagV of the object
/// @return diagV
float Rhombus::GetDiagV() {

	return diagV;
}


/// @brief get side of the object 
/// @return side's value of rhombus
float Rhombus::GetSide() {
	
	return (float)sqrt( pow( diagH/2 , 2 ) + pow( diagV/2 , 2 ) );

}


/// @brief get the area of the object
/// @return area of the Rhombus
float Rhombus::GetArea() {

	return ((float)diagH * (float)diagV)/ (float)2;

}

/// @brief get the perimeter of the object
/// @return perimeter of the Rhombus
float Rhombus::GetPerimeter() {

	float s = Side();
	return (4 * s);

}


