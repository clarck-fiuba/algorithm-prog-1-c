#include <stdio.h>
#include <stdbool.h>


void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a = 1;
	int b = 2;
	char x = 'a';
	char *p = &x;
	p++;
	printf(" %c\n", *p);

	// if (a == (int) 1.1)
	// 	printf(" true\n");
	// else
	// 	printf("false\n");

	// printf(" sizeof a: %lu\n", sizeof(char));
	// printf(" a: %d\n b: %d\n", a, b);
	return (0);
}