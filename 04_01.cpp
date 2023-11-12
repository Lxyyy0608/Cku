#include <iostream>
using namespace std;
//通过move函数输出移动操作
void move(int n, char start, char dest)
{
    cout  << n << ":" << start << "--->" << dest << endl;
}
 
//通过递归函数构建
void hanoi(int n, char start, char mid, char dest)
{
    //没有盘子可以移动，返回
    if (n == 0)
        return;
    //一个盘子    
    else if(n == 1 )
    {
        move (1, start, dest );
    }
    //多个盘子
    else
    {
        //先将n-1个盘子从起始柱子通过目标柱子移到中间柱子
        hanoi(n - 1, start, dest, mid);
        //将剩下的一个盘子从起始柱子移到目标柱子并输出操作
        move(n, start, dest );
        //最后将n-1个盘子从中间柱子通过起始柱子移到目标柱子
        hanoi(n - 1, mid , start, dest );
    }
}
int main()
{
    char tower[3];
    int count;
    cout << "请输入要移动的盘子数量和三个柱子标识符：" << endl ;
    cin >> count >> tower[0] >> tower[1] >> tower[2];
    //调用汉诺塔函数进行移动
    hanoi(count, tower[0], tower[1], tower[2]);
    return 0;
}