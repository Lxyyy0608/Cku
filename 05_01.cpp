#include <iostream>
using namespace std ;
class Circle 
{
private:
     // 私有成员变量，用于存储圆的半径
    double radius; 

public:
    //设置半径
   Circle  (double r)
    {
        radius = r;
    }

    // 计算圆的面积
    double CS() 
    {
        // 使用公式 Pi * r^2 计算面积
        return 3.14159 * radius * radius; 
    }

    // 计算圆的周长
    double CC() 
    {
        // 使用公式 2 * Pi * r 计算周长
        return 2 * 3.14159 * radius; 
    }
};

int main() 
{
    double R ;
    cout << "输入圆的半径： ";
    cin >> R ; 

    // 创建 Circle 类的对象
    Circle myCircle(R );
    //给对象属性进行赋值


    // 使用成员函数计算圆的面积和周长
    double S  = myCircle.CS ();
    double C = myCircle.CC  ();

    // 显示计算得到的值
    cout << "面积为：" << S  << endl;
    cout << "周长为： " << C  << endl;

    return 0;
}
