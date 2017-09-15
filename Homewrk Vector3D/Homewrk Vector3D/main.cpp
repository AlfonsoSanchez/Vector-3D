#include <iostream>
#include "Vec3.h"

int main()
{
	Vec3<int>v1(1, 1, 1);
	Vec3<int>v2(2, 2, 2);

	Vec3<int> v3 (1,1,1);

	
	std::cout << (v1 < v3);
	system("Pause");
	return 0;
}