#include <stdio.h>
#include <string.h>


int main() {
	char s[100];
	scanf("%s", s);
	char c;
	scanf("%*c%c", &c);

	int count = 0;
	int len = strlen(s);
	for(int i = 0; i < len; i++) {
		if(s[i] == c) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
