#include <stdio.h>
#include <time.h>

/*
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	int* ad;
	int* bd;

	ad = &a;
	bd = &a;

	printf("%p \n", ad);
	printf("%d \n", *ad);

	*ad += 3;

	printf("%p \n", ad);
	printf("%d \n", a);
	printf("%d \n", *ad);

	bd = &c;
	*bd -= 2;

	printf("%p \n", &c);
	printf("%d \n", *bd);

	printf("%p \n", &bd);

	return 0;
}
*/

/*

int main()
{
	int arr[3] = {10, 20, 30};
	int* ptr = &arr;
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d \n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("������ ptr[%d]�� �� : %d \n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;

	for (int i = 0; i < 3; i++)
	{
		//printf("�迭 arr[%d]�� �� : %d \n", i, arr[i]);
		printf("�迭 arr[%d]�� �� : %d \n", i, *(arr + i));

	}

	for (int i = 0; i < 3; i++)
	{
		//printf("������ ptr[%d]�� �� : %d \n", i, ptr[i]);
		printf("������ ptr[%d]�� �� : %d \n", i, *(ptr + i));
		printf("������ ptr[%d]�� �ּҰ� : %p \n", i, ptr + i);

	}
	// *(arr + i) == arr[i]
	// �迭�� �ּ� == �迭�� 0��°(ù��°) �ּ�

	printf("arr ��ü�� �� : %p\n", arr);
	printf("arr[0]�� �ּ� : %p\n", &arr[0]);

	printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d \n", *arr); // *(arr + 0)
	printf("arr[0]�� ���� �� : %d \n", arr[0]);


	// *&�� �ƹ��͵� �ʹ� �Ͱ� ����. &�� �ּ�, *�� �ּ��� ��
	// *& �پ������� ���� ���.

	return 0;
}
*/

/*
void swap(int a, int b);
void swap_addr(int *a, int *b);
int main() {
	int a = 10;
	int b = 20;
	printf("a�� �ּ� : %p \n", &a);
	printf("b�� �ּ� : %p \n", &b);
	printf("SWAP �Լ� �� -> a : %d, b : %d \n", a, b);
	swap(a, b);
	printf("SWAP �Լ� �� -> a : %d, b : %d \n", a, b);

	printf("\n\n");
	// ���� ���� ���� (Call by Value) -> ������ �ƴ� ���� ����, �����Լ� ����?

	// �޸� ������ �ּҰ� ��ü�� �ѱ��?
	printf("a�� �ּ� : %p \n", &a);
	printf("b�� �ּ� : %p \n", &b);
	printf("SWAP_ADDR �Լ� �� -> a : %d, b : %d \n", a, b);
	swap_addr(&a, &b);
	printf("SWAP_ADDR �Լ� �� -> a : %d, b : %d \n", a, b);
	return 0;
}

void swap(int a, int b)
{
	printf("a�� �ּ� : %p \n", &a);
	printf("b�� �ּ� : %p \n", &b);
	int temp = a;
	a = b;
	b = temp;
	printf("SWAP �Լ� ���� -> a : %d, b : %d \n", a, b);
}

void swap_addr(int *a, int *b)
{
	printf("a�� �ּ� : %p \n", &a);
	printf("b�� �ּ� : %p \n", &b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("SWAP_ADDR �Լ� ���� -> a : %d, b : %d \n", *a, *b);
}


*/

/* 

void change_array(int* ptr);

int main() {
	int arr[3] = { 10, 20, 30 };
	//change_array(arr);
	change_array(&arr[0]);

	for (int i = 0; i < 3; i++) {
		printf("%d \n", arr[i]);
	}
}

void change_array(int* ptr)
{
	ptr[2] = 50;
}
*/


/*

void test();
int arr[3];
int main()
{
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	test(arr);
	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
}

void test()
{
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
}


*/