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
	//����Ʈ�� ũ��� ������ 4����Ʈ
	//���� ������;

	//void�� �Ϲ� ������ ��� �Ҽ�����. �ּҰ��� ����ų �� �ֱ� ����.

	abc();

	void* vptr;

	char c = 'G';
	int a = 10;
	float d = 8.678;

	char* cptr=&c;
	int* ptr=&a;
	float* dptr=&d;
	

	//vptr�� c�� �����ּҸ� ����Ŵ.
	vptr = &c;

	//void �����ͷ� �����ϱ� ���ؼ��� �ڷ��� ��ȯ�� �ʿ���.

	printf("c�� �� : %C\n", *(char*) vptr);

	//vptr�� a�� �����ּҸ� ����Ŵ.
	vptr = &a;
	printf("a�� �� : %d\n", *(int*) vptr);

	//vptr�� d�� �����ּҸ� ����Ŵ.
	vptr = &d;
	printf("d�� �� : %.2f\n", *(float*)vptr);

	//���丮�� 
	/*int c;
	scanf_s("%d", &c);


	printf("%d\n", facto(c));*/

	return 0;

	


}