#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region ����
/**
�ǽ�
������ ������ for/while/do~while
���� ����� ��հ� (20~25)

���� 01. ������ Ȱ��
a. �� ���� ������ �޾� �� ���� ������ ������ ����� ����ϴ� ���α׷� �ۼ�
b. 3���� ���� num, num2, num3 �� �޾� ���� ������ ����� ����ϴ� ���α׷� �ۼ�
(num1+num2) * (num3 + num1) % num1 = ?
c. �Է¹��� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷� �ۼ�
7�� 2�� ��ǲ -> �K���� 3/ ������ 1�� ��� �Ǹ� OK

*****
****
***
**
* 
**
***
****
*****

���� 02. �ݺ��� ���� (�����)
       *
while *** for
     *****
    *******
     *****
while *** for
       *

���� ����. for�� ���ٷ�
	   *
      ***
	 *****
	*******
	 *****
      ***
	   *


���ǹ� ����
��Ʈ�� ���� �´�.
*/


#pragma endregion ����

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

void main()
{
	cout <<"�ǽ�: ������\n";
	for(int i=1; i<=9; i +=3)
	{
		printf("%2d��,          %2d ��,         %2d��\n",i+0,i+1,i+2);
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
	cout <<"\nȮ���� �������� �Է��ϼ���. 1~9�ܱ����� �����մϴ�.\n";
	cin >> dan;
	while(1 <= dan && dan <= 9)
	{
		int multi = 2;
		while(multi <= 9)
		{
			printf("%2d x %2d = %3d\n",dan,multi,dan*multi);
			multi++;
		}
		cout <<"\nȮ���� �������� �Է��ϼ���.\n";
		cin >> dan;
	}
	cout << "������ ��!!!!\n";
	cout << "\n�ǽ� random\n";
	srand(time(NULL));
	int weaponDamage = 20 + rand() % (5+1);
	cout<<"���� ������:[0,25] " << weaponDamage <<endl;
}
