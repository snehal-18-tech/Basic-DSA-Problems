#include<iostream>
using namespace std;
void subarr(int n,int A[])
{
int total=0;
for(int i=0;i<n;i++)
{
    total+=A[i];
}
cout<<"Total sum of array is:"<<total<<endl;
int subarray[30];
int k=0;
for(int i=0;i<n;i++)
{
    if(A[i]>total)
    {
        subarray[k]=A[i];
          k++;
    }
}

}

int main()
{
    int n,A[]={-2,1,-3,4,-1,2,1,-5,4};
    n=sizeof(A)/sizeof(A[0]);
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
   subarr(n,A);
    return 0;
}