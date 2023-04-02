// 常用的遍历算法
// transform()--搬运函数

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class vtatget
{
public:
    int operator()(int value)
    {
        return value + 100;
    }
};

class print
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

    vector<int> v2;
    v2.resize(v.size());

    transform(v.begin(), v.end(), v2.begin(), vtatget());

    for_each(v2.begin(), v2.end(), print());
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}