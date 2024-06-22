#include<bits/stdc++.h>
using namespace std;

void leftShift(int A[], int n, int k)
{
    for(int j=0;j<k;j++)
    {
        for(int i=1;i<n;i++)
        {
            A[i-1] = A[i];
        }
    }
    for(int i=n-k;i<n;i++)
    {
        A[i]=0;
    }
}
int main(void)
{
    int n,k;

    cout<<"Enter the number of elements : ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the number of elements to left shift : ";
    cin>>k;
    leftShift(A, n, k);
    cout<<"Array after left shift by "<<k<<" elements : ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}
