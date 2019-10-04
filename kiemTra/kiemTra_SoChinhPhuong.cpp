#include <iostream>
#include <math.h>
using namespace std;
  
int main()
{
    int n;
    cout<<"Nhap n:";
    cin>>n;
    if(sqrt(n)*sqrt(n)==n) 
		cout<<"Day la so chinh phuong."<<endl;
    else 
		cout<<"Khong phai la so chinh phuong"<<endl;
system("pause");
}