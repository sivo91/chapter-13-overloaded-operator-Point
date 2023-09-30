

#include <iostream>

using namespace std;

class Point {

public:
    // constructor s default value
    Point() : x(0), y(0) { } 
    // init constructor 
    Point(int x, int y) : x(x), y(y) {}

    //  Point& = line 45 p1 and p2 new obj
    Point operator + (const Point& other) const {
        // x + druhy obj.x,  y + drujy obj.y   === 15 + 15 a 20 + 20
        return Point(x + other.x, y + other.y);
    }


    bool operator == (const Point& other) const { 
        // This is the overloaded + operator. This allows us
        // to add two Point objects together. The function takes
        // in another Point object as a reference and returns a 
        // new Point whose x and y values are the sum of
        // the x and y values of the current object and the passed
        // object, respectively.
        return (x == other.x) && (y == other.y);
    }

    void display() const { 
        cout << "(" << x << ", " << y << ")" << endl;
    }

private:
    int x, y;
};

int main() {
    int x, y;
    int a, b;

    cout << "Enter 2 values for first Point class: ";
    cin >> x >> y;
    cout << endl << endl;

    cout << "Enter 2 values for Second Point class: ";
    cin >> a >> b;
    cout << endl << endl;


    Point p1(x, y);  
    Point p2(a, b);

    // sum = 3rd obj 
    Point sum = p1 + p2;

    // print obj1 values x and y
    cout << "p1: ";
    p1.display();

    // print obj2 values x and y
    cout << "p2: ";
    p2.display();

    // print obj3 sum values x and y
    cout << "p1 + p2: ";
    sum.display();
    
    try
    {
        // operator == give me true
        if (p1 == p2) {
            cout << "p1 and p2 are the same point." << endl;
        }
        else {
            cout << "p1 and p2 are different points." << endl;
        }

       
    }
    catch (string)
    {
        throw string("Something went wrong");
    }

    return 0;
}


/*

Enter 2 values for first Point class: 4 5

Enter 2 values for Second Point class: 5 6


p1.x !== p2.x === false

p1: (4, 5)
p2: (5, 6)
p1 + p2: (9, 11)
p1 and p2 are different points.

*************
p1.x == p2.x  === true

p1: (2, 2)
p2: (2, 2)
p1 + p2: (4, 4)
p1 and p2 are the same point.

*/
