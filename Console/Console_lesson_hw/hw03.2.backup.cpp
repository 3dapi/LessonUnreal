#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region ����
/**

���� 02. �ݺ��� ���� (�����)
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


���� ����. for�� ���ٷ�
	   *
      ***
	 *****
	*******
	 *****
      ***
	   *
*/


#pragma endregion ����

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

void main()
{
	cout << "\n����02. �����\n";
	int maxStars = 5;

	// test while 1
	cout << "while-loop �� �����\n";
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

	cout << "for-loop �� �����\n";
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

	cout << "�������� \n";
	int low = maxStars*2;
	int col = maxStars*2-1;
	int totlal = low * col;
	int center = maxStars -1;
	for(int i=0; i<totlal; ++i)
	{
		bool endLineT = !((i+1) % low);
		int x = i % low;
		int y = i / low;
		bool isStar = abs(x-center) + abs(y-center) < maxStars;
		int cc;
		cc = 0;
		if(endLineT)
		{
			cout << '\n';
		}
		else if(isStar)
		{
			cout << '*';
		}
		else
		{
			cout << ' ';
		}
	}
}


void main()
{
	int maxStars = 32;
	int low = (maxStars*2);
	int col = (maxStars*2-1);
	int totlal = low * col;
	int center = (maxStars-1);
	for(int i=0; i<totlal; ++i)
	{
		bool endLineT = !((i+1) % low);
		int x = (i % low);
		int y = (i / low);
		bool isStar = abs(x-center) + abs(y-center) < maxStars;
		cout << char(endLineT * '\n' + (!endLineT && isStar) * '*' + (!endLineT && !isStar) * ' ');
	}
	for(int i=0; i<(maxStars*2) * (maxStars*2-1); ++i)
		cout << char((!((i+1) % (maxStars*2))) * '\n' + (!(!((i+1) % (maxStars*2))) && (((0 >((i%(maxStars*2))-(maxStars-1))) * (-1) * ((i%(maxStars*2))-(maxStars-1)) + (0<=((i%(maxStars*2))-(maxStars-1))) * ((i%(maxStars*2))-(maxStars-1)) + (0>((i/(maxStars*2))-(maxStars-1))) * (-1) * ((i/(maxStars*2))-(maxStars-1)) + (0<=((i/(maxStars*2))-(maxStars-1))) * ((i/(maxStars*2))-(maxStars-1)))< maxStars)) * '*' + (!(!((i+1) % (maxStars*2))) && !(((0 >((i%(maxStars*2))-(maxStars-1))) * (-1) * ((i%(maxStars*2))-(maxStars-1)) + (0<=((i%(maxStars*2))-(maxStars-1))) * ((i%(maxStars*2))-(maxStars-1)) + (0>((i/(maxStars*2))-(maxStars-1))) * (-1) * ((i/(maxStars*2))-(maxStars-1)) + (0<=((i/(maxStars*2))-(maxStars-1))) * ((i/(maxStars*2))-(maxStars-1)))< maxStars)) * ' ');
}

