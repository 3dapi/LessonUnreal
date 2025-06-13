
#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

#pragma region �ڷ��� + ���� ����
/**

�� �ڷ���
- ������ ������ �ǹ��ϸ� ���� �ڷ����̶�� �����ϸ� �ȴ�.
�� data type
* ������?
- ���� �� �ִ� ���ڳ� �����͸� �ǹ��ϰ� ��ǻ�ͷ� �Ͽ��� ���� ������ �� �ִ� �޸� ������ �ٴ� �̸�
- ������ �̿��ϸ� Ư�� ���� ���� �� �ش� ���� �̿��� �������� ������ ó���ϴ� ���� �����ϴ�.


�� c/c++ ���� �����ϴ� �ڷ���
- ������: �Ҽ����� ���� ���� ǥ���ϱ� ���� �ڷ���
- �Ǽ���: �Ҽ����� �����ϴ� ���� ǥ���ϱ� ���� �ڷ���
- ������: ���ڸ� ǥ���ϱ� ���� �ڷ���
- ����: T/F -> �� / ������ �Ǻ��ϴ� �ڷ���

�� c/c++ ���� �����ϴ� ������ ����
- short			(2byte)
- int			(4byte)
- long			(4~8byte)
- long long		(8byte)

�� c/c++ ���� �����ϴ� �Ǽ��� ����
- float		(4byte)
- double	(8byte)

�� c/c++ ���� �����ϴ� ������ ����
- char		(1byte)

�� c/c++ ���� �����ϴ� ���� ����
- bool		(1byte -> 0(����) 1(��))

- c ���� �븮���� �ش��ϴ� �ڷ����� �������� ������ �������� �ʾҴ�.
�� ������ ��� �������� �Ϲ������� ���� 0�� ���� / 0�� ������ ������ ������ �����ϱ⵵ �ߴ�.

- c++ ���� �� �Ǵ� ������ ��Ÿ���� Ű���带 �߰������μ��� ȿ�������� ǥ���ϴ� ���� �����ϴ�.
�� true / false


- c/c++ �ڷ������� �⺻������ ������ ǥ���ϴ� ���� ���������� ��쿡 ���� ������ ǥ������ �ʴ� ���
����� ���� ũ�� ǥ���� �ϴ� ���� �����ϴ�. (ssigned / unsigned ( ����X-> �����))

�� bool �ڷ����� ������ �;� �� ��ġ�� ���� �Ǹ� ���� 1 �� 0���� ��ȯ�� �� �� ���� ���� 0/1 �� �ƴϴ�
int -> ������: 1, 10, 100, 245
float -> �Ǽ���: 1.2.3.5.6.7f, 0.234
bool -> ����: 0 (����) / 1(��)

���ڷ��� ũ��
1. ������
�ڷ��� Ÿ��				ũ��		����
short					2byte		0~65535
unsigned short			2byte		-32768 ~ 32767
int						4byte		-2,147,483,648 ~ 2,147,483,647
unsigned int			4byte		�� 43��
long					4byte		�� -21�� ~21��
unsigned long			4byte		�� 43��
long long				8byte		-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
unsigned long long		8byte		0~18,446,744,073,709,551,615

2. �Ǽ���
�ڷ��� Ÿ��				ũ��		����
float					4byte		�Ϲ������� �Ҽ��� 6�ڸ�
double					8byte		�Ϲ������� �Ҽ��� 15�ڸ�

3. ������
�ڷ��� Ÿ��				ũ��		����
char					1byte		-128~127	������ ��´�. (����)
unsigned char			1byte		0~255		���� ������ ��´� (����)

4. ����
�ڷ��� Ÿ��				ũ��		����
bool					1byte		0 (f) / 1(t)

�� ���� ����(decleararation)
���� �����̶�? 
�� ���� ������ �� �ִ� �޸� ������ �̸��� �����ϴ� ���� ���Ѵ�.
�⺻ ����: ���� ����(����) ������

ex)
int num;
int num_2 = 20;
�� ������ �������� num_2 ��� �̸����� "�޸�" ������ �Ҵ�

 */


#pragma endregion �ڷ��� + ���� ����


namespace A
{
	namespace B
	{
		namespace C
		{
			int num;
		}
	}
}
namespace ABC = A::B::C;

int main()
{
	//INT64_MAX;
	// __ �����
	// __int64	//

	int num;
	A::B::C::num;
	ABC::num;

	int testNumA = true;
	int testNumB = false;
	int testResulst = testNumA  + testNumB;

	cout << "boolean: " << testResulst <<endl;
	cout <<endl;

	// ���� �ʱ�ȭ ���

	int num0;

	// ����� ���� �ʱ�ȭ
	int num1 = 3;
	int num2 = 6;
	int total;

	// ���� ���� �� �Ҵ�
	num0 = 10;

	int num3 = 100;
	int num4 = 100;
	int num5 = 100;

	int num6, num7, num8;
	num6 = num7 = 100;

	cout << "���� 1 ������: " << sizeof(1) << endl;
	cout << "���� 2 ������: " << sizeof(2) << endl;
	cout << "true ������ : " << sizeof(true ) << endl;
	cout << "false ������: " << sizeof(false) << endl;
	cout <<endl;

	int nValue = 0;
	// c++
	cout << "���� �Է�: " <<endl;
	cin >> nValue;
	cout << "���� �Է�: " << nValue << endl;
	cout <<endl;

	// c
	printf("���� �Է�: ");
	scanf_s("%d", &nValue);
	cout <<endl;

	short     valueA = 10;
	int       valueB = 210;
	long      valueC = 10;
	long long valueD = 10;
	float     fValue = 10;
	double    dbValue = 10;

	printf("C��� short    : %d, %d,\n"  , valueA, sizeof(valueA));
	printf("C��� int      : %d, %d,\n"  , valueB, sizeof(valueB));
	printf("C��� long     : %ld,%d,\n"  , valueC, sizeof(valueC));
	printf("C��� float    : %f, %d,\n"  , fValue, sizeof(fValue));
	printf("C��� double   : %f, %d,\n"  , dbValue, sizeof(dbValue));
	cout << endl;

	cout << "C++ short    : " << valueA << ", ������ " << sizeof(valueA) << endl;
	cout << "C++ int      : " << valueB << ", ������ " << sizeof(valueB) << endl;
	cout << "C++ long     : " << valueC << ", ������ " << sizeof(valueC) << endl;
	cout << "C++ long long: " << valueD << ", ������ " << sizeof(valueD) << endl;
	cout << "C++ float    : " << fValue << ", ������ " << sizeof(fValue) << endl;
	cout << "C++ double   : " << dbValue<< ", ������ " << sizeof(dbValue) << endl;
	cout << endl;
	cout << '\n';
	cout << "\n";
	printf("\n");

	// \n�� endl ���̴�?
	// ���ڿ��� �ٷ��� �ʴ� ���� �� ����.

	/**
	�� ���� ǥ���(convention)
	�ѱ�, a,b,c �� �ܼ��� �ǹ̾��� �̸�, ����

	1. �밡����(1)
	�� �������� ��Ŀ��� ������ ���� ǥ���
	�� �𸮾󿡼� ���
	ex)
	int num			->	nNum
	float valueA	->	fValueA
	double valueB	->	dbValueB
	char letter		->	chLetter

	2. ī��(���̽�)
	�� ��ü������ ����� �ڵ����� �ٲ�鼭 �������� �츰 ǥ���
	ex)
	int playerselectnumber	->	playerSelectNumber

	3. �Ľ�Į ���̽�(���� ����)
	PlayerSelectNumber

	4. ������ũ(���� ����)
	playerselectnumber	->	player_select_Number
	 */

	return 0;
}

