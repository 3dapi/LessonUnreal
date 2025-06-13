#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region 과제
/**
실습
구구단 마무리 for/while/do~while
무기 대미지 평균값 (20~25)

과제 01. 연산자 활용
a. 두 개의 정술르 받아 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성
b. 3개의 정수 num, num2, num3 를 받아 다음 연산의 결과를 출력하는 프로그램 작성
(num1+num2) * (num3 + num1) % num1 = ?
c. 입력받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
7과 2가 인풋 -> 묷으로 3/ 나머지 1이 출력 되면 OK

*****
****
***
**
* 
**
***
****
*****

과제 02. 반복문 숙달 (별찍기)
       *
while *** for
     *****
    *******
     *****
while *** for
       *

도전 과제. for문 한줄로
	   *
      ***
	 *****
	*******
	 *****
      ***
	   *


조건문 조사
노트에 적어 온다.
*/


#pragma endregion 과제

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

void main()
{
	cout <<"실습: 구구단\n";
	for(int i=1; i<=9; i +=3)
	{
		printf("%2d단,          %2d 단,         %2d단\n",i+0,i+1,i+2);
		for(int j=2; j<10; ++j)
		{
			printf("%2d x %2d = %3d, %2d x %2d = %3d, %2d x %2d = %3d\n"
					, i+0,j,(i+0)*j
					, i+1,j,(i+1)*j
					, i+2,j,(i+2)*j );
		}
		cout <<'\n';
	}

	int dan = 1;
	int multi = 2;
	cout <<"\n확인할 구구단을 입력하세요. 1~9단까지만 가능합니다.\n";
	cin >> dan;
	while(1 <= dan && dan <= 9)
	{
		int multi = 2;
		while(multi <= 9)
		{
			printf("%2d x %2d = %3d\n",dan,multi,dan*multi);
			multi++;
		}
		cout <<"\n확인할 구구단을 입력하세요.\n";
		cin >> dan;
	}
	cout << "구구단 끝!!!!\n";
	cout << "\n실습 random\n";
	srand(time(NULL));
	int weaponDamage = 20 + rand() % (5+1);
	cout<<"무기 데미지:[0,25] " << weaponDamage <<endl;
}
