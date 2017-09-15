#ifndef _VEC3D_
#define _VEC3D_

#include <iostream>
#include <math.h>

template <class TYPE>
#define min(a, b) (a < b) ? a : b
#define max(a,b) (a > b) ? a : b

class Vec3
{
public:
	//Required
		//Constructors & Destructor
	Vec3();
	Vec3(TYPE x, TYPE y, TYPE z);
	Vec3(TYPE a);
	Vec3(const Vec3<TYPE>& vec2);
	~Vec3();
		//Operators
	Vec3 operator+ (Vec3<TYPE> vec1);
	void operator +=(const Vec3<TYPE> vec1);
	Vec3 operator- (Vec3<TYPE> vec1);
	void operator -=(const Vec3<TYPE> vec1);

	Vec3 operator*(const TYPE scalar);
	void operator*=(const TYPE scalar);
	bool operator==(const Vec3<TYPE> vec1);
	bool operator!=(const Vec3<TYPE> vec1);
	bool operator <(const Vec3<TYPE> vec1);
	bool operator>(const Vec3<TYPE> vec1);
	//Optional
		//Calculations
	TYPE dotProduct(const Vec3<TYPE> vec1,const Vec3<TYPE> vec2);
	Vec3 crossProduct(const Vec3<TYPE> vec1, const Vec3<TYPE> vec2);
	Vec3 Min(const Vec3<TYPE>& vec1);
	Vec3 Max(const Vec3<TYPE> vec1);
	Vec3 SpaceVector(const Vec3<TYPE> vec1);
	TYPE ModuleVector();
	TYPE Distance2Vector(const Vec3<TYPE> vec1);
	Vec3 UnitaryVector();
	void SetZero();
	
public:
	TYPE x, y, z;
};

template <class TYPE>
Vec3<TYPE>::Vec3(){ }

template <class TYPE>
Vec3<TYPE>::Vec3(TYPE x, TYPE y, TYPE z) : x(x), y(y), z(z){ }

template <class TYPE>
Vec3<TYPE>::Vec3(TYPE a) : x(a), y(a), z(a){ }

template <class TYPE>
Vec3<TYPE>::Vec3(const Vec3<TYPE>& vec2) : x(vec2.x), y (vec2.y), z(vec2.z) { }

template <class TYPE>
Vec3<TYPE>::~Vec3() { }

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator+(Vec3<TYPE> vec1)
{
	return Vec3<TYPE>(this->x + vec1.x, this->y + vec1.y, this->z + vec1.z);
}

template <class TYPE>
void Vec3<TYPE>::operator+=(Vec3<TYPE> vec1)
{
	this->x = this->x + vec1.x;
	this->y = this->y + vec1.y;
	this->z = this->z + vec1.z;
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator-(Vec3<TYPE> vec1)
{
	return Vec3<TYPE>(this->x - vec1.x, this->y - vec1.y, this->z - vec1.z);
}

template <class TYPE>
void Vec3<TYPE>::operator-=(Vec3<TYPE> vec1)
{
	this->x = this->x - vec1.x;
	this->y = this->y - vec1.y;
	this->z = this->z - vec1.z;
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::operator*(const TYPE scalar)
{
	return Vec3<TYPE>(this->x * scalar, this->y * scalar, this->z * scalar);
}

template <class TYPE>
void Vec3<TYPE>::operator*=(const TYPE scalar)
{
	this->x = this->x * scalar;
	this->y = this->y * scalar;
	this->z = this->z * scalar;
}

template <class TYPE>
bool Vec3<TYPE>::operator==(const Vec3<TYPE> vec1)
{
	return (this->x == vec1.x && this->y == vec1.y && this->z == vec1.z);
}

template <class TYPE>
bool Vec3<TYPE>::operator!=(const Vec3<TYPE> vec1)
{
	return (this->x != vec1.x && this->y != vec1.y && this->z != vec1.z);
}

template <class TYPE>
bool Vec3<TYPE>::operator<(const Vec3<TYPE> vec1)
{
	return (this->x < vec1.x && this->y < vec1.y && this->z < vec1.z);
}

template <class TYPE>
bool Vec3<TYPE>::operator>(const Vec3<TYPE> vec1)
{
	return (this->x > vec1.x && this->y > vec1.y && this->z > vec1.z);
}

template <class TYPE>
TYPE Vec3<TYPE>::dotProduct(const Vec3<TYPE> vec1, const Vec3<TYPE> vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y + vec1.z + vec2.z);
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::crossProduct(const Vec3<TYPE> vec1, const Vec3<TYPE> vec2) // the result is a vector perpendicular to the other two vectors
{
	return Vec3<TYPE>(vec1.y * vec2.z - vec1.z * vec2.y,
		              vec1.z * vec2.x - vec1.x * vec2.z,
		              vec1.x * vec2.y - vec1.y * vec2.x);
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::Min(const Vec3<TYPE>& vec1)
{
	return Vec3<TYPE>(min(this->x,vec1.x), min(this->y,vec1.y), min(this->z,vec1.z));
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::Max(const Vec3<TYPE> vec1)
{
	return Vec3<TYPE>(max(this->x,vec1.x), max(this->y,vec1.y), max(this->z,vec1.z));
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::SpaceVector(const Vec3<TYPE> vec1)
{
	return Vec3<TYPE>(vec1.x - this->x, vec1.y - this->y, vec1.z - this->z);
}

template <class TYPE>
TYPE Vec3<TYPE>::ModuleVector()
{
	return (sqrt(x * x + y * y + z * z));
}

template <class TYPE>
TYPE Vec3<TYPE>::Distance2Vector(const Vec3<TYPE> vec1)
{
	return (sqrt(pow(vec1.x - x, 2) + pow(vec1.y - y, 2) + pow(vec3.z - z, 2)));
}

template <class TYPE>
Vec3<TYPE> Vec3<TYPE>::UnitaryVector()
{
	TYPE module = (sqrt(x * x + y * y + z * z));
	return Vec3<TYPE>(x / module, y / module, z / module);
}

template <class TYPE>
void Vec3<TYPE>::SetZero()
{
	this->x = 0, this->y = 0, this->z = 0;
}
#endif
