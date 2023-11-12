//借鉴了一点点chatgpt但是已经完全明白
#include <iostream>
#include <vector>

using namespace std;
//建立函数
int findMonkeyKing(int n, int m) {
    //建立存放猴子编号的容器
    vector <int> monkeys;
    //历遍所有猴子，将所有猴子加入容器
    for (int i = 1; i <= n; ++i) {
        monkeys.push_back(i);
    }

    //创建迭代器指向猴子编号的开头
    auto it = monkeys.begin();
    //只要存储中猴子数量大于1则开始循环
    while (monkeys.size() > 1) {
        for (int i = 1; i < m; ++i) {
            //将迭代器递增，移动到下一只猴子
            ++it;
            //如果迭代器到达结尾，则重新指向编号开头
            if (it == monkeys.end()) {
                it = monkeys.begin();
            }
        }

        //从vector中删除指到的猴子
        it = monkeys.erase(it);
        //同上确保编号最后的猴子被淘汰，循环能继续
        if (it == monkeys.end()) {
            it = monkeys.begin();
        }
    }

    return *it;
}

int main() {
    int n, m;
    //循环，直到n，m都为0为止
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }

        int king = findMonkeyKing(n, m);
        cout << king << endl;
    }

    return 0;
}
