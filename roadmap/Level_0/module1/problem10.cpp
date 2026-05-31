//Khoang cach
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double x, y, x2, y2;
int main() {
    cin>>x>>y>>x2>>y2;
    double result = sqrt(pow((x2 - x),2) + pow((y2 - y),2));
    cout<<fixed<<setprecision(2)<<result;
    return 0;
}