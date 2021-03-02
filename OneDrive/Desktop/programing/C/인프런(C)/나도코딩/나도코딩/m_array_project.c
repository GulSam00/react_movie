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
		printf("及増聖 朝球 2鯵 識澱 : ");
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
			printf("\n\n 桜壱! : %s 降胃 \n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			ckeckAnimal[firstSelect_x][firstSelect_y] = 1;
			ckeckAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else if (ckeckAnimal[firstSelect_x][firstSelect_y] + ckeckAnimal[secondSelect_x][secondSelect_y] != 0)
		{
			printf("戚耕 及増微 朝球脊艦陥. \n");
			failCount++;
		}

		else
		{
			printf("強! \n");
			failCount++;
		}
		printf("%d : %s \n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
		printf("%d : %s \n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);


		if (foundAllAnimals() == 1)
		{
			printf("惟績 適軒嬢!");
			printf("恥 %d 腰 堂携柔艦陥.", failCount);
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
	strAnimal[0] = "据周戚";
	strAnimal[1] = "馬原";
	strAnimal[2] = "悪焼走";
	strAnimal[3] = "壱丞戚";
	strAnimal[4] = "掬走";
	strAnimal[5] = "坪晦軒";
	strAnimal[6] = "奄鍵";
	strAnimal[7] = "開展";
	strAnimal[8] = "展繕";
	strAnimal[9] = "硲櫛戚";

}

void shuffleAnimal()
{
	// けけけけけ
	// けけけけけ
	// けけけけけ
	// けけけけけ
	// けけけけけ
	for (int i = 0; i < 10; i++) // 疑弘 側 竺舛
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

// 朔 因娃 達奄
int getEmptyPostion()
{
	while (1)
	{
		int randPos = rand() % 20; // 0 ~ 19 紫戚税 収切研 鋼発
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
	printf(" \n ===============舛岩================\n");
}


void printQuestion()
{
	printf("\n\n 庚薦 \n\n");
	int seq = 0;

	/*								//seq				/checkAnimal
		けけけけけ				0 1 2 3 4				0 0 0 0 0
		けけけけけ				掬走 6 7 8 9 掬走			1 0 0 0 1
		けけけけけ
		けけけけけ
		けけけけけ

	*/


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 朝球研 及増嬢辞 舛岩聖 限蓄檎 "疑弘 戚硯"
			if (ckeckAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}

			// 焼送 公 限縛陥檎 収切
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