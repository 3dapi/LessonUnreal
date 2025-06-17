
#include "Example02.h"

#define EXAMPLE_TYPE_PRINT			1

#define ARRAY_TYPE_SIMPLE			1
#define ARRAY_TYPE_MULTI_DIMENSION	2

#define EXAMPLE_TYPE				EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE					ARRAY_TYPE_MULTI_DIMENSION

namespace EXAMPLE_1
{
#define ARRAY_SIZE	5

	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		cout << "효율적인 프로젝트 관리" << endl;
		cout << '\n';

		// 지금까지 사용한 일반적인 방법
		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << '\n';

		// 1차원 배열 선언
		// int: 배열을 이루는 요소 자료형 -> 배열의 이름 -> 배열의 길이
		int num[4];

		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << '\n';

		int arrNums[6] = { 0,1,2,3,4,5 };
		//for (int i = 0; i < 6; ++i)
		//{
		//	arrNums[i] += 1;
		//}
		for(int i=0; i<6; ++i)
		{
			cout << std::hex << arrNums[i] << endl;
		}
		cout << '\n';


  #if ARRAY_TYPE == ARRAY_TYPE_SIMPLE
		/**
		sizeof(): 바이트 크기 계산 출력
		  sizeof() 연산자를 잘 활용하면 배열 전체의 바이트 크기를 계산하는 것이 가능
		  ex)
		  int anValues[5];
		  sizeof(anValues);			=> 배열 전체 크기 (배열 크기 X 배열 요소 크기 -> 20)
		  sizeof(anValues[0]);		=> 배열 요소 크기 (int형 크기에 해당하는 4)
		  - 배열의 크기는 명시적으로 배열을 선언할 때 정해 주는 것이 가능하지만 배열의 초기화를 이용하면
		  배열의 크기를 직접 명시하지 않더라도 컴파일러에 의해서 초기화에 들어간 값을 갯수 만큼 배열의 크기가 정해진다.
		 */
		int anValuesA[ARRAY_SIZE] =
		{
			1,2,3,4,5
		};

		int anValuesB[] =
		{
			1,2,3,4,5
		};
		//int anValuesB[10] = {0};
		const int sizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int sizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		cout << "배열 요소 출력 " << endl;

		// 정석 -> 좋다고도 할 수 없음
		//printf("%d %d %d %d %d\n", anValuesA[0], anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4])
		cout << '\n';

		for (int i = 0; i < sizeA; ++i)
		{
			printf("%d%c", anValuesA[i], (i < sizeA - 2) ? ',' : ' ');
		}
  #else
		// 2차원까지 쓰면 베스트
		/**
		▷ c/c++ 언어의 다차원 배열
		int anMatrix[5][5];				-> 2차원 배열
		int anDimensionMatrix[5][5][5]	-> 3차원 배열

		sizeof(anMatrix);				-> 5 * (배열 요소 크기: 5 * 4) => 100
		sizeof(anDimensionMatrix);		-> 5 * (5 * (배열 요소 크기: 5 * 4)) => 500

		// 4개
		int anMatrix[2][2];
		anMatrix[0][0]
		anMatrix[0][1]
		anMatrix[1][0]
		anMatrix[1][1]
		 */

		int anMatrix[ARRAY_SIZE][ARRAY_SIZE] = { 0 };
		const int nRow = sizeof(anMatrix) / sizeof(anMatrix[0]);
		const int nCol = sizeof(anMatrix[0]) / sizeof(anMatrix[0][0]);

		for (int i=0; i<nRow; ++i)
		{
			for (int j=0; j<nCol; ++j)
			{
				anMatrix[i][j] = (i * nCol) + j + 1;
			}
		}
		cout << '\n';
		for (int i = 0; i < nRow; ++i)
		{
			printf("%3d 행: ", i);
			for (int j = 0; j < nCol; ++j)
			{
				printf("%3d ", anMatrix[i][j]);
			}
			printf("\n");
		}
  #endif //ARRAY_TYPE == ARRAY_TYPE_SIMPLE
#else

#endif //EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
	}
}


/**
과제01. 아이템 만들기
- 포트폴리오 들어갈 기능이라고 생각하고 만들 것
- 필수 : 배열 +@ 
 
- 종류와 대미지 / 가격이 다른 무기 및 방어구, 악세사리 3종을 만들고 화면에 출력
- 출력된 화면에는 아이템 종류에 따른 가격 +  특성 등이 함 께 나열.
- 무기 1종 + 방어구 1종 + 악세사리 1종 = 총 3 종은 도트를 만들 것

과제02. 게임 평가 평균 값 구하기
- 항목은 6개
-게임 평가: 캐릭터/ 배경/퀘스트 진행률/아이템 레벨/과금 레벨/ 레이드 (기타 등등...)
-조건: 1차원 or 2차원 배열로 값을 정한 뒤 평균 값을 구해서 출력
 두가지 버전(입력되어 있는 버전 / 너희가 입력하는 버전)

과제03. 로또 당첨기
- 당첨 번호 6개 + 보너스 번호 1개
- 6자리 입력하고 룰에 맞게 판정한다

1등: 당첨 번호 6개						=> 내가 입력한 숫자 동일
2등: 당첨 번호 5개 + 보너스 번호 1개		=> 내가 입력한 숫자 동일
3등: 당첨 번호 5개						=> 내가 입력한 숫자 동일
4등: 당첨 번호 4개						=> 내가 입력한 숫자 동일
5등: 당첨 번호 3개						=> 내가 입력한 숫자 동일

한 줄 조사. 문자열
-노트에 적어 올것 + 비유할 것

*/