#include <iostream>

class Shape {
};

class Rectangle : public Shape {
 public:
r
  Rectangle(double width, double height)
    : width{width}, height{height} {
  }

 private:

  double width;
  double height;
};

class Square : public Shape {
 public:

  Square(double side)
    : side{side} {
  }

 private:

  double side;
};

class Circle : public Shape {
 public:

  Circle(double radius)
    : radius{radius} {
  }

 private:

  double radius;
};

int main() {
  Rectangle r1{ 3.0, 5.0 };
  Square s1{ 4.0 };

  Circle c1{ 10.0 };

  // printArea(r1);
  // printArea(s1);
  // printArea(c1);

  return 0;
}