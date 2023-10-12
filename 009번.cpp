#include <bits/stdc++.h>
using namespace std;

int acgt[4];
int check[4];
int cnt = 0;

void add(char c) {
	if (c == 'A') {
		check[0]++;
		if (check[0] == acgt[0]) cnt++;
	}
	else if (c == 'C') {
		check[1]++;
		if (check[1] == acgt[1]) cnt++;
	}
	else if (c == 'G') {
		check[2]++;
		if (check[2] == acgt[2]) cnt++;
	}
	else if (c == 'T') {
		check[3]++;
		if (check[3] == acgt[3]) cnt++;
	}
}

void remove(char c) {
	if (c == 'A') {
		if (check[0] == acgt[0]) cnt--;
		check[0]--;
	}
	else if (c == 'C') {
		if (check[1] == acgt[1]) cnt--;
		check[1]--;
	}
	else if (c == 'G') {
		if (check[2] == acgt[2]) cnt--;
		check[2]--;
	}
	else if (c == 'T') {
		if (check[3] == acgt[3]) cnt--;
		check[3]--;
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ans = 0;
	string str;
	int s, p;
	cin >> s >> p;

	cin >> str;
	for (int i = 0; i < 4; i++) {
		cin >> acgt[i];
		if (acgt[i] == 0) cnt++;
	}

	for (int i = 0; i < p; i++) {
		add(str[i]);
	}
	if (cnt == 4) ans++;

	for (int i = p; i < s; i++) {
		int j = i - p;
		add(str[i]);
		remove(str[j]);
		if (cnt == 4) ans++;
	}
	cout << ans << '\n';
}
