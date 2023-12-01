#include <iostream>
#include <cmath>
using namespace std ;
// 基类 Shape
class Shape 
{
public:
    virtual double getS() const = 0; // 构建虚函数，计算面积
    virtual double getC() const = 0; // 构建虚函数，计算周长
};

// Circle 派生类
class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getS () const override 
    {
        return M_PI * radius * radius; // 圆的面积公式 πr^2
    }

    double getC () const override 
    {
        return 2 * M_PI * radius; // 圆的周长公式 2πr
    }
};

// Rectangle 派生类
class Rectangle : public Shape 
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getS () const override 
    {
        return width * height; // 矩形的面积公式 宽 * 高
    }

    double getC () const override 
    {
        return 2 * (width + height); // 矩形的周长公式 2 * (宽 + 高)
    }
};

// Triangle 派生类
class Triangle : public Shape 
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double getS () const override 
    {
        // 计算三角形面积
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getC () const override 
    {
        return side1 + side2 + side3; // 三角形的周长是三边之和
    }
};

int main() {
    double radius, width, height, side1, side2, side3;

    cout << "圆的半径: ";
    cin >> radius;

    cout << "矩形的宽度和高度: ";
    cin >> width >> height;

    cout << "三角形的三条边长: ";
    cin >> side1 >> side2 >> side3;

    // 创建 Circle、Rectangle 和 Triangle 的对象
    Circle circle(radius);
    Rectangle rectangle(width, height);
    Triangle triangle(side1, side2, side3);

    cout << "圆的面积: " << circle.getS () << ", 周长: " << circle.getC () << endl;
    cout << "矩形的面积: " << rectangle.getS () << ", 周长: " << rectangle.getC () << endl;
    cout << "三角形的面积: " << triangle.getS () << ", 周长: " << triangle.getC () << endl;

    return 0;
}
