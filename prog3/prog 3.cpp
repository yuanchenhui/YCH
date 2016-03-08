#include<iostream>
#include<fstream>
using namespace std;

void Arraysum (int n,int e,int d)
{
	int *a;
	a=new int[n];
	int sum=0;
	ifstream DATA("D:\\数据.txt");
	for(int c=0;DATA>>a[c],c<n;c++)
		if(a[c]>=e&&d>=a[c])
			sum+=a[c];
		cout<<sum<<endl;
		delete []a;
}

int main (void)
{
	double e,d;
	cout<<"输入指定范围的最小值";
	cin>>e;
	cout<<"输入指定范围的最大值";
	cin>>d;
	int n=0;
	cout<<"输入数组长度";
	cin>>n;
	
	Arraysum(n,e,d);
	return 0;
}