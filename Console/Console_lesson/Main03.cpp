#include <iostream>
#include <time.h>
#include <Windows.h>
using std::cin;
using std::cout;
using std::endl;

#pragma region ������
/**
�� �����ڶ�?
���α׷��� ������ �� ������ �ִ� Ư�� ������ �����Ѵ� Ű���带 �����ڶ�� �Ѵ�.
�����ڸ� �̿��ϸ� �پ��� ���α׷� ������ ����� ���� ���� �����ϴ�.

�⺻���� �������� ����
��� ������
+
-
*
/ : �� ����� ������ out
% : ������ ����� �� out

��
num
num
num
num
num
num
num
num
num

num == num1 -> num�� num1�� ����.
num != num1 -> num�� num1�� ���� �ʴ�.
num <  num1 -> num�� num1���� �۴�.
num >  num1 -> num�� num1���� ũ��. 
num <= num1 -> num�� num1���� �۰ų� ����. 
num >= num1 -> num�� num1���� ũ�ų� ����.

�Ҵ� ������
=
+=
-=
*=
/=
%=

��Ʈ ������
- �� ��� �ϴ°�?
- peformance: ���� ���. �÷��� ����ũ

&
|
^
~
<<
>>

�� ������
bool num;
num				
num && num2 -> num�� num2 ���̾�� ����
num || num2 -> num�� num2 �� �߿� �ϳ��� ���̸� ����
!num : ������


����ȯ ������
(Ư�� DataType) ������
	int val = 0;
		(float)val

c/c++ ���� ����ȯ �����ڸ� �̿��ϸ� �����ϰ� �ش� ������ �ڷ����� �����ϴ� ���� ����

()�� �̷������ ����ȯ �����ڴ� ������ ����ũ�� ������ �ֱ� ������ ����� �� ���ǰ� �ʿ��ϴ�.

���� ����ȯ (����� ����ȯ) -> �������鿡�� ������ �߻��Ѵ�.

�١١١١�
�׷��� ������ �������� �켱�� �Ѵٸ� ĳ���� �����ڸ� ����Ѵ�.
static_cast<int>(obj) -> obj�� type�� �ٲ۴�
dynamic_cast<int>(obj)
reinterpret_cast<int>(obj)


�ݺ���
���α׷��� Ư�� �κ��� ���� Ƚ�� �̻� �ݺ��ؼ� �����ϱ� ���� ����
�ݺ������� �߻��Ǵ� ������ ȿ�������� ó�� ���� -> ���� + ȿ���� ���� ��� / �����ս� �̽�


c/c++ �ݺ����� ����
for
while
do while

range for
for_each

		



*/
#pragma endregion ������

int main()
{
/**
�� ���� �̸��� Ư¡
�⺻������ ������ �̸��� ���ĺ�, ����, _�� �����ȴ�
�ѱ��� ����� �� ������ X

c ���� ��ҹ��ڸ� �����ϸ� Num/num �� �ٸ� ������ �ν��Ѵ�

1. ������ �̸��� ���ڷ� ������ �� ����.
2. Ű���嵵 ���� �̸����� ����� �� ����.
3. �̸� ���̿� ���� ���� ���Ե� �� ����.
ex)
int Num0;
int Num1;
int _Num2;
int 6Num;
int Num0 look;
int bool;
��
��
��
��
��
��
��
��
 */
	// �����õ� �ʱ�ȭ
	srand(time(NULL));

	int numR;
	numR = rand() % 5;
	cout << numR << endl;


	int weaponA = 0;
	// 20 ~ 25
	weaponA = 20 + rand() % (5+1);
	cout  << "���� �������� ��: " << weaponA  << endl;

	RAND_MAX;



	/**
	01. for ��
	�ʱ��
	���ǽ�
	������

	for(�ʱ��; ���ǽ�; ������)
	{
		�ݺ��� �Ǵ� ����
	}
	�ʱ� ���� �� ó���� �� ���� ���� �ǰ� ���ǽ��� ���� ���ȸ� ��ɹ��� �ݺ� ����
	 */
	int i;
	for(i=0; i<10; ++i)
	{
		cout << "[ " << i << "] �� ° for ��" <<endl;
	}
	cout <<'\n';

	int number = 0;
	for(;number<5; number++)
	{
		cout << "�̰�..? " << number << endl;
	}
	cout <<'\n';
	/**
	�ʱ�ȭ ����: for(; i<10 ; ++i)
	���ǽ� ����: for(i=1; ; ++i)
	���  ����: for(; ; )				==> while��
	 */

	int j=1;
	for(int i=0; i<5; ++i)
	{
		cout << ++j << endl;
		cout << j++ << endl;
	}

	/**
	 �ݺ����� �⺻������ �ݺ��ؼ� �����ϴ� ���� �����ϱ� ������ �ݺ����� �ȿ� �ݺ����� �ִ� ���� �����ϴ�
	 �̸� ��ø �ݺ����̶�� �θ���
	 ���� + ȿ���� ���� ���/ �����ս� �̽�
	 */

	/*for(int i=2; i<10; ++i)
	{
		for(int j=1; j<10; ++j)
		{
			for (int k=0; k<10; ++k)
			{
				cout <<"[" << i << ", "<< j<< ", "<< k << "]" << endl;
			}
		}
	}*/
	for(int i=1; i<10; i +=3)
	{
		printf("%2d��,          %2d ��,         %2d��\n", i+0, i+1, i+2);
		for(int j=2; j<10; ++j)
		{
			printf("%2d x %2d = %3d, %2d x %2d = %3d, %2d x %2d = %3d\n", i+0, j+0, (i+0)*(j+0), i+1, j+0, (i+1)*(j+0), i+2, j+0, (i+2)*(j+0) );

			//printf(  "%2d x %2d = %3d", i+0, j+0, (i+0)*(j+0));
			//printf(", %2d x %2d = %3d", i+1, j+0, (i+1)*(j+0));
			//printf(", %2d x %2d = %3d", i+2, j+0, (i+2)*(j+0));
		}
		cout <<'\n';
	}


	/**
	 02. while
	 - ���� (Loop)
	 - �ݺ� ���ǿ� ���� �� ��� ���� ����
	 - ������ ���� ���� ����
	 - ������� ���� ������ ����� ���� ����
	 - while���� Ư�� ������ �ְ� �� ������ �����ϴ� ���� Ư�� ������ �ݺ��ϴ� ����
	 */

	int playerHP = 1000;
	while(playerHP>0)
	{
		int hit = 100;
		playerHP -= hit;
		cout << "ü��: " << playerHP << endl;
	}
	cout << '\n';

	int numC = 0;
	while(numC < 5)
	{
		cout << "�ݺ��� ��� " << endl;
		numC++;
	}
	cout << '\n';
	cout << "While�� ������" <<endl;

	int valueA = 1;
	int valueB = 2;
	while(valueA <= 9)
	{
		valueB = 2;
		while(valueB <= 9)
		{
			printf("%2d x %2d = %3d, %2d x %2d = %3d, %2d x %2d = %3d\n", valueA+0, valueB+0, (valueA+0)*(valueB+0), valueA+1, valueB+0, (valueA+1)*(valueB+0), valueA+2, valueB+0, (valueA+2)*(valueB+0) );
			valueB++;
		}
		valueA +=3;
		cout << '\n';
	}
	/**
 
	03. do~while
	while ���� ������: ������ �˻��ϴ� ������ �ٸ���.
	�ϴ� ������ �� �� ���� �� while ���� ������ �˻��Ͽ� do~while ������ ������ ���� �� ������ �Ǵ�.
	do
	{
	}while(���ǽ�);

	 */

	int numD = 0;
	do 
	{
		cout << "do while�� " <<endl;
		numD++;
	} while (numD < -1);
	cout <<'\n';

	do 
	{
		cout << "do while�� �ι�°" <<endl;
		numD++;
	} while (numD < 3);
	cout << '\n';

	int total=0, num = 0;
	do 
	{
		cout<< "���ڸ� �Է��Ͻÿ�." <<endl;
		cout << "�Է� �� ���ڴ� ��� ���Ͽ� ���α׷� ���Ḧ ����� ��� ���� ����Ѵ�."<< endl;
		cout << "0�� �Է��ϸ� ����" << endl;
		cin >> num;
		total += num;
	} while (num !=0);
	cout << "�Է��� ������ �հ�: " << total << "�̴�. "<<endl;


	/**
	 while���� do~while��
	 �ݺ��� Ƚ���� ������ �ְų� Ư���� �� �ִٸ� while < -> do~while ���� �ڿ������� �ٲ�����
	 �ݸ��� Ƚ���� ������ ���� �ʰ� ���� ���ᰡ �� �� �𸥴ٸ� ����� �ʿ��ϴ�.
	 */

	return 0;
}

