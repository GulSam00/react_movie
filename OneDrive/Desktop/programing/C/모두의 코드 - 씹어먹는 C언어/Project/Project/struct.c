
/*

#include <stdio.h>

struct  Human {
	int age;
	int height;
	int weight;
};

int main()
{
	struct  Human Psi;
		Psi.age = 99;
		Psi.height = 100;
		Psi.weight = 80;
		printf("���� \n");
		printf("���� : %4d \n", Psi.age);
		printf("Ű : %4d \n", Psi.height);
		printf("������ : %4d\n", Psi.weight);
		return 0;
}


*/

/*

// ����ü ���� 2 
#include <stdio.h>
char copy_str(char* dest, const char* src);
struct Books {
	/* å �̸� 
	char name[30];
	/* ���� �̸� 
	char auth[30];
	/* ���ǻ� �̸� 
	char publ[30];
	/* ���� ������? 
	int borrowed;
};
int main() {
	struct Books Harry_Potter;

	copy_str(Harry_Potter.name, "Harry Potter");
	copy_str(Harry_Potter.auth, "J.K. Rolling");
	copy_str(Harry_Potter.publ, "Scholastic");
	Harry_Potter.borrowed = 0;

	printf("å �̸� : %s \n", Harry_Potter.name);
	printf("���� �̸� : %s \n", Harry_Potter.auth);
	printf("���ǻ� �̸� : %s \n", Harry_Potter.publ);

	return 0;
}
char copy_str(char* dest, const char* src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}
*/

/* ������ ���� ��� 
/* �򰥸� 
#include <stdio.h>
struct TEST {
  int c;
  int *pointer;
};
int main() {
  struct TEST t;
  struct TEST *pt = &t;
  int i = 0;

  /* t �� ��� pointer �� i �� ����Ű�� �ȴ�
  t.pointer = &i;

  /* t �� ��� pointer �� ����Ű�� ������ ���� 3 ���� �����
  *t.pointer = 3;


  printf("i : %d \n", i);

  /*

  -> �� * ���� �켱������ �����Ƿ� ���� �ؼ��ϰ� �ȴ�.
  ��,
  (pt �� ����Ű�� ����ü ������ pointer ���) �� ����Ű�� ������ ���� 4 ��
  �ٲ۴�. ��� ���̴�/

 
  *pt->pointer = 4;
  printf("i : %d \n", i);

  pt->c = 5;
  printf("i : %d \n", i);

  return 0;
}
*/

/*
#include <stdio.h>
char copy_str(char* dest, char* src);
struct TEST {
	int i;
	char str[20];
	int b;
};

int main() {
	struct TEST a, b;

	b.i = 3;
	copy_str(b.str, "hello, world");

	a = b;

	printf("a.str : %s \n", a.str);
	printf("a.i : %d \n", a.i);

	return 0;
}
char copy_str(char* dest, char* src) {
	while (*src) {
		printf("%c \n", *src);
		printf("%p \n", src);
		printf("%p \n", dest);
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}

*/
/*����ü�� ���ڷ� �����ϱ� */

/*

#include <stdio.h>
struct TEST {
	int age;
	int gender;
	char name[20];
};
int set_human(struct TEST *a, int old, int sex, const char *name);
char copy_str(char* dest, const char* src);
int main() {
	struct TEST human;
	struct TEST* pt = &human;

	set_human(pt, 10, 1, "Lee");
	printf("AGE : %d // Gender : %d // Name : %s \n", pt->age, pt->gender, pt->name);
	return 0;
}
int set_human(struct TEST *a, int old, int sex, const char *name) {
	a->age = old;
	a->gender = sex;
	copy_str(a->name, name);
	
	return 0;
}

char copy_str(char* dest, const char* src)
{
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;

}
*/

/*

#include <stdio.h>

int print_num(int *num);

struct BigNum {
	int i_digit[100];   // ���� �κ�
	int d_digit[100];   // �Ҽ� �κ�
	int i_total_digit;  // ��ü ���ǰ� �ִ� �����κ� �ڸ���
	int d_total_digit;  // ��ü ���ǰ� �ִ� �Ҽ��κ� �ڸ���
	char sign;  // ��ȣ, 0 �̸� ���, 1 �̸� ����. 0 �� ����� �����Ѵ�.
};

int main_str()
{
	struct BigNum num1;
	struct BigNum num2;
	printf("1 ���� �Է� :");
	scanf("%s", num1.i_digit);
	printf("1 �Ҽ� �Է� :");
	scanf("%s", num1.d_digit);

	/*
	printf("2 ���� �Է� :");
	scanf("%s", num2.i_digit);
	printf("2 �Ҽ� �Է� :");
	scanf("%s", num2.d_digit);
	

	print_num(num1.i_digit);

	return 0;
}

int print_num(int* num)
{
	while (*num)
	{
		printf("%d", *num);
		num++;
	}
	
}/* ����ü 
#include <stdio.h>
union A {
	int i;
	char j;
};
int main() {
	union A a;
	a.i = 0x12345678;
	printf("%x", a.j);
	return 0;
}

*/

/* �������� ���� 
#include <stdio.h>
enum { RED, BLUE, WHITE, BLACK };
int main_struct() {
	int palette = RED;
	switch (palette) {
	case RED:
		printf("palette : RED \n");
		break;
	case BLUE:
		printf("palette : BLUE \n");
		break;

	case WHITE:
		printf("palette : WHITE \n");
		break;
	case BLACK:
		printf("palette : BLACK \n");
		break;
	}
}
*/