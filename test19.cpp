// 常用集合算法
// set_union()--求并集
// 两个集合必须是有序序列

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class myPrint
{
public:
    void operator()(int vaule)
    {
        cout << vaule << " ";
    }
};
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
    vTarget.resize(v1.size() + v2.size());

    vector<int>::iterator itEnd =
        set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

    for_each(vTarget.begin(), itEnd, myPrint());
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}