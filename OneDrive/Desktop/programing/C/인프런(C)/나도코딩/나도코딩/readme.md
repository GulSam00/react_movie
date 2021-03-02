### �Լ�

* ��ȯ���� ������ ���� �� void, �ִٸ� �ش� �ڷ������� ����.

```c
// ���� ������Ʈ


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

```
### �迭

* sizeof�� �迭�� ũ�⸦ ����ϸ� ���ڿ����� 1��ŭ ũ�� ����.
* ���ڿ��� ���������� ���� �ǹ��ϴ� NULL ������ `\0`�� ���ԵǾ�� ��.
	- ������ ������ �ڵ����� �Էµ�.
	- ���ڿ��� �� �°� �迭�� �����ϸ� ���� �߻�.
* ����� ���ڴ� 1 ����Ʈ, �ѱ��� ���ڴ� 2 ����Ʈ.
* char �ڷ����� ũ��� 1 ����Ʈ.

* char�� %d�� ����ϸ� �ƽ�Ű �ڵ尡 ��µ�.
	- 0�� 1�ۿ� �𸣴� ��ǻ�Ͱ� ���ڸ� ����� �� �ִ� ����.

* null�� �ƽ�Ű �ڵ�� 0

```c
// ������Ʈ

#include <stdio.h>
#include <time.h>

int main_array()
{
	srand(time(NULL));
	printf(" \n\n ======= ��Ӹ� ====== \n\n");
	int answer;
	int treatment = rand() % 4; // 0 ~ 3 �� ����

	int cur_show = 0;
	int pre_show = 0;

	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0, 0, 0, 0 };
			do {
				cur_show = (rand() % 2) + 2; // 2 or 3
			} while (cur_show == pre_show);

			pre_show = cur_show;
			int is_included = 0;
			printf(" > %d ��° �õ� : ", i);

			for (int j = 0; j < cur_show; j++)
			{
				int rand_bottle = rand() % 4; // 0 ~ 3

				if (bottle[rand_bottle] == 0) {
					bottle[rand_bottle] = 1;
					if (rand_bottle == treatment) is_included = 1;
				}
				else j--;
			}

			for (int k = 0; k < 4; k++)
			{
				if (bottle[k] == 1)	printf("%d ", k + 1);

			}
			printf(" ������ �Ӹ��� �ٸ��ϴ�. \n\n");
				if (is_included == 1) printf("�ڶ󳪶� �Ӹ��Ӹ�! \n");
				else printf("����!  \n");
				printf("�ƹ� Ű�� ��������...");
				getchar();

			}


	printf("�߸����� �� ��?");
	scanf("%d", &answer);
	if (answer == treatment + 1) printf("����!");
	else printf("����! ���� %d�����ϴ�.", treatment + 1);



	return 0;

```


### �迭

```c
#include <stdio.h>
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
```

* �迭�� �ּҰ��� �����Ϳ� �����ϴ� `*`���� ������ ���� �����ε� �ε������� ������ ���� ������ ����.
* �����ͷ� �����ϴ� �ּ��� �迭�� ���Ұ��� `*` ���� ���� �� ������ ����.
* �����Ͱ� �迭�� ����?
* �迭(arr)�� �ּҰ��� ���� `�迭[0]`�� �ּҰ��� ���� �Ȱ���.

#### SWAP
```c
#include <stdio.h>
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
```

* �Լ����� �Ķ���͸� �����ص� �ƱԸ�Ʈ�� ���� ���� ������ ���� ������ �ʴ´�.
* �Ķ���͸� ������ ������ �����ϰ� �ƱԸ�Ʈ ���� �տ� &�� ���� �� �ִ�.
	- �Լ� ���ο��� ���� �����ϸ� ���� ������ �ּҰ��� �ش��ϴ� ���� �����ϴ� ���̱⿡ �Լ� �� ������ ������ �޴´�.

```c
# include <stdio.h>

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
```

* �迭�� ���� ��ü�� �ּҰ�(�迭[0])�� ������ ������ *�� ������ �ʾƵ� ������ �ȴ�.
* `change_array(arr) == change_array(&arr[0])`

```c

// ������Ʈ

#include <stdio.h>
#include <time.h>


int level;
int arrayFish[6];
int* cursor;
void initData();
void printfFishes();
void decreaseWater(long preTime);
int checkFishAlive();

int main() {

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
			printf("%d�� ������ �̹� ������ȴ�...\n",num);
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

```

### ������ �迭

```c
int arr5[4][2];
	/* 
	 1 2
	1����
	2����
	3����
	4����

	[0,0][0,1]
	[1,0][1,1]
	[2,0][2,1]
	[3,0][3,1]
	
	*/

	int arr3[2][3][4];
	/*
	������ ������ ������ ������
	������ ������ ������ ������

	*/

	int arr_1[3][6] = { 
		{1,2,3,4,5},
		{3,4},
		{1} 
	};

	int arr_2[2][2][2] = {
		{
			{1, 2},
			{3, 4}
		},
		{
			{5, 6},
			{7}

		}
	};
```

* `getchar()` ����ڰ� �Է��� ������ ��ٸ��� �Լ�.

```c
// ������Ʈ

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
int main()
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

	}

	if (foundAllAnimals())
	{
		printf("���� Ŭ����!");
		printf("�� %d �� Ʋ�Ƚ��ϴ�.", failCount);
		exit(0);
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

```

* int�� �迭�� �ʱ� ���� �� �ڵ����� ��� ���� 0���� �ʱ�ȭ�Ѵ�.

### ����ü

```c

#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;
};

int main()
{
struct GameInfo gameInfo1;
	
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	struct GameInfo gameInfo2 = { "���Ӱ���", 2020, 100, "��������" };

	return 0;
}
```

* struct�� ����ؼ� ����ü ����
* ���̽� Ŭ������ ���
* ����ü�� �ڷ���(?)�� �����ϰ� �߰�ȣ �ȿ� ������ ������ ���ʴ�� �ʱ�ȭ�ȴ�. 

```c
	struct GameInfo gameArray[2] = { 
	{ "���Ӱ���", 2020, 100, "��������" },
	{ "�԰԰�����", 2018, 190, "���Ǻ���" }
	};
```

* �迭�ε� ����ü�� ���� �� ����.

```c
	struct GameInfo *gamePtr;
	gamePtr = &gameInfo1;
	printf("������ \n");
	printf("  ���Ӹ� : %s\n", (*gamePtr).name);
	printf("  ���Ӹ� : %d\n", (*gamePtr).year);
	printf("  ���Ӹ� : %d\n", (*gamePtr).price);
	printf("  ���Ӹ� : %s\n", (*gamePtr).company);

	printf("  ���Ӹ� : %s\n", gamePtr->name);
	printf("  ���Ӹ� : %d\n", gamePtr->year);
	printf("  ���Ӹ� : %d\n", gamePtr->price);
	printf("  ���Ӹ� : %s\n", gamePtr->company);



```

* �����ͷ� ����ü�� ���� �� ����.
* �ּҰ��� �ش��ϴ� �ڷ�(��)�� �����ϱ� ���ؼ� `*`�� ���
	- ����ó�� `*�����ͺ���.����ü����`��� ���� �����ͺ���.����ü������ �ּҰ��� ã������ ��.
	- `*`�� �����ͺ����� ��ȣ�� ������ƾ߸� ���� �ۿ�.
* `�����ͺ��� -> ����ü����`���� ���� ������� ���� ����

```c
#include <stdio.h>

typedef struct //GameInfomation 
{
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
} GAME_INFO;


int main()
{

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
	printf ("%d %d \n", game1.name, game1.year);

	
	GAME_INFO game2;
	game2.name = "�ѱ� �۹�2";
	game2.year = 3213;
	printf("%s %d \n", game2.name, game2.year);


	return 0;


}
```

* `typedef`
	- �ڷ����� �̸��� ������ �� �ְ� �ȴ�.
	- `typedef` `�ٲٰ� ���� �ڷ���` `�ٲٰ� ���� �̸�`
	- `struct ����ü �̸�`���� �� �� �̻��� ���嵵 ġȯ��Ű�� �� �����ϴ�. 
	- ����ü�� ������ �� �տ� `typedef`�� ���̰� �߰�ȣ �������� ġȯ�� �̸��� ���� �� �ִ�.
		- `typedef struct`ó�� ����ü�� �̸��� ������ ���𿡴� ���� ������ ����ü �̸��� ���� �ڵ�� ������ ����.

---

### ���� �����

* fputs, fgets
*  fprintf, fscanf 