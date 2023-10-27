#include <iostream>
using namespace std;

int main() 
{
    int num1;
    cout << "请输入一个整数：";
    cin >> num1 ;

    int num2 = 0; // 定义反向后的整数
    int num3 = 0;  // 定义计算位数

    do 
    {
        int digit = num1 % 10; // 获取最后一位数字
        num2 = num2 * 10 + digit; // 将数字反向排列
        num1 /= 10; // 去掉最后一位数字
        num3++; // 记一次位数
    } while (num1 != 0);

    cout << "反向输出的整数为：" << num2 << endl;
    cout << "位数为：" << num3 << endl;

    return 0;
}
