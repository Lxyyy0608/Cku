#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //输入字符串
    string i;
    cin >> i ;

    //定义c历遍字符串中所有字符，c为引用，说明可以修改i中内容
    for (char &c : i) 
    {
        //如果是大写则变小写
        if (isupper(c)) 
        {
            c = tolower(c);
        } 
        //如果是小写则变大写
        else if (islower(c)) 
        {
            c = toupper(c);
        }
    }

    cout  << i << endl;

    return 0;
}
