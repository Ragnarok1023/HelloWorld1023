#include <iostream>
using namespace std;
int main()
{
    int n, i, count=0;
    cout<<"enter a number";
    cin>>n;

    for(i=2, i<n, i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count==0)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Numbe is not prime";
        return ;
    }
}
