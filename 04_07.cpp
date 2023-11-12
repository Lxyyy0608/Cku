//这道题借鉴了chatgpt但是已经明白了
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 检查在当前位置放置皇后是否合法
//建立容器皇后列数，定义行数和列数
bool isSafe(vector<int>& queenCols, int row, int col) {
    for (int i = 0; i < row; ++i) {
        // 检查是否在同一列或者同一对角线上
        //abs用于返回绝对值
        if (queenCols[i] == col || abs(queenCols[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// 递归解决八皇后问题
void solveNQueens(vector<int>& queenCols, int row, vector<vector<int>>& solutions) {
    //获取棋盘大小
    int n = queenCols.size();

    if (row == n) {
        // 找到一个解，保存当前解到容器中
        solutions.push_back(queenCols);
        return;
    }

    for (int col = 0; col < n; ++col) {
        //在当前行中遍历每一列，通过调用issafe来检查能否放置皇后
        if (isSafe(queenCols, row, col)) {
            //将当前行的皇后放置在该列
            queenCols[row] = col;
            //通过调用solveNQueens函数将行数增加寻找下一行位置
            solveNQueens(queenCols, row + 1, solutions);
        }
    }
}

int main() {
    int n;
    //输入n表示组数
    cin >> n;

    // 创建一个二维vector用于存储八皇后问题所有解
    vector<vector<int>> solutions;
    //创建一个长度为8的整数vector来存储每个皇后所在列
    vector<int> queenCols(8, 0);
    //调用函数并将结果保存在vector
    solveNQueens(queenCols, 0, solutions);

    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;

        // 输出对应于b的皇后串
        for (int j = 0; j < 8; ++j) {
            cout << solutions[b - 1][j] + 1; // 输出输出对应于 b 的皇后串中每个皇后所在的列
        }
        //b-1是因为组数从0开始而输出的列数从1开始
        cout << endl;
    }

    return 0;
}
