#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.1416;

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx*dx + dy*dy);
}

double radius(double cx, double cy, double px, double py) {
    return distance(cx, cy, px, py);
}

double circumference(double r) {
    return 2.0 * PI * r;
}

double area(double r) {
    return PI * r * r;
}

int main() {
    double cx, cy;  
    double px, py;  

    std::cout << "Enter center coordinates (x y): ";
    std::cin >> cx >> cy;

    std::cout << "Enter a point on the circle (x y): ";
    std::cin >> px >> py;

    double r = radius(cx, cy, px, py);
    double d = 2.0 * r;
    double c = circumference(r);
    double a = area(r);

    std::cout << "Radius = " << r << std::endl;
    std::cout << "Diameter = " << d << std::endl;
    std::cout << "Circumference = " << c << std::endl;
    std::cout << "Area = " << a << std::endl;

    return 0;
}
