#include <stdio.h>
#include <time.h>

/* 

int p(int num);

int main()
{
	/*

	char str[256];
	scanf("%s", str, sizeof(str));
	printf("%s", str);
	return 0;
	*/

	/*

	char name[256];
	printf("�̸� ");
	scanf("%s", name, sizeof(name));

	int age;
	printf("���� ");
	scanf("%d", &age);

	float weight;
	printf("������ ");
	scanf("%f", &weight);

	double height;
	printf("Ű ");
	scanf("%lf", &height);


	printf(" \n \n --- ������ ���� --- \n \n");
	printf("�̸� : %s \n ", name);
	printf("���� : %d \n", age);
	printf("������ : %.2f \n", weight);
	printf("Ű : %.2lf \n", height);

	return 0;

	*/

	/*
	// �Ƕ�̵�

	int floor;
	printf("�� ��?");
	scanf("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) printf(" ");

		for (int k = 0; k < i * 2 + 1; k++) printf("*");

		printf("\n");
	}

	return 0;
	*/

	/*

	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 ����
	if (i == 0) printf("����");
	else if (i == 1) printf("����");
	else printf("��");

	int age = 10;
	switch (age)
	{
	case 2:
		case 9:
		case 10:
			case 11: printf("����"); break;
		case 12:
		case 13:
		case 14:
		case 15:
			case 16: printf("�׷�"); break;
			case 17: printf("����"); break;
		}
		return 0;
	*/
	/*
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100
	printf("%d \n", num);
	int answer;
	int chance = 5;
	while (1) {
		answer = 0;
		printf("���� ��ȸ : %d \n", chance--);
		scanf("%d", &answer);

		if (num < answer)
		{
			printf("����! \n");
		}
		else if (num > answer)
		{
			printf("����! \n");
		}
		else if (num == answer)
		{
			printf("����! \n");
			break;
		}
		else {
			printf("�� �Է��Ѱž�...? \n");
		}

		if (chance == 0) {
			printf("����! \n");
			break;
		}

	}

	return 0;

int num = 2;
num = p(num);
printf("%d", num);

return 0;

}

// �Լ� ����
int p(int num)
{
	num += 4;
	return num;
}
*/

