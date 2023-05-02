/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "polygon.h"

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus :public Polygon {
private:
	float diagH;
	float diagV;
	float Side();
public:
	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus& r);
	~Rhombus();
	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);

	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);

	void GetDiagonals(float &dH, float &dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide();
	float Area();
	float Perimeter();
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
};
#endif