#include <iostream>
#include <vector>
#include<cmath>
#include<map>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n";
typedef long long ll;
using namespace std;
 
 
 
int main() {
    optimize();
    double a, b, c, d;
    cin >> a >> b >> c >> d;
 
    double res = 0;
    double smallR = a / b;
    double missedByTheTwo = (1 - a / b) * (1 - c / d);
 
    for (int i = 0; i < 100000; i++) {
        res += smallR;
        smallR *= missedByTheTwo;
    }
 
    printf("%.12f\n", res);
    return 0;
}