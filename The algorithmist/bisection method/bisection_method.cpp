#include<bits/stdc++.h>
using namespace std;

double fval(double x){
    return pow(x, 3) - pow(x, 2) - x + 1;
}

int main(){
    double a = -1.2, b = -0.9, c;
    int n = 0;
    while(n <= 14){
        c = (a+b)/2;
        cout << "n = " << n << ": " << "\n";
        cout << "search in range: [ " << a << ", " << b << " ]" << "\n";
        cout << "c = " << c << " and f(c) = " << fval(c) << "\n";
        double product = fval(a) * fval(c);
        if(product < 0)
            b = c;
        else if(product > 0)
            a = c;
        else{
            cout << "Find Solution!\n r = " << c;
            break;
        }
        n++;
    }
    return 0;
}