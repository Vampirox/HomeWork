//Ham dem cac phan tu la so nguyen ton trong ma tran
#include<iostream>
#include<math.h>
using namespace std;
bool check(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
int dem(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (check(a[i]) == true)
			count++;
	}
	return count;
}
void nhap(int a[], int n) {
	cout << "-----Nhap mang-----" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
}
int main() {
	int a[1000];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	cout << "So luong cac so nguyen to la: " << dem(a, n) << endl;
	system("pause");
}