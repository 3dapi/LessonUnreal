#pragma region 숫자 야구 게임
/**
과제02. 숫자 야구

- 배열 X
- 컴퓨터가 뽑은 숫자를 플레이어가 임의의 숫자 3개를 선택하여 숫자와 자릿수를 맞추는 게임
-내가 선택한 숫자가 컴퓨터 숫자와 같으나 자릿수가 다르다
-1B

-내가 선택한 숫자가 컴퓨터 숫자와 같고 자릿수가 같으면
-1S

-내가 선택한 숫자가 해당되는 숫자에 없을 때
-1Out

- 치트키 필수

 */
#pragma endregion 숫자 야구 게임

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void setupComputerNumber();
int  setupPlayerNumber();
void displayCheat();
bool checkPlayerValue(int playerValue);

int checkPlayStrike(int playerValue100, int playerValue10, int playerValue1);
int checkPlayBall(int playerValue100, int playerValue10, int playerValue1);
int checkPlayOut(int playerValue100, int playerValue10, int playerValue1);
int enableCheat = 1;
int computerValue100 = 0;	// 100의 자리 수
int computerValue10 = 0;	// 10의 자리 수
int computerValue1 = 0;		// 1의 자리 수

void main()
{
	srand(time(NULL));

	cout << "과제02. 숫자 야구" << endl;

	cout << "치트 활성화 하려면 1 을 입력하세요" << endl;
	cin >> enableCheat;

	setupComputerNumber();

	while (true)
	{
		int playerValue = setupPlayerNumber();

		int player100, player10, player1;
		player100 = playerValue / 100;
		player10 = (playerValue - (player100 * 100)) / 10;
		player1 = (playerValue - (player100 * 100 + player10 * 10));

		int resultPlayStrike = checkPlayStrike(player100, player10, player1);
		int resultPlayBall   = checkPlayBall(player100, player10, player1);
		int resultPlayOut    = checkPlayOut(player100, player10, player1);

		if(resultPlayStrike)
		{
			cout << resultPlayStrike << " Strike" << " ";
		}
		if (resultPlayBall)
		{
			cout << resultPlayBall << " Ball" << " ";
		}
		if (resultPlayOut)
		{
			cout << resultPlayOut << " Out";
		}
		cout << endl;

		if(3== resultPlayStrike)
		{
			cout << "승리!!!" << endl;
			break;
		}
	}
}

void setupComputerNumber()
{
	//computerValue100 = 1 + rand() % 9;	// 1~9
	computerValue100 = 0 + rand() % 10;	// 0~9
	// 100 자릿 수와 다른 10의 자릿 수
	while (true)
	{
		computerValue10 = rand() % 10;		// 0~9
		if (computerValue10 != computerValue100)
			break;
	}
	// 100 자릿 수, 10의 자릿 수와 다른 1의 자릿 수
	while (true)
	{
		computerValue1 = rand() % 10;		// 0~9
		if (computerValue1 != computerValue100 && computerValue1 != computerValue10)
			break;
	}
	// 테스트
	//computerValue100 = 5;
	//computerValue10 = 4;
	//computerValue1 = 7;
	if (enableCheat)
	{
		displayCheat();
	}
}

int setupPlayerNumber()
{
	int playerValue = 0;
	while (true)
	{
		cout << "첫째 자리 0포함, 세 자리의 숫자가 모두 다른 숫자를 입력하세요.: ";
		cin >> playerValue;
		if (checkPlayerValue(playerValue))
			break;
		cout << "유효하지 않는 입력 값 입니다." << endl;
	}
	return playerValue;
}


void displayCheat()
{
	cout << "치트: computer: " << computerValue100 << computerValue10 << computerValue1 << endl;
}

bool checkPlayerValue(int playerValue)
{
	if (1 > playerValue || playerValue > 999)
		return false;
	int player100, player10, player1;
	player100 = playerValue / 100;
	player10 = (playerValue - (player100 * 100)) / 10;
	player1 = (playerValue - (player100 * 100 + player10 * 10));
	if (player100 == player10 || player100 == player1 || player10 == player1)
		return false;
	return true;
}

int checkPlayStrike(int playerValue100, int playerValue10, int playerValue1)
{
	int resultStrike = 0;
	if (playerValue100 == computerValue100)
	{
		++resultStrike;
	}
	if (playerValue10 == computerValue10)
	{
		++resultStrike;
	}
	if (playerValue1 == computerValue1)
	{
		++resultStrike;
	}

	return resultStrike;
}
int checkPlayBall(int playerValue100, int playerValue10, int playerValue1)
{
	int resultBall = 0;
	if (playerValue100 == computerValue10 || playerValue100 == computerValue1)
	{
		++resultBall;
	}
	if (playerValue10 == computerValue100 || playerValue10 == computerValue1)
	{
		++resultBall;
	}
	if (playerValue1 == computerValue100 || playerValue1 == computerValue10)
	{
		++resultBall;
	}

	return resultBall;
}

int checkPlayOut(int playerValue100, int playerValue10, int playerValue1)
{
	int resultOut = 0;
	if (playerValue100 != computerValue100 && playerValue100 != computerValue10 && playerValue100 != computerValue1)
	{
		++resultOut;
	}
	if (playerValue10 != computerValue100 && playerValue10 != computerValue10 && playerValue10 != computerValue1)
	{
		++resultOut;
	}
	if (playerValue1 != computerValue100 && playerValue1 != computerValue10 && playerValue1 != computerValue1)
	{
		++resultOut;
	}

	return resultOut;
}
