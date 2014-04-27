#include <stdio.h>

#define MAX 1000000
#define ASC(x) ((x) >= 'a' ? (x) - 'a': (x) - 'A')
#define CHR(n) (n + 'A')
char input[MAX];

int main() {
	int arr[26] = {0};
	int i, m1, m2, idx;
	char c, *p = input;
	scanf("%s", p);

	while (c = *p++)  {
		int idx = ASC(c);
		arr[idx]++;
	}

	m1 = m2 = 0;
	for(i = 0; i < 26; i++) {
		if (arr[i] >= m1) {
			m2 = m1;
			m1 = arr[i];
			idx = i;
		}
	}

	if (m1 == m2)
		printf("?\n");
	else
		printf("%c\n", CHR(idx));
	return 0;
}
