#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// it can be observed that only n = 1 and n = 2 will have a proper order
	if (n > 2) {
		for (int i = n; i > 0; i--) {
			cout << i << " ";
		}
	} else {
		cout << -1;
	}
	cout << '\n';
	return 0;
}
