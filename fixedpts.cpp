#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

double func(double x)
{
    return exp(-x);
}

int main()
{
    double x, next, error;
    error = 1;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"x\tx(n+1)\tError\n";
    while (error > 0.0001)
    {
        next = func(x);
        error = abs((next - x) / next);
        cout<<x<<setprecision(4)<<"\t"<<next<<setprecision(4)<<"\t"<<error<<setprecision(4)<<endl;
        x = next;
    }
    cout<<"The root of the equation = "<<x<<setprecision(4);
}
