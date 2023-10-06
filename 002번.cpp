#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n=0, sum = 0, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (max < num) max = num;
		sum += num;
	}
	double result = sum * 100.0 / max / n;
	cout << result;
}
