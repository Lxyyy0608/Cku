#include <iostream>
#include <forward_list>

template<typename T>
void filterList(std::forward_list<T> &lst, const T &threshold) 
{
    lst.remove_if([&](const T &value) { return value < threshold; });
}

template<typename T>
void printList(const std::forward_list<T> &lst) 
{
    for (const auto &element : lst) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() 
{
    std::forward_list<int> myList;
    int num;
    int threshold;

    std::cout << "请输入整数列表（输入非整数以结束输入）：" << std::endl;

    // 从标准输入读取整数并添加到单向链表中
    while (std::cin >> num) 
    {
        myList.push_front(num);
    }

    std::cout << "请输入阈值：" << std::endl;
    std::cin.clear(); // 清除之前的输入状态
    std::cin >> threshold;

    // 调用filterList函数移除小于阈值的元素
    filterList(myList, threshold);

    // 打印处理后的单向链表元素
    std::cout << "处理后的单向链表元素为：" << std::endl;
    printList(myList);

    return 0;
}
