#include<iostream>
#include<fstream>
using namespace std;

void Arraysum (int n)
{
int *a;
a=new int[n];
int sum=0;
ifstream DATA("D:\\����.txt");
for(int i=0;DATA>>a[i],i<n;i++)
sum+=a[i];
cout<<sum;
delete []a;
}
int main (void)
{

int n=0;
cout<<"�������鳤��";
cin>>n;
Arraysum(n);
return 0;
}

