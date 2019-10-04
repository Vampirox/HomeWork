//viet ham dem cac phan tu am, phan tu duong trong ma tran
#include<iostream>
#include<time.h>
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "\nPhan tu thu " << i << ": ";
		cin >> a[i];
	}
}

void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i<n; i++)
		a[i] = rand() % 100 - rand() % 100;
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i<n; i++)
		cout << a[i] << "\t";
}

void DemAmDemDuong(int a[], int n)
{
	int  DemAm = 0, DemDuong = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i]<0)
			DemAm = DemAm + 1;
		else
			DemDuong = DemDuong + 1;
	}
	cout << "\nSo phan tu am co trong mang: " << DemAm;
	cout << "\nSo phan tu duong co trong mang: " << DemDuong;
}

void main()
{
	int a[100], n, x;

	cout << "So luong phan tu thuc: "; cin >> n;
	//NhapMang(a,n);

	MangNgauNhien(a, n);

	XuatMang(a, n);

	DemAmDemDuong(a, n);
	cout << endl;
	system("pause");
}