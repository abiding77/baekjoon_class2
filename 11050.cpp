#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n) {
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, K;
	cin >> N >> K;
	int sum = 0;
	sum = factorial(N) / (factorial(K) * factorial(N - K));
	cout << sum << '\n';
}