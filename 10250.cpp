#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int testcase;
	cin >> testcase;
	while (testcase--) {
		int H, W, N;
		int result = 0;
		cin >> H >> W >> N;
		if (N % H == 0) {
			result = H * 100 + (N / H);
		}
		else {
			result = (N % H) * 100 + (N / H) + 1;
		}
		cout << result << '\n';
	}
}