#define _CPR_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX 10000 // MAX�� '10000'�� ����� ��.

int main_file()
{
	// ���� �����
	// ���Ͽ� �����͸� ����
	// ���Ͽ� ����� �����͸� �ҷ�����

	// fputs, fgets �� -> ���ڿ�
	//char line[MAX]; // char line[10000]

	// ���� ����
	/*
		FILE * file = fopen("C:\\Users\\qwerg\\OneDrive\\Desktop\\test1.txt", "wb"); // r : �б�, w : ����, a : �߰� (�ڿ� ����) | t : �ؽ�Ʈ, b : ���̳� ������
	if (file == NULL)
	{
		printf("���� ����!");
		return 1;
	}
	fputs("fputs�� �̿��ؼ� ���� �����ϴ�.\n", file);
	fputs("�� �������� Ȯ�� \n", file);
	fclose(file);
	*/


	// ������ ���� ���� ���� ���� ���¿��� ���α׷��� ������ ���� �� ����.
	// ������ �ݴ� ����

	// ���� �б�

	/*

	FILE* file = fopen("C:\\Users\\qwerg\\OneDrive\\Desktop\\test1.txt", "rb"); // r : �б�, w : ����, a : �߰� (�ڿ� ����) | t : �ؽ�Ʈ, b : ���̳� ������
	if (file == NULL)
	{
		printf("���� ����!");
		return 1;
	}
	while (fgets(line, MAX, file) != NULL) // ����� ��, ������, ���� ������
	{
		printf("%s", line);
	}
		fclose(file);
	*/


	// fprintf, fscanf �� 

	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];
	/*
	FILE* file = fopen("C:\\Users\\qwerg\\OneDrive\\Desktop\\lottery.txt", "wb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d \n", "���ʽ� ��ȣ ", 7);

	fclose(file);
	*/

	FILE* file = fopen("C:\\Users\\qwerg\\OneDrive\\Desktop\\lottery.txt", "rb"); // r : �б�, w : ����, a : �߰� (�ڿ� ����) | t : �ؽ�Ʈ, b : ���̳� ������
	if (file == NULL)
	{
		printf("���� ����!");
		return 1;
	}

	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1,
		num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);

	return 0;
}