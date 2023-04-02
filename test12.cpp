// 常用拷贝和替换算法
// copy()

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
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    vector<int> v2;
    v2.resize(v.size());
    copy(v.begin(), v.end(), v2.begin());

    for_each(v2.begin(), v2.end(), myPrint);
    cout << endl;
}
int main()
{
    test01();
    system("pause");

    return 0;
}