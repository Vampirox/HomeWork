//Lab8_b.cpp
#include "iostream"
using namespace std;
const int KTMT=10;
//khai bao cac ham con
void nhap_1SoNguyen(int &k);
void nhap_MaTran(int b[][KTMT], int m);
void xuat_MaTran(int b[][KTMT], int m);
int tong_DuongCheoPhu(int b[][KTMT], int m);
void xuat_BoiSo5(int b[][KTMT], int m);
int tong_SoLe(int b[][KTMT], int m);
void main()
{
	int a[KTMT][KTMT];
	//khai bao so dong , so cot ma tran
	int n;//m kich thuoc ma tran vuong
	cout<<"\nNhap kich thuoc ma tran :";
	nhap_1SoNguyen(n);
	cout<<"\nNhap ma tran :"<<endl;
	nhap_MaTran(a,n);
	cout<<"\nMa tran nhap vao la :"<<endl;
	xuat_MaTran(a,n);
	cout<<"\nTong cac phan tu tren duong cheo phu:";
	cout<<tong_DuongCheoPhu(a,n);
	cout<<"\nCac phan tu la boi so cua 5 la :"<<endl;
	xuat_BoiSo5(a,n);
	cout<<"\nTong cac so le co trong ma tran la : ";
	cout<<tong_SoLe(a,n)<<endl;
}
//viet dinh nghia cac ham con
void nhap_1SoNguyen(int &k)
{
	do{
		cout<<"\nNhap 1 so : ";
		cin>>k;
	}while(k<=0||k>KTMT);
}
void nhap_MaTran(int b[][KTMT], int m)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			cout<<"\nNhap PTu["<<i<<"]["<<j<<"]:";
			cin>>b[i][j];
		}
}
void xuat_MaTran(int b[][KTMT], int m)
{
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			cout<<b[i][j]<<"\t";
		cout<<endl;
	}
}
/*
	Phan tu thuoc duong cheo phu la phan tu
	co chi so dong + chi so cot = so dong ma tran -1
	vi du: matran a co 4 dong 4 cot thi cac phan tu phu la 
	a[0][3],a[1][2],a[2][1],a[4][0]
*/
int tong_DuongCheoPhu(int b[][KTMT], int m)
{
	int s=0;
	for(int i=0;i<m;i++)
		s+=b[i][m-1-i];
	return s;
}
void xuat_BoiSo5(int b[][KTMT], int m)
{
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			if(b[i][j]%5==0)
				cout<<b[i][j]<<"\t";
			else
				cout<<"*"<<"\t";
		cout<<endl;
	}
}
int tong_SoLe(int b[][KTMT], int m)
{
	int sum=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			if(b[i][j]%2==0)
				sum+=b[i][j];
	return sum;
}