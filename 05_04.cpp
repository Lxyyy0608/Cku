#include <iostream>
#include <string>
#include <vector>
using namespace std ;
class Student 
{
private:
    string name;
    string className;
    int studentID;
    int score;
    static int count; // 静态变量用于统计对象数量

public:
    // 使用构造函数初始化成员变量
    Student(const string& n, const string& cls, int id, int scr)
        : name(n), className(cls), studentID(id), score(scr) 
    {
        count++;// 每次创建对象时递增计数器
    }


    //显示学生信息
    void displayInfo() 
    {
        cout << "姓名：" << name << endl;
        cout << "班级：" << className << endl;
        cout << "学生ID：" << studentID << endl;
        cout << "分数：" << score << " (等级：" << calculateGrade() << ")" << endl;
    }

    // 根据分数计算等级
    char calculateGrade() 
    {
        if (score >= 90) 
        {
            return 'A';
        } 
        else if (score >= 80) 
        {
            return 'B';
        } 
        else if (score >= 70) 
        {
            return 'C';
        } 
        else 
        {
            return 'D';
        }
    }

    // 返回学生对象数量
    static int getCount() 
    {
        return count;
    }
};
// 初始化静态成员变量
int Student::count = 0;

int main() 
{
    int number;
    cout << "请输入学生个数: ";
    cin >> number;
    cin.ignore(); // 忽略换行符

    vector<Student> students; // 使用 vector 存储学生对象

    for (int i = 0; i < number ; ++i) 
    {
        string name, className;
        int id, score;

        cout << "请输入学生姓名: ";
        getline(cin, name);

        cout << "请输入班级名称: ";
        getline(cin, className);

        cout << "请输入学生ID: ";
        cin >> id;

        cout << "请输入学生成绩: ";
        cin >> score;
        cin.ignore(); // 忽略换行符

        // 将创建的学生对象存入 vector 中
        students.push_back(Student(name, className, id, score));

    }

    // 显示学生信息
    for (int i = 0; i < number ; ++i) 
    {
        cout << "学生 " << i + 1 << " 的信息：" << endl;
        students[i].displayInfo();
        cout << endl;
    }

    // 输出学生总数
    cout << "总学生数：" << Student::getCount() << endl;

    return 0;
}
