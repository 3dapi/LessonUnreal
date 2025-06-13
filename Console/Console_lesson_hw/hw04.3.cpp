#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region USING STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING STD

#pragma region 과제
/**
과제03.일 수 출력기
if or switch 중에 본인이 판단해 효율 적인 것을 선택
시작 하면 사용자의 입력을 받고 입력한 숫자에 따라 ?? 일 인지 출력
1월부터 12월까지 확인이 가능해야 하고 이외의 숫자는 예외 처리
총 5번을 입력하면 프로그램 종료
*/
#pragma endregion 과제

void main()
{
	cout << "과제03.일 수 출력기" << endl;
	
	int maxPlay = 5;
	while(0<maxPlay)
	{
		int inputMonth;
		cout << "확인하려는 월을 입력하세요." << endl;
		cin >> inputMonth;
		if(1 > inputMonth || inputMonth > 12)
		{
			cout << "잘못된 월을 입력 했습니다. 다시 진행 합니다." << endl;
			Sleep(1000);
			system("cls");
			continue;
		}
		// play 횟수 감소.
		--maxPlay;
		switch(inputMonth)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				cout << inputMonth << " 월은 31일 입니다" << endl;
				break;
			case 4: case 6: case 9: case 11:
				cout << inputMonth << " 월은 30일 입니다" << endl;
				break;
			default:
				cout << inputMonth << " 월은 28일 입니다" << endl;
				break;
		}
		Sleep(2500);
		system("cls");
	}
	cout<<'\n';
}