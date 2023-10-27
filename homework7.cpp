#include <iostream>
#include <cmath>  // 用于随机数生成

using namespace std;

int main() 
{
   
    int P, C ;
        // 生成电脑的随机选择
        C  = rand() % 3;
    do 
    {
        //玩家输入选择P
        cout << "石头剪刀布游戏\n";
        cout << "0 - 石头, 1 - 剪刀, 2 - 布\n";
        cout << "请输入您的选择: ";
        cin >> P ;
        cout << "玩家选择: " << P  << endl;
        cout << "电脑选择: " << C  << endl;
        //定义a为两者之差
        int a ;
        a = P - C ;
        switch (P ) 
        {
             case 0: // 玩家选择石头
                if (a = 0 ) 
                {
                    cout << "平手\n";
                } 
            case 1: // 玩家选择剪刀
                else if (a = -1; 2 )
                 {
                    cout << "你赢了!\n";    
                } 
             case 2: // 玩家选择布  
                else if (a = 1; -2 )
                 { 
                    cout << "你输了!\n";
                }
                   
                break;
        //玩家出手有误情况
        default:
            cout << "无效的选择，请重新输入。\n";
             break;
    }
       //设置是否继续玩
        cout << "是否继续玩? (1 - 是, 0 - 否): ";
        cin >> P ;
    } while (P  == 1);
    //设置游戏结束
    cout << "游戏结束\n";

    return 0;
}
