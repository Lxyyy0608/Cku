#include <iostream>
#include <list>

int main() 
{
    std::list<int> mylist;
    int num;

    std::cout << "请输入整数（输入非整数以结束输入）：" << std::endl;

    // 从标准输入读取整数并添加到链表
    while (std::cin >> num) 
    {
        mylist.push_back(num);
    }

    // 如果链表不为空，删除第一个和最后一个元素
    if (!mylist.empty()) 
    {
        mylist.erase(mylist.begin());       // 删除第一个元素
        mylist.erase(std::prev(mylist.end())); // 删除最后一个元素
    }

    // 打印剩余链表中的元素
    std::cout << "剩余链表中的元素：" << std::endl;
    for (const auto &element : mylist) 
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
