/*
// ����1
#include <stdio.h>

int magicbox(int num)
{
	return num + 4;
}

int main()
{
	int num;
	printf("input the number : ");
	scanf_s("%d", &num);
	// magicbox(num);
	num = magicbox(num);
	printf("sum : %d", num);

	return 0;
}
*/

/*

//���� 2
#include <stdio.h>
int slave(int total_money, int earned_money)
{
	total_money += earned_money;
	return total_money;
}
int main()
{
	int total_money = 0;
	int earned_money;
	printf("input today income \n");
	while(1)
	{

	scanf_s("%d", &earned_money);
	if (earned_money == 0) break;
	total_money = slave(total_money, earned_money);
	printf("earned_money : %d \n total money : %d \n", earned_money, total_money);
	}
	return 0;
}
*/

/*
#include <stdio.h>
// ���� 3
int sum_n(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	printf("sum = %d", sum_n(n));
	return 0;
}
*/

/*

#include <stdio.h>
// ���� 4
int num_n(int n)
{
	int array[100] = {2, 3};
	int count = 2;
	int check = 1;
	for (int i = 4; i <= n; i++)
	{
		for (int j = 0; j < count; j++)	if (i % array[j] == 0) check = 0;

		if (check)
		{
			array[count] = i;
			count++;
		}
		check = 1;
	}

	for (int i = 0; i < count; i++) printf("�Ҽ� : %d \n", array[i]);

	return 0;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	num_n(n);
	return 0;
}
*/


/*

// �ùٸ� swap �Լ� 
#include <stdio.h>
int swap(int* a, int* b) {
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}

int main()
{
	int i, j;

	i = 3;
	j = 5;

	printf("���� �� : i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("���� �� : i : %d, j : %d \n", i, j);

	return 0;

}
*/

/*
#include <stdio.h>

int add_number(int* parr);

int main()
{
	int arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	add_number(arr);

	printf("�迭�� �� ���� : %d %d %d", arr[0], arr[1], arr[2]);

	return 0;
}

int add_number(int* parr)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		parr[i]++;
		// *(parr0+i)++;
	}
	return 0;
}

*/

/*

// �� ���ư��� ����. �����Ͱ� ����Ű�� ������ ���� �ٲ۴�. 
#include <stdio.h>

int pswap(int** pa, int** pb);
int main() {
	int a, b;
	int* pa, * pb;

	pa = &a;
	pb = &b;

	printf("pa �� ����Ű�� ������ �ּҰ� : %p \n", pa);
	printf("pa �� �ּҰ� : %p \n \n", &pa);
	printf("pb �� ����Ű�� ������ �ּҰ� : %p \n", pb);
	printf("pb �� �ּҰ� : %p \n", &pb);

	printf(" ------------- ȣ�� -------------- \n");
	pswap(&pa, &pb);
	printf(" ------------- ȣ�ⳡ -------------- \n");

	printf("pa �� ����Ű�� ������ �ּҰ� : %p \n", pa);
	printf("pa �� �ּҰ� : %p \n \n", &pa);
	printf("pb �� ����Ű�� ������ �ּҰ� : %p \n", pb);
	printf("pb �� �ּҰ� : %p \n", &pb);
	return 0;
}
int pswap(int** ppa, int** ppb) {
	int* temp = *ppa;

	printf("ppa �� ����Ű�� ������ �ּҰ� : %p \n", ppa);
	printf("ppb �� ����Ű�� ������ �ּҰ� : %p \n", ppb);

	*ppa = *ppb;
	*ppb = temp;

	return 0;
}
*/

/* 2 ���� �迭�� �� ���Ҹ� 1 �� ������Ű�� �Լ� 
#include <stdio.h>
/* ���� ������ 2 ���� ������ �迭��, �� ���� ���� ���ڷ� �޴´�. 
int add1_element(int(*arr)[2], int row);
int main() {
	int arr[3][2];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	add1_element(arr, 3);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("arr[%d][%d] : %d \n", i, j, arr[i][j]);
		}
	}
	return 0;
}
int add1_element(int(*arr)[2], int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 2; j++) {
			arr[i][j]++;
		}
	}

	return 0;
}
*/

/*

// ����� ���ڷ� �޾Ƶ��̱�
#include <stdio.h>
int read_val(const int val);
int main() {
	int a;
	scanf("%d", &a);
	read_val(a);
	return 0;
}
int read_val(const int val) {
	val = 5;  // ������ �ʴ´�.
	return 0;
}
*/

/* 
//�Լ� ������ 
#include <stdio.h>

int max(int a, int b);
int main() {
	int a, b;
	int (*pmax)(int, int);
	pmax = max;

	scanf("%d %d", &a, &b);
	printf("max(a,b) : %d \n", max(a, b));
	printf("pmax(a,b) : %d \n", pmax(a, b));

	return 0;
}
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;

	return 0;
}
*/

/*

#include <stdio.h>


void input_score(int* grade);
void print_score(int* grade, int ave);
int main()
{
	int grade[5];
	int ave= 0;
	input_score(grade);

	for (int i = 0; i < 5; i++)
	{
		ave += grade[i];
	}
	ave /= 5;

	print_score(grade,ave);

	return 0;
}

void input_score(int* grade)
{
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &grade[i]);
		//printf("%d \n", grade[i]);
	}
}

void print_score(int* grade, int ave)
{
	int tmp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (grade[i] > grade[j])
			{
				tmp = grade[i];
				grade[i] = grade[j];
				grade[j] = tmp;
			}
		}
	}
	for (int k = 0; k < 5; k++)
	{
		if (grade[k] >= ave) printf("�հ� - ");
		else printf("���հ� - ");

		printf("%d \n", grade[k]);
	}
}

*/


/* 
//���� �ڵ� 
#include <stdio.h>

int main() {
	int arr[10];
	int i;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i <= 10; i++) {
		printf("%d \n", arr[i]);
	}
	return 0;
}
*/

/*

#include <stdio.h>
int cmp(char* s1, char* s2);
int length(char* s);
int main(void)
{
	char str1[500];
	char str2[500];
	scanf("%[^\n]", str1);
	getchar();
	scanf("%[^\n]", str2);
	printf("%d\n", cmp(str1, str2));
}
int cmp(char* s1, char* s2)
{
	int i;
	if (length(s1) != length(s2)) {
		return 0;
	}
	else {
		for (i = 0; i < length(s1); i++) {
			if (s1[i] == s2[i]) {
				continue;
			}
			else {
				return 0;
			}
		}
		return 1;
	}
}
int length(char* s)
{
	int i = 0;
	while (s[i]) {
		i++;
	}
	return i;
}
*/

/*


#include <stdio.h>


int append_book(char(*book_name)[30], char(*auth_name)[30],
	char(*publ_name)[30], int* borrowed, int* num_total_book);
int search_book(char(*book_name)[30], char(*auth_name)[30],
	char(*publ_name)[30], int num_total_book);
int compare(char* str1, char* str2);
int borrow_book(char* book_list, int book_amount, char* borrowed_book);
int return_book(char* book_list, int book_amount, char* borrowed_book);
int main()
{

	char book_name[100][30], auth_name[100][30], publ_name[100][30];
	int num_total_book = 0;
	int select = 0;
	int borrowed[100];

	// 1 : å �߰� - ����, ����, ���ǻ�
	// 2 : �˻� - ���� �˻�, ���� �˻�, ���ǻ� �˻�
	// 3 : ����
	// 4 : �ݳ�
	while (select != 5)
	{
		select = 0;
		printf("���� ���� ���α׷� \n");
		printf("�޴��� �����ϼ��� \n");
		printf("1. å�� ���� �߰��ϱ� \n");
		printf("2. å�� �˻��ϱ� \n");
		printf("3. å�� ������ \n");
		printf("4. å�� �ݳ��ϱ� \n");
		printf("5. ���α׷� ���� \n");

		printf("����� ������ : ");
		scanf("%d", &select);

		if (select == 1) 
			/* å�� ���� �߰��ϴ� �Լ� ȣ�� 
append_book(book_name, auth_name, publ_name, borrowed, &num_total_book);
		}
		else if (select == 2
		/* å�� �˻��ϴ� �Լ� ȣ�� 
		search_book(book_name, auth_name, publ_name, num_total_book);
		}
		else if (select == 3) {
		/* å�� ������ �Լ� ȣ�� 
		}
		else if (select == 4) {
		/* å�� �ݳ��ϴ� �Լ� ȣ�� 
		}
		else if (select == 5) {
		/* ���α׷��� �����Ѵ�. 
		break;
		}
	}

	return 0;
}

// 1. å �߰�
int append_book(char(*book_name)[30], char(*auth_name)[30],
	char(*publ_name)[30], int* borrowed, int* num_total_book)
{
	printf("�߰��� å�� ���� : ");
	scanf("%s", book_name[*num_total_book]);

	printf("�߰��� å�� ���� : ");
	scanf("%s", auth_name[*num_total_book]);

	printf("�߰��� å�� ���ǻ� : ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0; 
	printf("�߰� �Ϸ�! \n");
	(*num_total_book)++;

	return 0;
}
int search_book(char(*book_name)[30], char(*auth_name)[30],
	char(*publ_name)[30], int num_total_book)
{
	int user_input, i;
	char user_search[30];
	printf("%d, %p", num_total_book, num_total_book);

	printf("�˻� ���\n");
	printf("1. å ���� \n");
	printf("2. ������ \n");
	printf("3. ���ǻ� \n");
	scanf("%d", &user_input);
	printf("�˻��� �Է� : ");
	scanf("%s", user_search);

	if (user_input == 1)
	{
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(book_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸�  : %s // ������ : %s // ���ǻ� : %s \n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}


	else if (user_input == 2)
	{
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(auth_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸�  : %s // ������ : %s // ���ǻ� : %s \n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}

	else if (user_input == 3)
	{
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(publ_name[i], user_search))
			{
				printf("��ȣ : %d // å �̸�  : %s // ������ : %s // ���ǻ� : %s \n",
					i, book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}

	return 0;
}
int compare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0') return 1;

	return 0;
}
*/