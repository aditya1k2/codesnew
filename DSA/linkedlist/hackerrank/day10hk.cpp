#include <iostream>
using namespace std;
int main()
{
int a[10], n, i,max=1,count=1;
cin>>n;
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
for(i=i;i>0;i--)
{
if(a[i]==1 && a[i-1]==1)
{
count++;
if(max<count)
max=count;
}

else
count=1;
}
cout<<max<<endl;
}

/*110111
110111011
11110111011*/
