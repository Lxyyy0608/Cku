#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //开启for循环
    for (int num = 200; num <= 300; num++)
     {
        //定义一个新变量
        int a;
        //通过0-根号num所有数字，历遍所有200-300数字
        for (int i = 2; i <= sqrt(num); i++) 
         { 
             //通过if语句，如果余数为0则停止循环，直接进入下一个num的循环
             a = num % i ;
             if (a == 0) 
             { 
                break ;
            }
        }
         //如果一直余数不为0，直到历遍完所有i没有停止循环，则说明是质数输出
        if (a)
        { 
            cout << num <<endl ;
        }
     }
      return 0; 
}
