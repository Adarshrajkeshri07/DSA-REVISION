#include <iostream>
using namespace std;
int main()
{
    double x;
    cout << "enter the value of x : ";
    cin >> x;
    long long pow;
    double ans = 1;
    cout << " enter the value of power : ";
    cin >> pow;
    while (pow > 0)
    {
        if (pow % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        pow /= 2;
    }
    cout << ans;
}