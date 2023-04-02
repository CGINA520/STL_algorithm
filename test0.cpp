// 常用的遍历算法
// for_each()

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 普通函数
void print01(int value)
{
    cout << value << " ";
}

// 仿函数
class print02
{
public:
    void operator()(int value)
    {
        cout << value << " ";
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // 普通函数的遍历
    for_each(v.begin(), v.end(), print01);
    cout << endl;
    // 仿函数的遍历
    // print02()匿名函数对象
    for_each(v.begin(), v.end(), print02());
    cout << endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}