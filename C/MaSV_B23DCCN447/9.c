#include <stdio.h>
long long max(long long a, long long b) {
	return (a > b) ? a : b;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		long long a[n+5], s = 0, tmp = -1000000000;
		for (int i = 0; i < n; i++) {
			scanf("%lld", &a[i]);
		}
		
		for (int i = 0; i < n; i++) {
			s = max(a[i], s + a[i]);
			tmp = max(s, tmp);
		}
		printf("%lld\n", tmp);
	}
}