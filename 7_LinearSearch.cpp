#include<bits/stdc++.h>
using namespace std;

int linearSearch(int A[], int n, int item)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==item)
        {
            return i;
        }
    }
    return -1;
}
int main(void)
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int A[n];

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;++i)
    {
        cin>>A[i];
    }
    int item;
    cout<<"Enter the item to search for : ";
    cin>>item;

    int index = linearSearch(A, n ,item);
    if(index != -1)
    {
        cout<<"Item found at index "<<index<<endl;
    }
    else
    {
        cout<<"Item not found in the array"<<endl;
    }
    return 0;
}
