#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int count = 1;
	int startIndex = 1;
	int endIndex = 1;
	int sum = 1;

	while (endIndex != n) {
		if (sum == n) {
			count++;
			endIndex++;
			sum += endIndex;
		}
		else if (sum < n) {
			endIndex++;
			sum += endIndex;
		}
		else {
			sum -= startIndex;
			startIndex++;
		}
	}
	cout << count << '\n';
}
