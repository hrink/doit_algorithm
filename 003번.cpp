#include <bits/stdc++.h>
using namespace std;

int arr[100005] ;
int s[100005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m=0;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		s[i] = s[i - 1] + arr[i];
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << s[b] - s[a - 1] << '\n';
	}
}
