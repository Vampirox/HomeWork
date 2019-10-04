////Viet ham dem cac phan tu chan, ham dem cac phan tu le trong mang.
//
//#include<iostream>
//#include<time.h>
//using namespace std;
//
//void NhapMang(int a[], int n)
//{
//	for (int i = 0; i<n; i++)
//	{
//		cout << "\nPhan tu thu " << i << ": ";
//		cin >> a[i];
//	}
//}
//
//void MangNgauNhien(int a[], int n)
//{
//	srand((unsigned)time(NULL));
//	for (int i = 0; i<n; i++)
//		a[i] = rand() % 100 - rand() % 100;
//}
//
//void XuatMang(int a[], int n)
//{
//	for (int i = 0; i<n; i++)
//		cout << a[i] << "\t";
//}
//
//void DemChanDemLe(int a[], int n)
//{
//	int  DemChan = 0, DemLe = 0;
//	for (int i = 0; i<n; i++)
//	{
//		if (a[i] % 2 != 0)
//			DemLe = DemLe + 1;
//		else
//			DemChan = DemChan + 1;
//	}
//	cout << "\nSo phan tu le co trong mang: " << DemLe;
//	cout << "\nSo phan tu chan co trong mang: " << DemChan;
//}
//
//void main()
//{
//	int a[100], n, x;
//
//	cout << "So luong phan tu thuc: "; cin >> n;
//	//NhapMang(a,n);
//
//	MangNgauNhien(a, n);
//
//	XuatMang(a, n);
//
//	DemChanDemLe(a, n);
//
//	cout << endl;
//	system("pause");
//}