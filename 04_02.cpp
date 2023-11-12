#include <iostream>
using namespace std;
//编写一个递归函数
int f (int n)
{
    if (0 < n <= 2)
    {
        return 1; }
    else 
    { return f(n - 1) + f(n - 2); }
}       
int main()
{
    //定义组数
    int C ;
    cout << "请输入测试组数：" ;
    cin >> C ;

    int n = 0, a;

    //通过while循环一一对应
    while (n < C )
    {
    cout << "请输入正整数a:" ;
    cin >> a ;
    cout << "数列第" << a << "个数为" << f (a) <<endl ;
    n++ ;
    }
    
    return 0;
}