//입력한 정수를 출력하고 합, 평균을 계산
//0 입력 시 결과물 출력
/*
#include <stdio.h>

int main(void) {
	int count = 0;
	int sum = 0;
	int i = 0;
	double mean = 0;

	printf("input : ");
	scanf("%d", &i);

	while (i != 0) {
		count++;
		sum += i;
		printf("input : ");
		scanf("%d", &i);
	}

	mean = sum / count;
	printf("**** result ****\n");
	printf("count = %d\nsum = %d\nmean = %.1f\n", count, sum, mean);

	return 0;
}
*/

//소수 판단
//1을 제외한 sqrt(n)보다 작거나 같은 정수로 나누어짐.
/*
#include <stdio.h>
#include <math.h>

int main(void) {
	int n, i, check;
	int text = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	i = sqrt(n);
	if(i > sqrt(n)) --i;

	while (i > 1) {
		check = n % i;
		--i;
		if (check != 0) continue;
		else{
			printf("%d는 소수가 아닙니다.\n", n);
			text = 1;
		}
		break;
	}

	if (text == 0) printf("%d는 소수입니다\n", n);

	return 0;
}
*/

//사용자로부터 n을 입력받고, n줄인 삼각형을 출력함.
/*
#include <stdio.h>

int main(void) {
	int i, j, number;
	printf("정수를 입력하세요 : ");
	scanf("%d", &number);

	for (i = 0; i < number; i++) {
		for (j = 0; j <= number - 1 - i; j++) {
			printf(" ");
		}
		//띄어쓰기 생성 (* 1개 = 띄어쓰기 1개)

		for (j = 1; j <= (2 * i + 1); j++) {
			printf("*");
		}
		//* 생성

		printf("\n");
	}
	return 0;
}
*/

//전치 행렬 만들기
/*
#include <stdio.h>

int main(void) {
	int mtx[3][3], i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d행 %d열의 원소: ", i+1, j+1);
			scanf("%d", &mtx[i][j]);
		}
	}

	printf("\n입력함수: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", mtx[i][j]);
		}
		printf("\n");
	}

	printf("출력함수: \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", mtx[j][i]);
		}
		printf("\n");
	}
	return 0;
}
*/

//대문자를 찾아 소문자로 바꾸기
/*
#include <stdio.h>

int main(void) {
	char input[1000];
	int i, count = 0;

	printf("문장 입력: ");
	gets(input);
	//입력하는 문자 수가 100개를 넘어가면 오류 발생

	for (i = 0; i < 100; i++) {
		if ((input[i] >= 65) && (input[i] <= 90)) {
			input[i] += 32;
			count++;
		}
	}
	
	printf("바뀐 문장: %s", input);
	printf("\n바뀐 문자 수: %d", count);

	return 0;
}
*/

//에라토스테네스의 체 (1부터 n까지의 소수 구하기)
/*
#include <stdio.h>

int main(void) {
	int a, i, j;

	printf("자연수를 입력하세요: ");
	scanf("%d", & a);

	int M[100] = { 0 };

	for (i = 1; i <= a; i++) {
		M[i] = i;
	}
	
	//1이 소수로 나타나지 않도록 함.
	M[1] = 0;

	for (i = 1; i <= a; i++) {
		if (M[i] != 0) {
			for (j = 2; j * i <= a; j++) {
				M[j * i] = 0;
			}
		}
	}

	for (i = 1; i <= a; i++) {
		if (M[i] != 0) printf("%d ", M[i]);
	}

	return 0;
}
*/

//5*5 배열 변환하기
/*
#include <stdio.h>

int main(void) {
	int i, j;
	int A[5][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25} };
	int* B[5][5], * C[5][5];
	//A가 첫번째 창, B가 두번째 창, C가 세번째 창

	printf("첫번째 창\n\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			B[i][j] = A[j][i];
		}
	}

	printf("\n두번째 창\n\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", *(*(B + i) + j));
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++) {
		if (i%2 == 0) {
			for (j = 0; j < 5; j++) {
				C[i][j] = A[i][j];
			}
		}
		else {
			for (j = 0; j < 5; j++) {
				C[i][j] = A[i][(4-j)];
			}
		}
	}

		printf("\n세번째 창\n\n");
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				printf("% 4d", *(*(C + i) + j));
			}
			printf("\n");
		}

		return 0;
}
*/

//끝말잇기 프로그램
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

print_str(char** ps) {
	while (*ps != NULL) {
		printf("%s\n", *ps);
		ps++;
	}
}

int flowCheck(char* word[101], char* inventory, int count) {
	char last, first;
	int size = 0;

	last = word[count - 1][strlen(word[count - 1]) - 1];
	first = inventory[0];
	if (last == first) return 0;
	else return 1;
}

int main(void) {
	char inventory[100];
	char* word[101] = { 0 };
	int i, j, count=0, doublecheck=0;

	printf("1번째 단어를 입력하세요.: ");
	gets(inventory);
	if (strcmp(inventory, "end") == 0) return 0;
	word[0] = (char*)malloc(strlen(word) + 1);
	strcpy(word[0], inventory);
	count++;

	for (i = 1; i < 100; i++) {
		printf("%d번째 단어를 입력하세요.: ", i + 1);
		gets(inventory);

		if (strcmp(inventory, "end") == 0) break;
		if (flowCheck(word, inventory, count)) continue;

		for (j = 0; word[j] != NULL; j++) {
			if (strcmp(inventory, word[j]) == 0) {
				doublecheck = 1;
				break;
			}
		}

		if (doublecheck == 0) {
			word[count] = (char*)malloc(strlen(word) + 1);
			strcpy(word[count], inventory);
			count++;
		}
	}

	print_str(word);

	for (i = 0; word[i]!=NULL; i++) {
		free(*word[i]);
	}
	return 0;
}
*/

//1~45 사이의 난수가 중복되지 않게 출력하기
/*
#include <stdio.h>
#include <stdlib.h>
#define randomize() srand((unsigned)time(NULL));
#define random(n) (rand() % (n))
#define MAX 32676

int main(void) {
	int a[6], i,j;

	randomize();

	for (i = 0; i < 6; i++) {
		a[i]= (rand() % 45) + 1;
		for (j = 0; j < i ; j++) {
			if (a[i] == a[j]) {
				i--;
				break;
			}
		}
	}

	for (i = 0; i < 6; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}
*/

// 이름, 학번, 평점, 학과를 입력받을 수 있는 구조체 정의 및 동적 메모리 할당
/*
#include <stdio.h>

struct student {
	char name[100], department[100];
	int number;
	double score;
};

void print_student(struct student* p, int total_number);

int main(void) {
	int i, total_number, std_number;
	double std_score;
	char std_name[100], std_department[100];
	struct student* p;

	printf("총 학생 수를 입력하세요: ");
	scanf("%d", &total_number);
	p = (struct student*)malloc(total_number * sizeof(struct student));
	
	if (p == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	for (i = 0; i < total_number; i++) {
		printf("이름을 입력하세요: ");
		scanf("%s", (p + i)->name);

		printf("학번을 입력하세요(ex.202114526): ");
		scanf("%d", &((p + i)->number));

		printf("학점을 입력하세요: ");
		scanf("%lf", &((p + i)->score));

		printf("학과를 입력하세요: ");
		scanf("%s", (p + i)->department);
	}

	print_student(p, total_number);
	free(p);
	return 0;
}

void print_student(struct student* p, int total_number) {
	int i;
	for (i = 0; i < total_number; i++) {
		printf("이름: %s\n", (p + i)->name);
		printf("학번: %d\n", (p + i)->number);
		printf("학점: %lf\n", (p + i)->score);
		printf("학과: %s\n", (p + i)->department);
	}
}
*/
