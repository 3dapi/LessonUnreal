
//#include "Example03.h"
#include <memory>
#include "MainGame_02.h"

static unsigned int number = 0;

struct Vec3
{
	int x, y, z;
	Vec3(int x=100, int y=200, int z=300)
		: x{ x }, y{ y }, z{z}
	{
		cout << "생성자 호출: " << "x: " << x << "   y: " << y << "  z: " << z<<  endl;
	}

	~Vec3()
	{
		cout << "소멸자 호출: " << number <<  endl;
		++number;
	}
};
int main()
{
	int xx;

	//{
	//	std::unique_ptr<Vec3[]> cc1{new Vec3[4]{ { 1, 2, 3 }, }};
	//	std::unique_ptr<Vec3[]> cc2 = std::make_unique<Vec3[]>(4);
	//}
	//
	MainGame_02::main();
	return 0;
}
