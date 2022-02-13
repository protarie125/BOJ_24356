#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t1, m1, t2, m2;
	cin >> t1 >> m1 >> t2 >> m2;

	auto minute = (t2 - t1) * 60;
	minute += m2 - m1;
	if (minute < 0) {
		minute += 24 * 60;
	}

	auto round = minute / 30;

	cout << minute << ' ' << round;

	return 0;
}