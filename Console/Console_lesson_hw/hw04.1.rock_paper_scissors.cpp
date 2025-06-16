#pragma region 과제
/**
과제01. 가위 바위 보 게임
if문을 이용해 만든다.
	스위치 문은 사용하지 않는다
게임의 진행 횟수는 총 5판
	이후에는 게임 종료
필수:치트
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
	srand(time(NULL));

	cout << "과제01." << endl;
	
	int maxPlay = 5;
	int comValue = 0;
	int myValue;
	int myWin = 0;
	int myEqual = 0;
	int myLose = 0;

	bool showCheat = true;

	cout << "가위 바위 보 게임을 시작합니다. 총 " << maxPlay << " 판 진행합니다. 3승 이상 해야 승리합니다. " << endl;
	while (0 < maxPlay--)
	{
		comValue = 1+ rand() % 3;
		if(showCheat)
		{
			cout << "치트: 컴퓨터:" << comValue << endl;
		}

		cout << "가위 바위 보를 입력 하세요. 가위: 1, 바위: 2, 보: 3" << endl;
		cin >> myValue;

		if(comValue == 1)			// 컴퓨터: 가위
		{
			if(myValue == 1)		// 플레이어: 가위
			{
				cout << "비겼습니다." << endl;
				++myEqual;
			}
			else if(myValue == 2)	// 플레이어: 바위
			{
				cout << "이겼습니다." << endl;
				++myWin;
			}
			else if(myValue == 3)	// 플레이어: 보
			{
				cout << "졌습니다." << endl;
				++myLose;
			}
			else					// 플레이어: 다른 값. 패배로 처리
			{
				cout << "졌습니다." << endl;
				++myLose;
			}
		}
		else if(comValue == 2)		// 컴퓨터: 바위
		{
			if(myValue == 1)		// 플레이어: 가위
			{
				cout << "졌습니다." << endl;
				++myLose;
			}
			else if(myValue == 2)	// 플레이어: 바위
			{
				cout << "비겼습니다." << endl;
				++myEqual;
			}
			else if(myValue == 3)	// 플레이어: 보
			{
				cout << "이겼습니다." << endl;
				++myWin;
			}
			else					// 플레이어: 다른 값. 패배로 처리
			{
				cout << "졌습니다." << endl;
				++myLose;
			}
		}
		else						// 컴퓨터: 보
		{
			if(myValue == 1)		// 플레이어: 가위
			{
				cout << "이겼습니다." << endl;
				++myWin;
			}
			else if(myValue == 2)	// 플레이어: 바위
			{
				cout << "졌습니다." << endl;
				++myLose;
			}
			else if(myValue == 3)	// 플레이어: 보
			{
				cout << "비겼습니다." << endl;
				++myEqual;
			}
			else					// 플레이어: 다른 값. 패배로 처리
			{
				cout << "졌습니다." << endl;
				++myLose;
			}
		}
		cout << '\n';
	}
	cout << myWin << " 승 " << myEqual << " 무 " << myLose << " 패" << endl;
	// 3승 이상만 승리로 한다. 비기거나 진 것은 실패
	if(3 <= myWin)
	{
		cout << "승리 ^^/ !!!!!" << endl <<endl;
	}
	else
	{
		cout << "패배 -_- !!!!!" << endl <<endl;
	}
}
