////Lab6_c.cpp
//#include "iostream"
//using namespace std;
////khai bao ham nhap so nguyen
//void nhap_SoNguyen(int &n);
////khai bao ham tim nghiem cua phuong trinh ax+b=0
//int tim_Nghiem_PTBacNhat(int a, int b, float &t);
//void main()
//{
//	int a,b;
//	cout<<"\nNhap gia tri a : "<<endl;
//	nhap_SoNguyen(a);
//	cout<<"\nNhap gia tri b : "<<endl;
//	nhap_SoNguyen(b);
//	float x;
//	int k=tim_Nghiem_PTBacNhat(a,b,x);
//	if(k==-1)
//		cout<<"\nPhuong trinh vo nghiem!";
//	else if(k==0)
//		cout<<"\nPhuong trinh co vo so nghiem!";
//	else//k=1
//		cout<<"\nPhuong trinh co nghiem duy nhat x = "<<x<<endl;
//	system("pause");
//}
//void nhap_SoNguyen(int &n)
//{
//	cout<<"\nNhap so nguyen..";
//	cin>>n;
//}
///*
//	Ham tra ve:
//	-1: phuong trinh vo nghiem
//	0: phuong trinh vo so nghiem
//	1: phuong trinh co nghiem x=-b/a, t giu nghiem cua pt
//*/
//int tim_Nghiem_PTBacNhat(int a, int b, float &t)
//{
//	if(a==0)
//	{
//		if(b==0)
//			return 0;
//		else
//			return -1;
//	}
//	else
//	{
//		t=(float)-b/a;
//		return 1;
//	}
//}