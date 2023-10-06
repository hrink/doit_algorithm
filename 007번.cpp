#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());

	int count = 0;
	int i = 0;
	int j = n - 1;

	while (i < j) {
		if (a[i] + a[j] == m) {
			count++;
			i++;
			j--;
		}
		else if (a[i] + a[j] < m) {
			i++;
		}
		else {
			j--;
		}
	}
	cout << count << '\n';
}
