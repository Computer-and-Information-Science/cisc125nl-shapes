// CISC 125 - Inheritance and Polymorphism
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// A class to represent a rectangle.
class Rectangle {
private:
    double len, wid; // The dimensions of a rectangle
public:
    Rectangle () : Rectangle(1, 1) { } // Default constructor
    Rectangle (double l, double w); // Constructor with initial values
    double area () const { return len * wid; } // Area of the rectangle
    double length () const { return len; } // Length of the rectangle
    double perimeter () const { return 2 * (len + wid); } // Perimeter of the rectangle
    void set (double l, double w); // Sets dimensions of the rectangle
    string type () const { return "Rectangle"; } // Return string type of shape
    double width () const { return wid; } // Width of the rectangle
};

void print_rectangle (const Rectangle& r);

int main () {
    Rectangle r1;
    Rectangle r2(3.5, 1.2);
    print_rectangle(r1);
    print_rectangle(r2);
}

Rectangle::Rectangle (double l, double w) {
    // Initialize private members with given values
    len = l;
    wid = w;
}

void Rectangle::set (double l, double w) {
    len = l;
    wid = w;
}

void print_rectangle (const Rectangle& r) {
    cout << "This " << r.type() << " has a length of " << r.length()
        << " and width of " << r.width() << endl;
}
