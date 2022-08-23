/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// test case
#include <iostream>
using namespace std;

class Rectangle                 // The Class

{
private:                    // Access specifier
    double width;           // Attribute (double variable)
    double length;          // Attribute (double variable)


public:                         // Access specifier  and member functiions with setter and getter                 
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

// The public setWidth() method takes a parameter (w) and assigns it to the width attribute (width = w).
void Rectangle::setWidth(double w)
{
    width = w;
}

// Setter/mutator
void Rectangle::setLength(double len)
{
    length = len;
}
// The public getWidth() method returns the value of the private width attribute.
double Rectangle::getWidth() const
{
    return width;
}

// Getter/Accessor
double Rectangle::getLength() const

{
    return length;
}

// Getter
double Rectangle::getArea() const

{
    return width * length;
}


int main()
{
    Rectangle box; // Create an object of MyClass
    double rectwidth;
    double rectlength;

    cout << "This Program will calculate the area of a rectangle" << endl;
    cout << "What is the width" << endl;
    cin >> rectwidth;
    cout << "What is the length" << endl;
    cin >> rectlength;

    //store the w and length
    box.setWidth(rectwidth);
    box.setLength(rectlength);

    //   box.setWidth(8);  // set the value of the private attribute 8
    //   box.setLength(5); // set the value of the private attribute 5

       // call the getWidth() method on the object to return the values and Print attribute values
    cout << "Here is the rectangle data " << endl;
    cout << "width " << box.getWidth() << endl;
    cout << "length " << box.getLength() << endl;
    cout << "Area is  " << box.getArea() << endl;

    return 0;
}



