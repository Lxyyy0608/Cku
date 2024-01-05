#include <iostream>
#include <deque>
#include <string>
#include <sstream>

int main() 
{
    // 创建一个整数类型的双端队列
    std::deque<int> myQueue;
    std::string command;

    // 提示用户输入命令
    std::cout << "请输入命令(push <number>, pop, print, quit)：" << std::endl;

    // 不断读取输入，执行相应的操作
    while (std::cin >> command) 
    {
        if (command == "push") 
        {
            int num;
            // 读取要入队的数字
            if (std::cin >> num) 
            {
                // 将数字入队
                myQueue.push_back(num);
            } 
            else 
            {
                std::cout << "无效的输入" << std::endl;
                break;
            }
        } else if (command == "pop") 
        {
            // 检查队列是否为空
            if (!myQueue.empty()) 
            {
                // 出队一个元素
                myQueue.pop_front();
            } else 
            {
                std::cout << "队列为空" << std::endl;
            }
        } 
        else if (command == "print") 
        {
            // 打印队列中的元素
            std::cout << "队列中的元素为: ";
            for (const auto &elem : myQueue) 
            {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        } 
        else if (command == "quit") 
        {
            // 退出程序
            break;
        } 
        else 
        {
            // 未知命令
            std::cout << "未知命令" << std::endl;
        }
    }

    return 0;
}
#include <iostream>
#include <deque>
#include <string>
#include <sstream>

void pushCommand(std::deque<int> &myQueue, int num) 
{
    myQueue.push_back(num);
    std::cout << num << " 入队成功" << std::endl;
}

void popCommand(std::deque<int> &myQueue) 
{
    if (!myQueue.empty()) 
    {
        int frontElement = myQueue.front();
        myQueue.pop_front();
        std::cout << frontElement << " 出队成功" << std::endl;
    } 
    else 
    {
        std::cout << "队列已空，无法出队" << std::endl;
    }
}

void printCommand(const std::deque<int> &myQueue) 
{
    if (!myQueue.empty()) 
    {
        std::cout << "队列中的元素为：";
        for (const auto &element : myQueue) 
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } 
    else 
    {
        std::cout << "队列为空，无法打印" << std::endl;
    }
}

int main() 
{
    std::deque<int> myQueue;
    std::string input;

    std::cout << "请输入命令(push <num>, pop, print, quit)：" << std::endl;

    while (std::getline(std::cin, input)) 
    {
        std::istringstream iss(input);
        std::string command;
        iss >> command;

        if (command == "push") 
        {
            int num;
            if (iss >> num) 
            {
                pushCommand(myQueue, num);
            } 
            else 
            {
                std::cout << "无效的输入，请输入要入队的整数" << std::endl;
            }
        } 
        else if (command == "pop") 
        {
            popCommand(myQueue);
        } 
        else if (command == "print") 
        {
            printCommand(myQueue);
        } 
        else if (command == "quit") 
        {
            std::cout << "退出程序" << std::endl;
            break;
        }
         else 
        {
            std::cout << "无效的命令，请重新输入" << std::endl;
        }

        std::cout << "请输入命令(push <num>, pop, print, quit)：" << std::endl;
    }

    return 0;
}
