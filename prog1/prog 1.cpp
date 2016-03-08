#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
         int a[100];
         int sum=0;
         ifstream Data("D:\\数据.txt");
         for(int i=0;Data>>a[i],i<100;i++)
         {
                   sum+=a[i];
         }
         cout<<"100个元素和为:"<<sum<<endl;
 
         return 0;
}