#include <iostream>
using namespace std ;
// Point 类定义
class Point 
{
private:
    int x, y;

public:
    // 构造函数，用于初始化 x 和 y 坐标
    Point(int xCoord, int yCoord)  
    {
        x = xCoord ;
        y = yCoord ;

    }

    // 获取 x 坐标的函数
    int getX() const 
    {
        return x;
    }

    // 获取 y 坐标的函数
    int getY() const 
    {
        return y;
    }

    // 设置 x 坐标的函数
    void setX(int newX) 
    {
        x = newX;
    }

    // 设置 y 坐标的函数
    void setY(int newY) 
    {
        y = newY;
    }
};

// Rectangle 类定义，继承自 Point 类
class Rectangle : public Point 
{
private:
    int length, width;

public:
    // 构造函数，使用点坐标、长度和宽度进行初始化
    Rectangle(int xCoord, int yCoord, int len, int wid) : Point(xCoord, yCoord), length(len), width(wid) {}

    // 计算矩形面积的函数
    int S () const 
    {
        return length * width;
    }

    // 计算矩形周长的函数
    int C() const 
    {
        return 2 * (length + width);
    }
};

int main() 
{
   int x, y, length, width;
   cin >> x >> y >> length >> width ;
    

    // 创建 Point 和 Rectangle 对象并初始化用户输入的值
    Point pointM(x, y);
    Rectangle rectangleM(x, y, length, width);

    // 显示用户输入的坐标
    cout << "坐标为：(" << pointM.getX() << ", " << pointM.getY() << ")\n";

    // 显示矩形的面积和周长
    cout << "面积为: " << rectangleM.S() << endl;
    cout << "周长为: " << rectangleM.C() << endl;

    return 0;  
}
