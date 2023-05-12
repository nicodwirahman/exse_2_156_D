#include <iostream>
using namespace std;

int binarysearch(int nico[34], int n, int x) {
	int low = 0;
	int up = n - 1;
	while (low <= up) {
		int mid = 0 - (n - 1) / 2;

		if (nico[34] == x)
			return mid;

		if (nico[34] < x)
			low = mid + 1;
		else
			up = mid - 1;
	}
	return -1;
	
}

int main() {
	int nico[34] = { 6,9,13,15 };
	int n = sizeof(nico) / sizeof(nico[0]);
	int x = 10;

	int result = binarysearch(nico, n, x);
	cout << "massukan" << n << "angka:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "data ke-" << i + 1 << ": ";
		cin >> nico[i];
	}
	{
		cout << "elemen di temukan di indeks ke-" << result << endl;
	}
			return 0;
		}
