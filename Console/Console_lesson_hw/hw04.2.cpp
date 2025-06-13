#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

#pragma region 과제
/**
과제02. 반복문 숙달
정수 하나를 입력받아 -5씩 반복적으로 연산되는 식을 만든다.
종료 조건: -15를 넘어가면 탈출
조건: 입력 받은 값은 -10~10 사이의 숫자여야 하고 이외의 값 입력 시 프로그램 종료
while문 + do~while문 두 가지 버전으로 만들어 올 것
*/
#pragma endregion 과제

void main()
{
	cout << "과제02. 반복문 숙달 while" << endl;
	int dec = 5;
	int inputValue = 0;
	cout << "정수를 입력하세요. 범위는  -10~10 입니다. 이 범위 이외 숫자를 입력하면 프로그램을 종료합니다." << endl;
	cin  >>inputValue;
	if( -10 > inputValue || inputValue > 10)
	{
		cout << "범위를 벗어난 값을 입력했습니다. 프로그램을 종료합니다." << endl;
	}
	else
	{
		while(-15 <= inputValue)
		{
			inputValue -= dec;
			cout << dec << "만큼 차감 " << inputValue << endl;
		}
		cout << "최종 결과: " << inputValue << endl;
	}

	//-----------------------------------------------------------------------------------------------------------------
	//-----------------------------------------------------------------------------------------------------------------
	cout << "do-while 테스트를 진행합니다. 아무 숫자나 입력하세요." << endl;
	cin  >>inputValue;

	system("cls");
	cout << "과제02. 반복문 숙달 do-while" << endl;
	cout << "정수를 입력하세요. 범위는  -10~10 입니다. 이 범위 이외 숫자를 입력하면 프로그램을 종료합니다." << endl;
	cin  >>inputValue;

	if( -10 > inputValue || inputValue > 10)
	{
		cout << "범위를 벗어난 값을 입력했습니다. 프로그램을 종료합니다." << endl;
	}
	else
	{
		do
		{
			if(-15 > inputValue)
			{
				cout << "최종 결과: " << inputValue << endl;
				break;
			}
			inputValue -= dec;
			cout << dec << "만큼 차감 " << inputValue << endl;
		} while(true);
	}
	cout << '\n';
}
