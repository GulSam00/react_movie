#include <stdio.h>
/*
 
/*
* 
* 
int main() {

	/* int a = 0xAF;  // 10101111
	int b = 0xB5;  // 10110101

	printf("%x \n", a & b);   // a & b = 10100101
	printf("%x \n", a | b);   // a | b =10111111
	printf("%x \n", a ^ b);   // a ^ b = 00011010
	printf("%x \n", ~a);      // ~a = 1....1 01010000
	printf("%x \n", a << 2);  // a << 2 = 1010111100
	printf("%x \n", b >> 3);  // b >> 3 = 00010110

	return 0; */

	/*
	int a = 2147483647;
	printf("a : %d \n", a);

	a++;
	printf("a : %d \n", a);
	*/

	/*
	char a;
	a = 'a';
	printf("a�� ���� ����. �� : %d, ���� : %c \n", a, a);
	return 0;
	*/

	/*
		double celsius;

	printf("���� �µ��� ȭ�� �µ��� �ٲ۴�. \n");
	printf("���� �µ� �Է� \n");
	scanf_s("%lf", &celsius);

	printf("���� %f ���� ȭ���� %f �� �̴�. \n", celsius, 9 * celsius / 5 + 32);

	*/

	/*

	char ch;

	short sh;
	int i;
	long lo;

	float fl;
	double du;

	printf("char�� ���� �Է� : ");
	scanf("%c", &ch);

	printf("short�� ���� �Է� : ");
	scanf("%hd", &sh);
	printf("int�� ���� �Է� : ");
	scanf("%d", &i);
	printf("long�� ���� �Է� : ");
	scanf("%ld", &lo);

	printf("float�� ���� �Է� :");
	scanf("%f", &fl);
	printf("double�� ���� �Է�");
	scanf("%lf", &du);

	printf("char : %c, short : %d, int : %d, ", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);

	return 0;
	*/

	/*
	int money;
	float money_USA = 1105.54;


	printf("�󸶳� ȯ���Ͻðڽ��ϱ�?");
	scanf("%d", &money);

	printf("%d���� ȯ���� �ݾ��� %.2f �޷��Դϴ�.", money, money / money_USA);

	return 0;
	*/

	// ���ǹ�

	/*
	double i, j;
	printf("�Է��� ���� : ");
	scanf("%lf %lf", &i, &j);

	if (j == 0) {
		printf("0���δ� ���� �� ����.");

		return 0;
	}

	printf("%lf �� %lf �� ���� ��. : %lf", i, j, i / j);

		return 0;
	*/

	/*

	int num;

	printf("���ڸ� �Է�");
	scanf("%d", &num);

	if (num == 7) {
		printf("����� 7!");
	}
	else {
		if (num == 1) {
			printf("ù��° ���ڱ���.");
		}
		else {
			printf("�Է��� ���ڴ� %d", num);
		}
	}
	return 0;
	*/

	/*

	int a;
	printf("�ƹ� ���� �Է� : ");
	scanf("%d", &a);

	if (a >= 10) {

		printf("%d�� 10���� ū ����. \n", a);

		if (a < 20) {
			printf("%d �� 10 �̻�, 20 �̸��� ����. \n", a);
		}
	}
	else {
		printf("%d�� 10���� ���� ����. \n", a);
	}

	if (a >= 10 && a < 20) {
		printf(" %d�� 10 �̻�, 20 �̸��� ����.", a);
	}

	return 0;
	*/

	// �ݺ���

	/*
		int i;
	for (i = 0; i <= 20; i++) {
		printf("���� : %d \n", i);
	}
	return 0;
	*/


	/*

	int i;
	int subject, score;
	double sum_score = 0;

	printf("���� ���� : ");
	scanf("%d", &subject);

	printf("\n �� ������ ���� \n");
	for (i = 1; i <=subject; i++) {
		printf("���� %d : ", i);
		scanf("%d", &score);
		sum_score += score;
	}
	printf(" ��� : %.2f \n", sum_score / subject);
	return 0;

	*/

	/*

	int usr_answer;

	printf("���� ����");
	for (;;) {
		scanf("%d", &usr_answer);
		if (usr_answer == 3) {
			printf("����!");
			break;
		} else {
			printf("����...");
		}
	}
	int i;

	for (i = 0; i < 100; i++) {

		if (i % 5 == 0) continue;

		if (i == 99) break;

		printf("%d ", i);
	}

	return 0;

	*/

	// ���� 7 - ���μ� ����
	/*
	int n, i = 2, div_n;

	scanf("%d", &n);
	div_n = n;

	printf("N = %d \n", n);
	printf("%d = ", n);

	while (div_n >= i) {
		if (div_n % i == 0) {
			printf("%d ", i);
			div_n /= i;
			i = 2;

			if (div_n >= i) printf("* ");
		}

		else i++;

	}
	return 0;
	*/

	/*
	int arr[100]; // �Ҽ��� ������ �迭
	int guess = 4; // for������ ���� ����
	int i;
	int max = 0;
	int check = 1;
	arr[0] = 2;

	while (arr[99] < 0) {

		if (guess % 2 == 1)
		{
			for (i = max; i > -1; i--)
			{
				if (guess % arr[i] == 0) check = 0;
			}

			if (check == 1)
			{
				printf("%d�� �Ҽ��Դϴ�. ", guess);
				printf("%d��° �Ҽ��� ����մϴ�. \n", max+2);
				arr[max + 1] = guess;
				max++;
			}

		}

		check = 1;
		guess++;
	}


	return 0;
	*/



	/*

	int total = 5;
	int arr[4];
	int temp;
	int i, j, ave = 0;
	int grape;

	for (i = 0; i < total; i++) {
		printf("\n %d ��° �л��� ������? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}

	ave = ave / total;
	printf("��ü �л��� ����� : %d \n", ave);

	for (i = 0; i < total; i++) {
		printf("\n %d�� �л� : %d �� | ", i + 1, arr[i]);
		grape = arr[i] / 4;
		for (j = 0; j < grape; j++) printf("��");
	}
	printf("\n ĿƮ���� : %d �� | ", ave);
	grape = ave / 4;
	for (i = 0; i < grape; i++) printf("��");


	for (i = 0; i < total; i++) {
		printf("\n �л� %d : ", i + 1);
		if (arr[i] >= ave)
			printf("�հ� \n");
		else
			printf("���հ� \n");
	}


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) printf("%d�� : %d �� \n", i + 1, arr[i]);



	return 0;


	*/

	/*
	int score[3][2];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0) {
				printf("%d ��° �л��� ���� ���� : ", i + 1);
				scanf("%d", &score[i][j]);
			}
			else {
				printf("%d ��° �л��� ���� ���� : ", i + 1);
				scanf("%d", &score[i][j]);
			}
		}
	}


	for (i = 0; i < 3; i++) {
		printf("%d ��° �л��� ���� ���� : %d, ���� ���� : %d \n", i + 1, score[i][0], score[i][1]);
	}

	return 0;

	*/

	/*

	int arr1[][3] = { {4, 5, 6}, {7, 8, 9} }; // ����
	int arr2[][2] = { {1, 2}, {3, 4}, {5, 6}, {7} }; // ����
	int arr3[2][] = { {4, 5, 6}, {7, 8, 9} }; // �Ұ���

	*/

	/*
	int arr[10] = { 1, 2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];


	for (int i = 0; i < 10; i++) {
		printf("arr[%d]�� �ּҰ� : %p ", i, &arr[i]);
		printf("(parr + %d )�� �� : %p ", i, (parr + i));

		if (&arr[i] == (parr + i)) {
			printf(" --> ��ġ \n");
		}
		else printf(" --> ����ġ \n");

	}


	return 0;
	*/

	/*

	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* rarr[3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%p][%p]�� �ּҴ� %p \n", &arr[i], &arr[j], &arr[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("rarr[%d] : %p \n", i, rarr[i]);
	}


	return 0;

	*/

	/*

	int arrs[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* rarr[3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%p][%p]�� �ּҴ� %p \n", &arrs[i], &arrs[j], &arrs[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("rarr[%d] : %p \n", i, rarr[i]);
	}


	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	printf(" (arr+0) = %p \n", (arr + 0));
	printf("*(arr+0) = %p \n", *(arr + 0));
	printf("*(*(arr + 0) + 0) = %d \n", *(*(arr + 0) + 0));
	printf("*(arr+1) = %p \n", *(arr + 1));
	printf("*(*(arr + 1) + 0) = %d \n", *(*(arr + 1) + 0));
	printf("*(arr+2) = %p \n", *(arr + 2));
	printf("*(*(arr + 2) + 0) = %d \n", *(*(arr + 2) + 0));

	return 0;

	*/

	/*


	int arr[3] = { 1, 2, 3 };
	int* parr;

	parr = arr; // parr = &arr[0];

	printf("arr[1] : %d \n", arr[1]);
	printf("parr[1] : %d \n", parr[1]);
	printf("%p \n", parr);
	printf("%p \n", parr);

	return 0;


	*/


	/*

	int arr[10] = { 100, 98, 97, 95, 89, 76, 92, 96, 100, 99 };

	int* parr = arr;
	int sum = 0;

	while (parr - arr <= 9) {
		printf("%d\n", *parr);
		printf("%p\n", arr);
		sum += (*parr);
		parr++;
	}

	printf("�� ���� ���� ��� : %d \n", sum / 10);
	return 0;



	/*

	int a;
	int* pa;
	int** ppa;

	pa = &a;
	ppa = &pa;

	a = 3;

	printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
	printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
	printf("&pa : %p // ppa : %p \n", &pa, ppa);

	return 0;
	*/


	/*

	int arr[3] = { 1, 2, 3 };
	int(*parr)[3] = &arr;
	int pa = &arr;

	printf("arr[1] : %d \n", arr[1]);
	printf("parr[1] : %d \n", (*parr)[1]); // *(parr + 1)
	printf("%p", pa);

	return 0;

	*/
	/*
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int(*parr)[3];  // ��ȣ�� �� ���̼���

	parr = arr;  // parr �� arr �� ����Ű�� �Ѵ�.

	printf("parr[1][2] : %d , arr[1][2] : %d \n", parr[1][2], arr[1][2]);

	return 0;

	/* (�迭�� ��) */ /* (������ �̸�) *//* 2 ���� �迭�� �� ���� */
	// ���� ��
	/*
	int(*parr)[3];
	*/


	// `arr == &arr[0]`
	// `*arr == arr[0]`
	// ptr + 1 == ptr + sizeof(*ptr)

	/*

	int arr[2][3] = { {1,2,3}, {4,5,6} };

	int(*ptr)[3] = &arr[0]; // ���Ҹ� 3�� ������ 1���� �迭�� ����Ű�� ������
							// arr�� ù��° �� ��ü�� ����Ű�� ������
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", ptr[i][j]);
		}
		printf("\n");
	}

	return 0;

	*/

	/*
	int arr[2][3] = { {1,2,3}, {4,5,6}};
	for (int(*row)[3] = arr; row < arr + 2; row++)
	{
		for (int* col = *row; col < *row + 3; col++)
		{
			printf("%d \n", *col);
			printf("%p \n", col);
			printf("%d \n", *row[0]);
			printf("%p \n", row[0]);
		}
		printf("\n");
	}
	return 0;
	*/

	/*

		int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int* pa;
	int(*par)[3];

	pa = &par;
	par = arr;


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{

				printf("%d \n", *(*(par+i)+j));
		}
	}

	return 0;
	*/



