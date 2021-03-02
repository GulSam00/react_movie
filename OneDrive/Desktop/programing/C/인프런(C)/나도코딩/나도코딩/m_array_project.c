#include <stdio.h>
#include <time.h>


int arrayAnimal[4][5];
int ckeckAnimal[4][5];
char* strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPostion();
int conv_pos_x(pos);
int conv_pos_y(pos);
void printAnimals();
void printQuestion();
int foundAllAnimals();
int main_m_array()
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();
	shuffleAnimal();

	int failCount = 0;

	while (1) {
		int select1 = 0;
		int select2 = 0;

		printAnimals();
		printQuestion();
		printf("������ ī�� 2�� ���� : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2) continue;

		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if (ckeckAnimal[firstSelect_x][firstSelect_y] + ckeckAnimal[secondSelect_x][secondSelect_y] == 0
			&&
			arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])
		{
			printf("\n\n ����! : %s �߰� \n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			ckeckAnimal[firstSelect_x][firstSelect_y] = 1;
			ckeckAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else if (ckeckAnimal[firstSelect_x][firstSelect_y] + ckeckAnimal[secondSelect_x][secondSelect_y] != 0)
		{
			printf("�̹� ������ ī���Դϴ�. \n");
			failCount++;
		}

		else
		{
			printf("��! \n");
			failCount++;
		}
		printf("%d : %s \n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
		printf("%d : %s \n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);


		if (foundAllAnimals() == 1)
		{
			printf("���� Ŭ����!");
			printf("�� %d �� Ʋ�Ƚ��ϴ�.", failCount);
			exit(0);
		}

	}


	return 0;
}


void initAnimalArray()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "������";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "����";
	strAnimal[5] = "�ڳ���";
	strAnimal[6] = "�⸰";
	strAnimal[7] = "��Ÿ";
	strAnimal[8] = "Ÿ��";
	strAnimal[9] = "ȣ����";

}

void shuffleAnimal()
{
	// ����������
	// ����������
	// ����������
	// ����������
	// ����������
	for (int i = 0; i < 10; i++) // ���� ¦ ����
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPostion();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

// �� ���� ã��
int getEmptyPostion()
{
	while (1)
	{
		int randPos = rand() % 20; // 0 ~ 19 ������ ���ڸ� ��ȯ
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(pos)
{
	int x = pos / 5;
	return x;
}

int conv_pos_y(pos)
{
	int y = pos % 5;
	return y;
}


void printAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf(" \n ===============����================\n");
}


void printQuestion()
{
	printf("\n\n ���� \n\n");
	int seq = 0;

	/*								//seq				/checkAnimal
		����������				0 1 2 3 4				0 0 0 0 0
		����������				���� 6 7 8 9 ����			1 0 0 0 1
		����������
		����������
		����������

	*/


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// ī�带 ����� ������ ���߸� "���� �̸�"
			if (ckeckAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}

			// ���� �� �����ٸ� ����
			else
			{
				printf("%8d", seq);
			}
			seq++;

		}
		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (ckeckAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}