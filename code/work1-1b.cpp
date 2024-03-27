#include<iostream>
using namespace std;
int main() {
	int n = 10;//问题规模
	int* sum;
	sum = new int[n];
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
	int** b;
	b = new int* [n];
	for (int i = 0; i < n; i++) {
		b[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = i + j;
		}
	}
	for (int i = 0; i < n; i++) {
		sum[i] = 0;
	}
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			sum[i] += b[j][i] * a[j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << sum[i] << endl;
	}
	delete[]a;
	delete[]sum;
	for (int i = 0; i < n; i++) {
		delete[]b[i];
	}
	delete[]b;
	return 0;
}
