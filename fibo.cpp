#include<iostream>
using namespace std;

int f(int n)
{
    // base case
    if(n<= 1)
    {
        return n;
    }
    return f(n-1) + f(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}