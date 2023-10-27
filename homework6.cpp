#include <iostream>
#include <cmath>
using namespace std ;
int main() 
{
    // 输入方程的系数
    double a, b, c;
    cout << "请输入方程系数(a, b, c): ";
    cin >> a >> b >> c;

    
    // 如果a为0，不是二次方程
    if (a == 0) 
    {
        cout << "a不能为0" << endl;
    } else
     {
        double D = b * b - 4 * a * c;

        if (D < 0) 
         // 判别式小于0，没有实根
        {
            cout << "方程无实根" << endl;
        } 
        else if (D == 0)
         // 判别式等于0，有一个相同的实根
         {
            double root = -b / (2 * a);
            cout << "x1=x2= " << root << endl;
        } 
        else 
        // 判别式大于0，有两个不同的实根
        {
            double root1 = (-b + sqrt(D )) / (2 * a);
            double root2 = (-b - sqrt(D )) / (2 * a);
            cout << "x1 = " << root1 << ", x2 = " << root2 << endl;
        }
    }

    return 0;
}
