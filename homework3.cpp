#include <iostream>
using namespace std ;

int main() 
{
    int num;
    cout << "请输入一个正整数: ";
    cin >> num;

    int day = num % 7;

    switch (day) 
    {
    //使用witch语句
        case 0:
        //用于匹配表达式
            cout << "星期日" << endl;
            break;
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        case 4:
            cout << "星期四" << endl;
            break;
        case 5:
            cout << "星期五" << endl;
            break;
        case 6:
            cout << "星期六" << endl;
            break;
        default:
            cout << "输入无效" << endl;
            break;
    }

    return 0;
}
