#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x;
	cin >> n >> x;
	string s;
	cin >> s;
	int cnt=x;
	for(char c : s) {
		if(c=='o')
			cnt++;
		else
			cnt=max(0, cnt-1);
	}
	cout << cnt << "\n";
}
