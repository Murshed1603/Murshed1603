#include<bits/stdc++.h>
using namespace std;



void add(int a, int b)
{
    int sum = a+b;

    cout<<"The addition of the two integers is : "<<sum;


}
int main(void)
{
    int num1, num2;

    cout<<"Enter the first integer : ";
    cin>>num1;

    cout<<"Enter the second integer : ";
    cin>>num2;

    add(num1, num2);

    return 0;



}
