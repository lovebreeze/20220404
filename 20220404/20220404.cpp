#include <stdio.h>
#include "20220404.h"



/*int function(int num)
{
	if (num < 1) // 4 < 1
	{
		return 1;
	}
	else
	{
	printf("function %d\n", num*num);
	function(num - 1);
	}
}
*/





int facto(int a)
{
	if (a > 1) {
		return a * facto(a - 1);
		//5 4 3 2 1 
	}
	else return 0;
}

int main()
{
	/*function(5);
	*/
	//포인트의 크기는 무조건 4바이트
	//범용 포인터;

	//void는 일반 변수로 사용 할수없음. 주소값만 가리킬 수 있기 때문.

	abc();

	void* vptr;

	char c = 'G';
	int a = 10;
	float d = 8.678;

	char* cptr=&c;
	int* ptr=&a;
	float* dptr=&d;
	

	//vptr이 c의 시작주소를 가리킴.
	vptr = &c;

	//void 포인터로 접근하기 위해서는 자료형 변환이 필요함.

	printf("c의 값 : %C\n", *(char*) vptr);

	//vptr이 a의 시작주소를 가리킴.
	vptr = &a;
	printf("a의 값 : %d\n", *(int*) vptr);

	//vptr이 d의 시작주소를 가리킴.
	vptr = &d;
	printf("d의 값 : %.2f\n", *(float*)vptr);

	//팩토리얼 
	/*int c;
	scanf_s("%d", &c);


	printf("%d\n", facto(c));*/

	return 0;

	


}