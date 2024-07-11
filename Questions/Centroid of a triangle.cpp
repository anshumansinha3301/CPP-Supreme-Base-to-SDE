#include <iostream>
using namespace std;
 
int main() {
    double x1, y1, x2, y2, x3, y3, x_centroid, y_centroid;
    cout << "Enter coordinates of the first vertex (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of the second vertex (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of the third vertex (x3 y3): ";
    cin >> x3 >> y3;
    x_centroid = (x1 + x2 + x3) / 3;
    y_centroid = (y1 + y2 + y3) / 3;
    cout << "Centroid of the triangle: (" << x_centroid << ", " << y_centroid << ")" << endl;
    return 0;
}
