#include <bits/stdc++.h>
using namespace std;

int arr[1030][1030];
int s[1030][1030];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m=0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + arr[i][j];
		}

	for (int i = 0; i < m; i++) {
		int x1, y1, x2, y2, result;
		cin >> x1 >> y1 >> x2 >> y2;
		result = s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1];
		cout << result << '\n';
	}
}
