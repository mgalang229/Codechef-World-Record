#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double k1, k2, k3, v;
		cin >> k1 >> k2 >> k3 >> v;
		// multiply all the speed in 'k1'
		k1 *= k2;
		k1 *= k3;
		k1 *= v;
		auto RoundTwoDecimalPlaces = [&](double x) {
			double value = (int) (x * 100 + 0.5);
			return (double) value / 100;
		};
		// follow the formula, time = (distance / speed)
		// divide 100 (m) by 'k1' (m / s), and compare if it's STRICLY less than 9.58
		// also, don't forget to round the time two decimal places
		cout << (RoundTwoDecimalPlaces(100 / k1) < 9.58 ? "YES" : "NO") << '\n';
	}	
	return 0;
}
