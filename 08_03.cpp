#include <iostream>
#include <vector>
#include <algorithm>

void uniqueSort(std::vector<int> &vec) 
{
    // 去重并升序排序
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

int main() 
{
    std::vector<int> myVector;
    int num;

    std::cout << "请输入整数（输入非整数以结束输入）：" << std::endl;

    // 从标准输入读取整数并添加到向量中
    while (std::cin >> num) 
    {
        myVector.push_back(num);
    }

    // 调用uniqueSort函数去除重复元素并进行升序排序
    uniqueSort(myVector);

    // 打印处理后的容器元素
    std::cout << "处理后的容器元素为：" << std::endl;
    for (size_t i = 0; i < myVector.size(); ++i) 
    {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
