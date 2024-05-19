#include<iostream>
using namespace std;
void reversearr(int n,int A[])
{
for(int i=0;i<n/2;i++)
{
    int temp=A[i];
    A[i]=A[n-i-1];
    A[n-i-1]=temp;
}
}
int main()
{
    int n,A[]={4,5,1,2};
    n=sizeof(A)/sizeof(A[0]);
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
     reversearr(n,A);
     cout<<endl;
      cout<<"Reverse array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}