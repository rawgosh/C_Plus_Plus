#include <iostream>

class Geometry
{
    public:
        double area;
        double volume;
};

class Cube : public Geometry
{
    public:
        double side;
    Cube(double side) //constructor
    {
        this -> side = side;
        this -> area = side * side;
        this -> volume = side * side * side;
    }
};

class Sphere : public Geometry
{
    public:
        double radius;
    Sphere(double radius)
    {
        this -> radius = radius;
        this -> area = 4 * 3.14 * radius * radius;
        this -> volume = (4 / 3) * 3.14 * radius * radius * radius;
    }
};

int main()
{
    Cube cube(30);
    Sphere sphere(30);

    std::cout << "Area of cube :" << cube.area << std::endl;
    std::cout << "Volume of sphere :" << sphere.volume << std::endl;

    return 0;
}