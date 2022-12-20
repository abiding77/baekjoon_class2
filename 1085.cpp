#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, y, w, h;
	int tmp, tmp2;
	int answer = 0;
	cin >> x >> y >> w >> h;
	tmp = min(x, y);
	tmp2 = min(w - x, h - y);
	answer = min(tmp, tmp2);
	cout << answer << '\n';
}