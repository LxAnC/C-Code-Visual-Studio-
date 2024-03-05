#include <iostream>
using namespace std;

int f, sum[505];

int main() {
	int n; cin >> n;
	for (int i = 1; i <= n / 2; i++) {
		f = sum[i / 2] + 1;
		sum[i] = f + sum[i - 1];
	}
	cout << sum[n / 2] + 1;
}