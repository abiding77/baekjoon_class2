#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	int answer = 0;
	int card[101] = {};
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if ((card[i] + card[j] + card[k] <= M) && (card[i] + card[j] + card[k] > answer)) {
					answer = card[i] + card[j] + card[k];
				}
			}
		}
	}
	cout << answer << '\n';
}