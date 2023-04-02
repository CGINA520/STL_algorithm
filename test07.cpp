// 常用查找算法
// count_if()

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class greater20
{
public:
    bool operator()(int vaule)
    {
        return vaule > 20;
    }
};
// 统计内置数据类型
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i + 100);
    }

    int num = count_if(v.begin(), v.end(), greater20());

    cout << "大于20的数字的个数是:" << num << endl;
}

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class AgeGreater10
{
public:
    bool operator()(const Person &p)
    {
        return p.m_Age > 10;
    }
};
// 统计自定义数据类型
void test02()
{
    vector<Person> v;

    Person p1("aaa", 10);
    Person p2("aaa", 20);
    Person p3("aaa", 30);
    Person p4("aaa", 40);
    Person p5("aaa", 50);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int num = count_if(v.begin(), v.end(), AgeGreater10());
    cout << "年龄大于10的人数是:" << num << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}