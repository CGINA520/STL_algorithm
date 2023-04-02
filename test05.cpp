// 常用查找算法
// binary_search()
// 必须是有序数列

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    bool ret = binary_search(v.begin(), v.end(), 9);

    if (ret)
    {
        cout << "找到了" << endl;
    }
    else
    {
        cout << "未找到" << endl;
    }
}
int main()
{
    test01();
    system("pause");
    return 0;
}