#include <iostream>
using namespace std ;
int main() 
{
    int num1, num2;
    

    // 输入第一个整数
    cout << "请输入第一个整数: ";
    cin >> num1;

    // 输入第二个整数
    cout << "请输入第二个整数: ";
    cin >> num2;

    // 使用if-else语句比较两个数的大小
    if (num1 > num2) 
    {
        cout << num1 << " 大于 " << num2 << endl;
    } 
    else if (num1 < num2) 
    {
        cout << num1 << " 小于 " << num2 << endl;
    } 
    else 
    {
        cout << num1 << " 等于 " << num2 << endl;
    }

    return 0;
}
