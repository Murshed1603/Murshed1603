#include <bits/stdc++.h>
using namespace std;

int sumOfList(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main(void)
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int result = sumOfList(A, n);
    cout << "Sum of the list: " << result << endl;

    return 0;
}
