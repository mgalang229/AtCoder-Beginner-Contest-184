#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	string s;
	cin >> s;
	int cnt = x;
	for (char c : s) {
		if (c == 'o') {
			cnt++;
		} else {
			cnt = max(0, cnt - 1);
		}
	}
	cout << cnt << '\n';
	return 0;	
}
