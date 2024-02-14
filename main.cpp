// CISC 125 - Inheritance and Polymorphism
#include <iomanip>
#include <iostream>
#include <sstream>
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
    string str () const; // Returns string describing the shape
    string type () const { return "Rectangle"; } // Return string type of shape
    double width () const { return wid; } // Width of the rectangle
};

int main () {
    Rectangle r1;
    Rectangle r2(3.5, 1.2);
    cout << r1.str() << endl;
    cout << r2.str() << endl;
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

string Rectangle::str () const {
    // Create output string stream for formatting
    ostringstream os;
    // One decimal place for doubles
    os << fixed << setprecision(1);
    // Generate string value
    os << type() << " " << length() << "x" << width();
    // Return the string
    return os.str();
}
