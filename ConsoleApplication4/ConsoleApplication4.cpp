
#include <iostream>
using namespace std;

int main()
{
    double a1, a2, v, L,S, K,P, t1,t2, t;
    cin >> L >> a1 >> a2 >> v >> t;
    K = (v * v) / (2*a2);
    S = (v * v) / (2 * a1);
    P = L - K - S;
    double tt;
    tt = P / v;

    if (tt > t)
    {
        t = tt;
    }
    t1 = (v) / a1;
    t2 = (v) / a2;
    double t3;
    
    t3 = t1 + t + t2;

    cout << t3;
 
}

