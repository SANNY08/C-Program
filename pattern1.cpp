#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter number to print Star pattern :";
    cin>>n;
    for(i=n;i>0;i-- )
    {
      for(k=n;k>=i;k--)
      {
        cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
    return 0;

}

/* *****
    ****
     ***
      **
       *
*/