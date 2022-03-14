#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int n;
	cin >> n;
	vector<int> a(n);
	long long sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	// sum = total jars that all junior chef needs
	// we need to subtract n from the sum (which means
	// subtracting 1 value from each jar) and then adding an
	// extra jar (1) to fulfill the requirement for each dish
	// because after completing one (1) dish, this extra jar
	// will be used by the remaining junior chefs
	cout << sum - n + 1 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}

