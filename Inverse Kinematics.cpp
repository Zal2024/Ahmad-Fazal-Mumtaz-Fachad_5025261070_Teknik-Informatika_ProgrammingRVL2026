#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double l1 = 10, l2 = 5, t1 = 30, t2 = 10;
    double x, y;
     

    t1 = (t1 * 3.14) / 180;
    t2 = (t2 * 3.14) / 180;
    

    x = l1 * cos(t1) + l2 * cos(t1 + t2);
    y = l1 * sin(t1) + l2 * sin(t1 + t2);
    cout << "X: " << x << " Y: " << y << endl;
}