#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	int a=0, e=0, i=0, o=0, u=0;
	int vs;
	printf("Enter string : ");
	scanf("%s", &s);
	printf("\n-------------------------\n");
	vs = strlen(s);
	for (int x = 0; x < vs; x++) {
		if (s[x] == 'a' || s[x] == 'A') {
			a = a + 1;
		}
		if (s[x] == 'e' || s[x] == 'E') {
			e = e + 1;
		}
		if (s[x] == 'i' || s[x] == 'I') {
			i = i + 1;
		}
		if (s[x] == 'o' || s[x] == 'O') {
			o = o + 1;
		}
		if (s[x] == 'u' || s[x] == 'U') {
			u = u + 1;
		}
	}
	printf("a = %d\n", a);
	printf("e = %d\n", e);
	printf("i = %d\n", i);
	printf("o = %d\n", o);
	printf("u = %d\n", u);
	return 0;
}