#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int n;
    cin>>n;
    int size=1000,fact[size],carry=0,j=size-1;
    fact[size-1]=1;
    while(n>1)
    {
      int x;
      for(int k=size-1;k>=j;k--)
      {
        x=fact[k]*n+carry;
        fact[k]=x%10;
        carry=x/10;
      }
      while(carry>0)
      {
        fact[--j]=carry%10;
        carry=carry/10;
      }
      n--;
    }
    for(int k=j;k<=size-1;k++)
    {
      cout<<fact[k];
    }
    cout<<endl;
  }
  return 0;
}