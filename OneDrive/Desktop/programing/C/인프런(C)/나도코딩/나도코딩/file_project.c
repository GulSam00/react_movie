#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��й�ȣ�� �Է�
// �´� ��쿡�� ��� �б⸦ �о �����ְ� ��� �ۼ�
// Ʋ�� ��� ��� �޼���

# define MAX 10000

int main()
{
	//fgets, fputs Ȱ��
	char line[MAX]; // ���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; // �ϱ��忡 �Է��� ����
	char password[20]; // ��й�ȣ �Է�
	char c; // ��й�ȣ �Է� �� �� Ű�� Ȯ�ο�

	printf("====================����ϱ�====================\n");
	printf("��й�ȣ �Է� : ");

	//getchar() : ���͸� �Է¹޾ƾ� ����
	//getch() : Ű �Է� �� �ٷιٷ� ����
	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13) // Enter�� ���ϴ� �ƽ�Ű�ڵ�
		{
			password[i] = '\0';
			break;
		}
		else
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

		// ��й�ȣ : skehzheld
		printf("\n\n==========��й�ȣ Ȯ�� ��...==========");
		if (strcmp(password, "skehzheld") == 0) // strcmp(�񱳴��, �񱳴��) / �����ϸ� 0, �ٸ��� 1�̳� -1
		{
			printf(" === ��й�ȣ Ȯ�� �Ϸ� === \n\n");
			char* fileName = "C:\\Users\\qwerg\\OneDrive\\Desktop\\diary.txt";
			FILE * file = fopen(fileName, "a+b"); // ������ ������ ����, ������ ������ append (�ڿ�������)

			if (file == NULL)
			{
				printf("���� ���� ����\n");
				return 1;
			}

			while (fgets(line, MAX, file) != NULL)
			{
				printf("%s", line);
			}

			printf("\n\n ������ ��� �ۼ��ϼ���! �����Ϸ��� EXIT�� �Է��ϼ���. \n\n");

			while (1)
			{
				scanf("%[^\n]", contents); // %[^\n] : �ٹٲ�(\n)�� ������ ������ ���� (�� ���� ��)
				getchar(); // Enter �Է� (\n) Flush ó��

				if (strcmp(contents, "EXIT") == 0)
				{
					printf("����ϱ� �Է��� ���� \n\n");
					break;
				}
				fputs(contents, file);
				fputs("\n", file); // Enter�� ������ �����Ͽ����Ƿ� ó��
			}
			fclose(file);
				
		}
		else
		{
			printf ("\n\n===========��й�ȣ�� Ʋ�Ƚ��ϴ�.========== \n\n");

		}
	



	return 0;
}