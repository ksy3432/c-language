#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000];
    int sum = 0;
    
	scanf("%s %s", &a, &b);
	sum = strlen(a) + strlen(b);
    
	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < strlen(b); j++) {
			if (a[i] == b[j]) {
				a[i] = -1;	
                b[j] = -2;
				sum -= 2;
			}
		}
	}
	printf("%d", sum);
}