// 常用集合算法
// set_diffence()--求差集
// 两个集合必须是有序序列

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
        v2.push_back(i + 5);
    }

    vector<int> vTarget;
    // 最特殊的情况：两个集合没有交集，开辟两个集合中空间较大的size作为目标容器的size
    vTarget.resize(max(v1.size(), v2.size()));
    // 求v1-v2
    vector<int>::iterator itEnd =
        set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    // 遍历
    cout << "v1 - v2 = ";
    for_each(vTarget.begin(), itEnd, myPrint);
    cout << endl;

    // 求v2-v1
    vector<int>::iterator itsEnd =
        set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
    cout << "v2 - v1 = ";
    for_each(vTarget.begin(), itsEnd, myPrint);
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}