#include<iostream>
#include<fstream>
using namespace std;

void Arraysum (int n,int e,int d)
{
	int *a;
	a=new int[n];
	int sum=0;
	ifstream DATA("D:\\����.txt");
	for(int c=0;DATA>>a[c],c<n;c++)
		if(a[c]>=e&&d>=a[c])
			sum+=a[c];
		cout<<sum<<endl;
		delete []a;
}

int main (void)
{
	double e,d;
	cout<<"����ָ����Χ����Сֵ";
	cin>>e;
	cout<<"����ָ����Χ�����ֵ";
	cin>>d;
	int n=0;
	cout<<"�������鳤��";
	cin>>n;
	
	Arraysum(n,e,d);
	return 0;
}