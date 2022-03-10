#include <cmath>
#include <iostream>

class Shape {
 public:
 
  virtual double area() const = 0;
};

class Rectangle : public Shape {
 public:

  Rectangle(double width, double height)
    : width{width}, height{height} {
  }


  double area() const override {
    return width * height;
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

  
  double area() const override {
    return side * side;
  }

 private:

  double side;
};

class Circle : public Shape {
 public:
  
  Circle(double radius)
    : radius{radius} {
  }


  double area() const override {
    return M_PI * radius * radius;
  }

 private:

  double radius;
};

void printArea(const Shape& shape) {
  std::cout << shape.area() << "\n";
}

int main() {
  Rectangle r1{ 3.0, 5.0 };
  Square s1{ 4.0 };

  Circle c1{ 10.0 };

  printArea(r1);
  printArea(s1);
  printArea(c1);

  return 0;
}