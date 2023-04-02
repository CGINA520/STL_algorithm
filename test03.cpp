// 常用的查找算法
// find_if()

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>

class greaterFive
{
public:
    bool operator()(int vaule)
    {
        return vaule > 5;
    }
};
// 内置数据类型的查找
void test01()
{
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(), v.end(), greaterFive());

    if (it == v.end())
    {
        cout << "找不到" << endl;
    }
    else
    {
        cout << "找到了，数字是：" << *it << endl;
    }
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

class greater20
{
public:
    bool operator()(const Person &p)
    {
        return p.m_Age > 20;
    }
};
// 自定义数据类型的查找
void test02()
{
    vector<Person> v;

    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    vector<Person>::iterator it = find_if(v.begin(), v.end(), greater20());

    if (it == v.end())
    {
        cout << "未找到" << endl;
    }
    else
    {
        cout << "找到了，姓名：" << it->m_Name << " "
             << "年龄:" << it->m_Age << endl;
    }
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}