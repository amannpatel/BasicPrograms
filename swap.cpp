// Write a function using reference variables as arguments to swap the values of a pair of integers.

#include<iostream>
#include<iomanip>
using namespace std;

void swap_func(int &a, int &b)
{
    cout<<"Before swapping"<<endl<<"a= "<<a<<endl<<"b= "<<b<<endl<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping"<<endl<<"a= "<<a<<endl<<"b= "<<b<<endl<<endl;
}

int main()
{
    
    int x,y;
    cout<<"Enter two integer values: "<<endl;
    cin>>x>>y;
    swap_func(x,y);
    return 0;
}
