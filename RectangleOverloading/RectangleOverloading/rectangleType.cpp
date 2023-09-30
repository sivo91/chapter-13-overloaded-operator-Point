

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
        return Point(x + other.x, y + other.y);
    }


    bool operator == (const Point& other) const { 
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

    Point sum = p1 + p2;

    cout << "p1: ";
    p1.display();

    cout << "p2: ";
    p2.display();

    cout << "p1 + p2: ";
    sum.display();
    
    try
    {

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

Enter 2 values for first Point class: 15 20

Enter 2 values for Second Point class: 15 20

p1: (15, 20)
p2: (15, 20)
p1 + p2: (30, 40)
p1 and p2 are the same point.

*/