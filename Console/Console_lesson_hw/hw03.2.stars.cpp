#pragma region 과제
/**

과제 02. 반복문 숙달 (별찍기)
while
	*
   **
  ***
 ****
*****
 ****
  ***
   **
	*
for
*****
****
***
**
*
**
***
****
*****
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
	cout << "\n과제02. 별찍기\n";
	int maxStars = 16;

	// test while 1
	cout << "while-loop 로 별찍기\n";
	int drawStars=maxStars;
	while(drawStars)
	{
		int lineDraw = 0;
		while(lineDraw <drawStars-1)
		{
			cout << ' ';
			++lineDraw;
		}
		lineDraw = drawStars;
		while(lineDraw<=maxStars)
		{
			cout << '*';
			++lineDraw;
		}
		cout << '\n';
		drawStars--;
	}
	cout << '\n';

	// test while 2
	drawStars=1;
	while(drawStars<=maxStars)
	{
		int lineDraw = 0;
		while(lineDraw<drawStars-1)
		{
			cout << ' ';
			++lineDraw;
		}
		lineDraw=drawStars;
		while(lineDraw<=maxStars)
		{
			cout << '*';
			++lineDraw;
		}
		cout << '\n';
		++drawStars;
	}
	cout << '\n';

	cout << "for-loop 로 별찍기\n";
	// test for1
	for(int i=1; i<=maxStars; ++i)
	{
		for(int j=i; j>0; --j)
		{
			cout << '*';
		}
		cout << '\n';
	}
	cout << '\n';

	// test for2
	for(int i=maxStars; i > 0; --i)
	{
		for(int j=i; j>0; --j)
		{
			cout << '*';
		}
		cout << '\n';
	}
	cout << '\n';
}

