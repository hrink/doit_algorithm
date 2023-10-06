#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<ll> a(n, 0);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());

	int count = 0;

	for (int k = 0; k < n; k++) {
		ll sum = a[k];
		int i = 0;
		int j = n - 1;
		while (i < j) {
			if (a[i] + a[j] == sum) {
				if (i != k && j != k) {
					count++;
					break;
				}
				else if (i == k) i++;
				else if (j == k) j--;
			}
			else if (a[i] + a[j] < sum) {
				i++;
			}
			else {
				j--;
			}
		}
	}
	cout << count << '\n';
}
