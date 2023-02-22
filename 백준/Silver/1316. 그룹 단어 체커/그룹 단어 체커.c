#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int alphabet[26];
	char s[101];
	int result = 0;
	int k, pass;

	while(n--){
		scanf("%s", &s);

		for (int i = 0; i < 26; i++) {
			alphabet[i] = 0;
		}

		k = 1;
		pass = 1;

		while (s[k]) {
			if (alphabet[s[k] - 'a']) {
				pass = 0;
				break;
			}

			if (s[k] != s[k - 1]) {
				++alphabet[s[k - 1] - 'a'];
			}
			++k;
		}

		result += pass;
	}

	printf("%d\n", result);
	return 0;
}