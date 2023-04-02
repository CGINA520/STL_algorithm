// 常用查找算法
// count

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 内置数据类型的统计
void test01()
{
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(1);
    }
    int num = count(v.begin(), v.end(), 1);

    cout << "要查找的数字的个数是：" << num << endl;
}

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    bool operator==(const Person &p)
    {
        if (this->m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string m_Name;
    int m_Age;
};
// 自定义数据类型的统计
void test02()
{
    vector<Person> v;

    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 10);
    Person p4("ddd", 10);
    Person p5("eee", 20);

    Person p("aaa", 10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int num = count(v.begin(), v.end(), p);

    cout << "和p同岁的人的个数是:" << num << endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}