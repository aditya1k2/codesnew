#include<iostream>
using namespace std;
int main()
{
  int a[2];
  a[2]={'1','2','3','4'};
  for(int i=0;i<sizeof(a);i++)
  cout<<a[i]<<endl;
  return 0;
}
