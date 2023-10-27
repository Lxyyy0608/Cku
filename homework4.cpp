#include <iostream>
 using namespace std ;

int main() 
{
    int H ;
    cout << "请输入金字塔的高度：";
    cin >> H ;
    //从第一行开始
    int row = 1;
    while (row <= H )
     {
        // 定义空格
        int K = H  - row;
        //通过循环输出空格
        while (K  > 0)
         {
            cout << " ";
            K --;
        }

        // 定义星号
        int star = 2 * row - 1;
        //通过循环输出星号数量，同上
        while (star > 0)
         {
            cout << "*";
            star--;
        }

        // 换行
        cout << endl;
        //进入下一行循环
         row++;
    }

    return 0;
}
