#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

cout << fixed;
cout << "---------------------------" << endl; 
cout << "|" << setw(5) << "x" << " |"
    << setw(7) << "y" << " |" << endl; 
cout << "---------------------------" << endl;

x=xp;
while (x <= xk)
{
    A = x*x*sin(x/2);
    if (x<=-5)
        B = atan(exp(x));
    else
        if (x>0)
            B = log(abs(x))-x/5;
        else  
            B = 1+(pow(x,3)/4);
    y = A + B;
    cout << "|" << setw(7) << setprecision(2) << x
        << "    |" << setw(10) << setprecision(3) << y 
        << "    |" << endl;
    x += dx;    
}
cout << "---------------------------" << endl; 

return 0;
}
