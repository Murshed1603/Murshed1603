#include<bits/stdc++.h>
using namespace std;

void rightShift(int A[], int n, int k)
{
    for (int j = 0; j < k; ++j)
    {
        for (int i = n - 1; i > 0; --i)
        {
            A[i] = A[i - 1];
        }
        A[0] = 0;
    }
}

int main()
{
    int n, k;

    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    cout << "Enter the number of elements to right shift: ";
    cin >> k;

    rightShift(A, n, k);

    cout << "Array after right shift by " << k << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    cout <<endl;

    return 0;
}
