#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo * friendGame;
};

typedef struct GameInfomation {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
} GAME_INFO;

int main_struct()
{
	//���� ���

	struct GameInfo gameInfo1;
	
		gameInfo1.name = "��������";
		gameInfo1.year = 2017;
		gameInfo1.price = 50;
		gameInfo1.company = "����ȸ��";

	

		printf("���� ��� ���� \n");
		printf("  ���Ӹ� : %s\n", gameInfo1.name);
		printf("  ���Ӹ� : %d\n", gameInfo1.year);
		printf("  ���Ӹ� : %d\n", gameInfo1.price);
		printf("  ���Ӹ� : %s\n", gameInfo1.company);

		struct GameInfo gameInfo2 = { "���Ӱ���", 2020, 100, "��������" };


	printf("���� ��� ���� \n");
	printf("  ���Ӹ� : %s\n", gameInfo2.name);
	printf("  ���Ӹ� : %d\n", gameInfo2.year);
	printf("  ���Ӹ� : %d\n", gameInfo2.price);
	printf("  ���Ӹ� : %s\n", gameInfo2.company);

	struct GameInfo gameArray[2] = { 
	{ "���Ӱ���", 2020, 100, "��������" },
	{ "�԰԰�����", 2018, 190, "���Ǻ���" }
	};
	printf("������ \n");
	printf("  ���Ӹ� : %s\n", gameArray[1].name);
	printf("  ���Ӹ� : %d\n", gameArray[1].year);
	printf("  ���Ӹ� : %d\n", gameArray[1].price);
	printf("  ���Ӹ� : %s\n", gameArray[1].company);


	struct GameInfo *gamePtr;
	gamePtr = &gameInfo1;
	printf("������ \n");
	/*
	printf("  ���Ӹ� : %s\n", (*gamePtr).name);
	printf("  ���Ӹ� : %d\n", (*gamePtr).year);
	printf("  ���Ӹ� : %d\n", (*gamePtr).price);
	printf("  ���Ӹ� : %s\n", (*gamePtr).company);
	*/
	printf("  ���Ӹ� : %s\n", gamePtr->name);
	printf("  ���Ӹ� : %d\n", gamePtr->year);
	printf("  ���Ӹ� : %d\n", gamePtr->price);
	printf("  ���Ӹ� : %s\n", gamePtr->company);


	// ����ü�� ����ü
	gameInfo1.friendGame = &gameInfo2;
	printf("����ü ���� ����ü\n");

	printf("  ���Ӹ� : %s\n", gameInfo1.friendGame->name);
	printf("  ���Ӹ� : %d\n", gameInfo1.friendGame->year);
	printf("  ���Ӹ� : %d\n", gameInfo1.friendGame->price);
	printf("  ���Ӹ� : %s\n", gameInfo1.friendGame->company);

	// typedef
	// �ڷ����� �̸� ����
	int i = 1;
	typedef int ����;
	���� j = 3;
	printf("%d, %d \n", i, j);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���1";
	game1.year = 4124;
	printf("%s %d \n", game1.name, game1.year);


	GAME_INFO game2;
	game2.name = "�ѱ� �۹�2";
	game2.year = 3213;
	printf("%s %d \n", game2.name, game2.year);



	return 0;


}