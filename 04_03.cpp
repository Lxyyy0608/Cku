#include <iostream>
#include <cmath>
using namespace std ;

// 定义一个函数，用于计算对数
long double Log(double base, double num) 
{
    // 检查基数和数都必须是正数
    if (base <= 0 || num <= 0)
    {
        cout << "无法识别" << endl;
        return -1.0; // 返回一个错误值
    }

    int result = 0;
    // 使用 while 循环来反复除以基数，直到数小于基数
    while (num >= base) 
    {
        result += 1; // 每次循环增加 1
        num /= base; // 除以基数，减小被计算的数
    }

    return result--;
}

int main() 
{
    long double base, num ;
    cin >> base;
    cin >> num;

    // 调用 Log 函数来计算对数
    double n  = Log(base, num);

    if (n != -1.0) 
    {
        cout  << n << endl;
    }

    return 0;
}
