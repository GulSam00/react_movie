#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int* cursor;
void initData();
void printfFishes();
void decreaseWater(long preTime);
int checkFishAlive();

int main_pointer() {

	long startTime = 0; // ���� �ð�
	long totalTime = 0; // �� �ð�
	long preTime = 0; // ���� ��� �ð�

	int num; // �� �� ���׿� ���� �ٰ��� �Է�
	initData();


	cursor = arrayFish; // cursor[0] = arrayFish[0]

	startTime = clock(); // ���� �ð��� 1000���� 1�� �������� ��ȯ

	printf("%d %d %d %d \n", cursor[0], cursor[1], cursor[2], cursor[3]);

	while (1)
	{
		printfFishes();
		printf(" �� �� ���׿� ���� �ٷ�?");
		scanf_s("%d", &num);


		// �Է°� üũ
		if (num < 1 || num > 6)
		{
			printf("�߸� �Է�");
			continue;
		}

		// �� ��� �ð�
		totalTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld �� \n", totalTime);

		// ���� �� �� �ð�
		preTime = totalTime - preTime;
		printf("�ֱ� ��� �ð� : %ld �� \n", preTime);

		// ������ ���� ����
		decreaseWater(preTime);

		// �Է��� ���׿� ���� �ش�
			// ������ ���� ������ �� �� ����.
		if (cursor[num - 1] <= 0)
		{
			printf("%d�� ������ �̹� ������ȴ�...\n", num);
		}
		// ���� 100 �����̴�.
		else if (cursor[num - 1] + 5 >= 100)
		{
			printf("%d�� ���׿� ���� ��ĥ �� ����...\n", num);
		}
		else
		{
			printf("%d�� ���׿� ���� �ش�. \n", num);
			cursor[num - 1] += 5;
		}


		// ���� �� ����
		if ((int)totalTime / 20 > level - 1)
		{
			level += 1;
			printf("���� ��! \n");

			if (level == 6)
			{
				printf("���� Ŭ����! \n");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			printf("���ӿ���... \n");
			exit(0);
		}
		else {
			printf("ȭ����!\n");

		}

		preTime = totalTime;

	}


	return 0;
}

void initData()
{
	level = 1; // ���� ����
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // �� ����
		//printf("������ : %d \n", arrayFish[i]);
	}
}

void printfFishes()
{
	for (int i = 0; i < 6; i++)
	{
		printf("%3d�� ", i + 1);
	}
	printf("\n");

	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");

}

void decreaseWater(long preTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)preTime); // �پ�� ���� �� ó��
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1;
		}
	}
	return 0;
}
