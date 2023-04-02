// 常用集合算法
// set_intersection--求交集
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
        v1.push_back(i);     // 0->9
        v2.push_back(i + 5); // 5->14
    }

    vector<int> vTarget;
    // 最特殊的情况是交集是两个集合大小中小的一个
    vTarget.resize(min(v1.size(), v2.size()));

    // set_intersection返回的是交集的最后一个元素的位置
    vector<int>::iterator itEnd =
        set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

    for_each(vTarget.begin(), itEnd, myPrint);
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}
