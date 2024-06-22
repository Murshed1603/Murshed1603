#include<bits/stdc++.h>
using namespace std;

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main(void)
{
    int num1, num2;

    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    cout<<"Before swapping the first number is : "<<num1<< " and second number is : "<<num2<<endl;

    Swap(num1, num2);

    cout<<"After swapping the first number is : "<<num1<< " and second number is : "<<num2<<endl;

    return 0;
}
