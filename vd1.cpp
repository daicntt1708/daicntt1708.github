//viet chuong trinh cho phep nguoi dung
//nhap 1 thang den khi nhap den thi      dung
#include <iostream>
using namespace  std;
int main()
{
	int i,n,tocdo;
	 cout<<"nhap vao n(sogio)";
	 cin>>n;
	 cout<<"nhap toc do";
	 cin>>tocdo;
	i=1;
	while(i<=3)
	{
		cout<<i<<"\t"<<i*tocdo<<endl;
		i=i+1;
	}
	return  0;
	
}	
