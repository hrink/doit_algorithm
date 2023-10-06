#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll s[1000005];
ll c[1005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll ans = 0;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int num, remainder;
		cin >> num;
		s[i] = s[i - 1] + num;
		remainder = s[i] % m;
		c[remainder]++;
		if (remainder == 0) ans++;
	}
	for (int i = 0; i < m; i++) {
		if (c[i] > 1) ans += c[i] * (c[i] - 1) / 2;
	}
	cout << ans << '\n';
}
