#pragma region 과제 가위 바위 보 배팅 게임
/**
과제01.가위 바위 보
- switch 문을 이용해 만든다.
- 치트 기능과 배팅 기능 추가
초기 소지금 : 10,000

- 최소 배팅은 1,000부터 가능
- 5판을 하거나 내가 가진 돈을 전부 잃으면 게임 종료
- 이기면 판돈에 x3배를 얻고 지면 판돈에 x7을 잃는다.
- 비길 경우에는 판돈에 x5배를 얻도록 만들어 올 것
 */
#pragma endregion 과제 가위 바위 보 배팅 게임
#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

// Lose: 0, equal: 1, win: 2
// 가위: 1, 바위: 2, 보: 3

void displayCheat(int computerValue);
bool checkValidBattingMoney(int battingMoney);
bool checkValidPlayerValue(int playerValue);
int checkWinLoseEqual(int computerValue, int playerValue);
int checkPlayerRock(int playerValue);
int checkPlayerScissor(int playerValue);
int checkPlayerPaper(int playerValue);

int enableCheat = 1;
int gamePlayCount = 5;
int gameMoney = 10000;
int battingWin = 3;
int battingLose = -7;
int battingEqual = 5;

void main()
{
	srand(time(NULL));
	cout << "과제01. 가위바위 보 배팅(10000원)\n";
	cout << "5판을 하거나 내가 가진 돈을 전부 잃으면 게임 종료합니다.\n";
	while (0<gamePlayCount)
	{
		// 배팅금액 확인
		int battingMoney = 1000;
		cout << "\n배팅 금액은 최소 \"1000\" 부터 게임 머니 전부: \"" << gameMoney << "\" 까지 사용 가능합니다." <<endl;
		cout << "배팅 금액을 입력하세요.\n";
		cin >> battingMoney;
		if (!checkValidBattingMoney(battingMoney))
		{
			cout << "잘못된 배팅 금액입니다." << endl;
			continue;
		}

		// 컴퓨터 값 설정
		int computerValue = 1 + rand() % 3;
		if (enableCheat)
		{
			displayCheat(computerValue);
		}

		int playerValue =0;
		while (true)
		{
			cout << "가위:1 바위:2 보:3 를 입력하세요.: ";
			cin >> playerValue;
			// player value가 유효한지 체크.
			if (checkValidPlayerValue(playerValue))
				break;
			cout << "유효하지 않는 입력 값 입니다." << endl;
		}

		// 판 수를 줄인다.
		--gamePlayCount;

		// play 결과
		int resultPlay = checkWinLoseEqual(computerValue, playerValue);
		switch (resultPlay)
		{
			// Lose
			case 0:
				gameMoney += (battingMoney * battingLose);
				cout << "졌습니다." << endl;
				break;
			// Equal
			case 1:
				gameMoney += (battingMoney * battingEqual);
				cout << "비겼습니다. " << endl;
				break;
			// Win
			case 2:
				gameMoney += (battingMoney * battingWin);
				cout << "이겼습니다. " << endl;
				break;
		}
		// gameMoney가 음수.
		if (0 > gameMoney)
		{
			gameMoney = 0;
		}
		cout << "가지고 있는 게임 머니: " << gameMoney << endl;

		// gameMoney==0 이면 게임 종료
		if (0 == gameMoney)
		{
			cout << "더이상 게임 머니가 없습니다. 게임을 종료합니다.: " << gameMoney << endl;
			Sleep(3000);
			break;
		}
	}
	cout << '\n';
}

void displayCheat(int computerValue)
{
	cout << "치트: computer: " << computerValue << " : ";
	switch (computerValue)
	{
		// 가위
		case 1:	cout << "(가위)";	break;
		// 바위
		case 2:	cout << "(바위)";	break;
		// 보
		case 3:	cout << "(보)";	break;
	}
	cout << endl;
}

bool checkValidBattingMoney(int battingMoney)
{
	if(1000> battingMoney || battingMoney > gameMoney)
		return false;
	return true;
}

bool checkValidPlayerValue(int playerValue)
{
	if (1 > playerValue || playerValue > 3)
		return false;
	return true;
}

int checkWinLoseEqual(int computerValue, int playerValue)
{
	int ret = 0;
	switch (computerValue)
	{
		// 가위
		case 1:	ret = checkPlayerScissor(playerValue);	break; 
		// 바위
		case 2:	ret = checkPlayerRock(playerValue);		break;
		// 보
		case 3:	ret = checkPlayerPaper(playerValue);	break;
	}
	return ret;
}

// Lose: 0, equal: 1, win: 2
// computer 가위: 1
int checkPlayerScissor(int playerValue)
{
	int ret = 0;
	switch (playerValue)
	{
		// 가위
		case 1:	ret = 1;	break;
		// 바위
		case 2:	ret = 2;	break;
		// 보
		case 3:	ret = 0;	break;
	}
	return ret;
}

// Lose: 0, equal: 1, win: 2
// computer 바위: 2
int checkPlayerRock(int playerValue)
{
	int ret = 0;
	switch (playerValue)
	{
		// 가위
		case 1:	ret = 0;	break;
		// 바위
		case 2:	ret = 1;	break;
		// 보
		case 3:	ret = 2;	break;
	}
	return ret;
}

// Lose: 0, equal: 1, win: 2
// computer 보: 3
int checkPlayerPaper(int playerValue)
{
	int ret = 0;
	switch (playerValue)
	{
		// 가위
		case 1:	ret = 2;	break;
		// 바위
		case 2:	ret = 0;	break;
		// 보
		case 3:	ret = 1;	break;
	}
	return ret;
}
