#include <iostream>
 using namespace std ;
class Triangle 
{
private:
    float side1, side2, side3;

public:
    // 构造函数，用于初始化三角形的三条边长
    Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}

    // 成员函数，用于确定三角形的类型并打印结果
    void Type() {
        if (side1 == side2 && side2 == side3) {
            cout << "三角形是等边三角形" << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "三角形是等腰三角形" << endl;
        } else {
            cout << "三角形是不等边三角形" << endl;
        }
    }
};

int main() {
    float s1, s2, s3;

    // 输入三角形的三条边长
    cout << "请输入三角形三边: ";
    cin >> s1 >> s2 >> s3;


    // 创建 Triangle 对象并调用成员函数确定三角形类型
    Triangle triangle(s1, s2, s3);
    triangle.Type ();

    return 0;
}
