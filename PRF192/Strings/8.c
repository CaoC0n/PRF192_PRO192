#include <stdio.h>
#include <string.h>


int main() {
	char s[100] = "Codelearn";
	printf("%s\n", s);
	int len = strlen(s);
	for(int i = 0; i < len; i++) {
		if(s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
	printf("%s", s);
	return 0;
}
