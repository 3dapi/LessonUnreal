#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region ����
/**
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
	cout << "\n����01. ������ Ȱ��\n";
	cout << "a. �� ���� ������ �޾� �� ���� ������ ������ ����� ����ϴ� ���α׷� �ۼ�\n";
	cout << "�� ���� 0�̸� ���α׷� ���� �Դϴ�.\n";
	int valueA = 0;
	int valueB = 0;
	cout << "������ ù ��° ���ڸ� �Է��ϼ���.\n";
	cin >> valueA;
	cout << "������ �� ��° ���ڸ� �Է��ϼ���.\n";
	cin >> valueB;

	while(valueA && valueB)
	{
		int resultAdd = valueA + valueB;
		int resultSub = valueA - valueB;
		printf("����: %d + %d = %d, ����: %d - %d = %d\n\n"
			, valueA, valueB, resultAdd
			, valueA, valueB, resultSub);
		cout << "������ ù ��° ���ڸ� �Է��ϼ���.\n";
		cin >> valueA;
		cout << "������ �� ��° ���ڸ� �Է��ϼ���.\n";
		cin >> valueA;
	}
	cout << "����01.a ��!!\n";

	cout << "b. 3���� ���� num,num2,num3 �� �޾� ���� ������ ����� ����ϴ� ���α׷� �ۼ�\n";
	cout << "(num1+num2)* (num3 + num1) % num1 = ?\n";
	cout << "ù ��° ���� 0�̸� ���α׷� ���� �Դϴ�.\n";
	int nNum1 = 0;
	int nNum2 = 0;
	int nNum3 = 0;
	cout << "������ ù ��° ���ڸ� �Է��ϼ���.\n";	cin >> nNum1;
	cout << "������ �� ��° ���ڸ� �Է��ϼ���.\n";	cin >> nNum2;
	cout << "������ �� ��° ���ڸ� �Է��ϼ���.\n";	cin >> nNum3;

	while(nNum1)
	{
		int result = (nNum1 + nNum2) * (nNum3 + nNum1) % nNum1;
		printf("(%d + %d) * (%d + %d) %% %d = %d\n\n"
				, nNum1, nNum2, nNum3, nNum1, nNum1, result);
		cout << "ù ��° ���� 0�̸� ���α׷� ���� �Դϴ�.\n";
		cout << "������ ù ��° ���ڸ� �Է��ϼ���.\n";	cin >> nNum1;
		cout << "������ �� ��° ���ڸ� �Է��ϼ���.\n";	cin >> nNum2;
		cout << "������ �� ��° ���ڸ� �Է��ϼ���.\n";	cin >> nNum3;
	}
	cout << "����01.b ��!!\n";
}
