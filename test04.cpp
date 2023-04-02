// 常用查找算法
// 查找相邻重复元素
// adjacent_find()

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void test01()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);

    vector<int>::iterator it = adjacent_find(v.begin(), v.end());

    if (it == v.end())
    {
        cout << "未找到" << endl;
    }
    else
    {
        cout << "找到了，数字是：" << *it << endl;
    }
}
int main()
{
    test01();
    system("pause");
    return 0;
}