// 常用的查找算法
// find()

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 查找内置数据类型
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // 查找是否有5这个元素
    vector<int>::iterator it = find(v.begin(), v.end(), 5);

    if (it == v.end())
    {
        cout << "找不到" << endl;
    }
    else
    {
        cout << "找到了,数字是：" << *it << endl;
    }
}

class Person
{
public:
    Person(string name, int age)
    {
        this->m_age = age;
        this->m_name = name;
    }
    bool operator==(const Person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        return false;
    }

    string m_name;
    int m_age;
};

// 查找自定义数据类型
// 必须重载==
void test02()
{
    vector<Person> v;
    // 创建对象
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>::iterator it = find(v.begin(), v.end(), p2);

    if (it == v.end())
    {
        cout << "找不到" << endl;
    }
    else
    {
        cout << "找到了" << endl
             << "姓名：" << (*it).m_name << " "
             << "年龄：" << it->m_age << endl;
    }
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}