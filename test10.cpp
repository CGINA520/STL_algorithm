// 常用排序算法
// merge()--合并
// 注意：merge()合并的两个数列必须是相同有序数列

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint(int vaule)
{
    cout << vaule << " ";
}
void test01()
{
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 10);
    }

    vector<int> vTarget;
    vTarget.resize(v1.size() + v2.size());

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

    for_each(vTarget.begin(), vTarget.end(), myPrint);
}
int main()
{
    test01();
    system("pause");
    return 0;
}