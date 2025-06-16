#pragma region 과제
/**
도전 과제. for문 한줄로
	   *
	  ***
	 *****
	*******
	 *****
	  ***
	   *
*/
#pragma endregion 과제

#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

void main()
{
	cout << "\n도전과제: 별찍기 다이아몬드: 한 줄로\n";
	int maxStars = 16;
	cout << "도전과제 \n";
	for(int i=0; i<(maxStars*2) * (maxStars*2-1); ++i) cout << char((!((i+1) % (maxStars*2))) * '\n' + (!(!((i+1) % (maxStars*2))) && (((0 >((i%(maxStars*2))-(maxStars-1))) * (-1) * ((i%(maxStars*2))-(maxStars-1)) + (0<=((i%(maxStars*2))-(maxStars-1))) * ((i%(maxStars*2))-(maxStars-1)) + (0>((i/(maxStars*2))-(maxStars-1))) * (-1) * ((i/(maxStars*2))-(maxStars-1)) + (0<=((i/(maxStars*2))-(maxStars-1))) * ((i/(maxStars*2))-(maxStars-1)))< maxStars)) * '*' + (!(!((i+1) % (maxStars*2))) && !(((0 >((i%(maxStars*2))-(maxStars-1))) * (-1) * ((i%(maxStars*2))-(maxStars-1)) + (0<=((i%(maxStars*2))-(maxStars-1))) * ((i%(maxStars*2))-(maxStars-1)) + (0>((i/(maxStars*2))-(maxStars-1))) * (-1) * ((i/(maxStars*2))-(maxStars-1)) + (0<=((i/(maxStars*2))-(maxStars-1))) * ((i/(maxStars*2))-(maxStars-1)))< maxStars)) * ' ');

	cout << '\n';
}

