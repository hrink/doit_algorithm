#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n=0, sum = 0;
	string s;
	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		sum += s[i] - '0';
	}
	cout << sum;
}
