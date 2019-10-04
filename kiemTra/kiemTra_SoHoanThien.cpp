//Lab3_c.cpp
#include <iostream>
using namespace std;
void main()
{
	int n;
	cout<<"\nNhap so nguyen n>=2:";
	cin>>n;
	//kiem tra dieu kien de luon nhap duoc so nguyen>=2
	while (n<2)//chu y bieu thuc dieu kien
	{
		cout<<"\n Nhap so nguyen>=2: ";
		cin>>n;
	}
	//kiem tra xem so nguyen do co la so hoan thien ko?
	int sum=0;
	//tinh tong cac uoc so cua n
	for(int i=1;i<n;i++)
		if(n%i==0)//n chia het cho i
			sum+=i;
	if(sum==n)
		cout<<n<<" la so hoan thien!"<<endl;
	else
		cout<<n<<" khong la so hoan thien!"<<endl;
	system("pause");
}