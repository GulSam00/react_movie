#include <stdio.h>


int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int input_num(int num);

int main_function() {
	int num1 = 0;
	int num2 = 0;
	int select = 0;
	printf("������");
	while (select < 5) {
		select = 0;
		num1 = input_num(num1);
		num2 = input_num(num2);
		printf("1. ���ϱ� \n 2. ���� \n 3. ���ϱ� \n 4. ������ \n 5. ������\n �Է� :");
		scanf_s("%d", &select);
		switch (select)
		{
		case 1:
		{
			printf("�� : %d", add(num1, num2));
			continue;
		}
		case 2:
		{
			printf("�� : %d", sub(num1, num2));
			continue;
		}

		case 3:
		{
			printf("�� : %d", mul(num1, num2));
			continue;
		}

		case 4:
		{
			printf("�� : %d", div(num1, num2));
			continue;
		}

		default:
		{
			printf("�ȳ���");
		}
		}

	}
	return 0;

}

int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}
int input_num(int num)
{
	printf("���ڸ� �Է��ϼ���. \n");
	scanf_s("%d", &num);
	printf("\n �Է��� ���� = %d \n", num);
	return num;
}