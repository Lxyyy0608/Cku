#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //读取学生数量
    int N;
    cin >> N;

    //通过vector存储学生信息
    vector<string> names;
    vector<int> scholarships;

    // 读取学生数据
    for (int i = 0; i < N; i++) 
    {
        
        //通过string建立学生姓名的字符串，后定义平均分等信息
        string name;
        int avg, review, papers;
        char cadre, western;
        cin >> name >> avg >> review >> cadre >> western >> papers;
        //将学生姓名存入容器
        names.push_back(name);

        //计算奖学金
        int scholarship = 0;
        //期末成绩高于80且发表期刊
        if (avg > 80 && papers >= 1) 
        {
            scholarship += 8000;
        }
        //期末成绩高于85且班级评议成绩高于80分
        if (avg > 85 && review > 80) 
        {
            scholarship += 4000;
        }
        //期末平均成绩高于90分
        if (avg > 90) 
        {
            scholarship += 2000;
        }
        //期末平均成绩高于85分的西部省份学生
        if (avg > 85 && (western == 'Y')) 
        {
            scholarship += 1000;
        }
        //班级评议成绩高于80分的学生干部
        if (review > 80 && (cadre == 'Y')) 
        {
            scholarship += 850;
        }
         
        //将学生奖金添加到容器
        scholarships.push_back(scholarship);
    }

    // 找到获得最多奖金的学生
    int maxScholarship = 0;
    //建立字符串存储最高奖学金学生姓名
    string maxScholarshipName;
    //遍历scholarships中每个元素，通过层层比较找出最大
    for (int i = 0; i < N; i++) {

        if (scholarships[i] > maxScholarship) 
        {
            maxScholarship = scholarships[i];
            maxScholarshipName = names[i];
        }
    }

    // 计算总奖学金
    int totalScholarship = 0;
    for (int i = 0; i < N; i++) 
    {
        totalScholarship += scholarships[i];
    }

    // 输出结果
    cout << maxScholarshipName << endl;
    cout << maxScholarship << endl;
    cout << totalScholarship << endl;

    return 0;
}
