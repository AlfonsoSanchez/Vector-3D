#ifndef _VEC3D_
#define _VEC3D_


#include <iostream>
#include <math.h>
template <class TYPE>

class Vec3
{
public:
	//Required
		//Constructors
	Vec3();
	Vec3(TYPE x, TYPE y, TYPE z);
	Vec3(TYPE a);
	Vec3(const Vec3& vec2);
	~Vec3();
		//Operators
	Vec3 operator+ (Vec3 vec1, Vec3 vec2);
	void operator +=(const Vec3 vec1);
	Vec3 operator- (Vec3 vec1, Vec3 vec2);
	void operator -=(const Vec3 vec1);

	Vec3 operator*(Vec3 vec1, TYPE scalar);
	bool operator==(const Vec3 vec1, const Vec3 vec2);
	bool operator!=(const Vec3 vec1, const Vec3 vec2);
	bool operator <(const Vec3 vec1, const Vec3 vec2);
	bool operator>(const Vec3 vec1, const Vec3 vec2);
	//Optional
		//Calculations
	TYPE dotProduct(const Vec3 ve1,const Vec3 vec2);
	Vec3 crossProduct(const Vec3 vec1, const Vec3 vec2);
	Vec3 Min(const Vec3 vec1, const Vec3 vec2);
	Vec3 Max(const Vec3 vec1, const Vec3 vec2);
	Vec3 SpaceVector(const Vec3 vec1, const Vec3 vec2);
	TYPE ModuleVector(const Vec3 vec1);
	TYPE Distance2Vector(const Vec3 vec1,const Vec3 vec2);
	Vec3 UnitaryVector(const Vec3 vec1, const Vec3 vec2);
public:
	TYPE x, y, z;
};


#endif
