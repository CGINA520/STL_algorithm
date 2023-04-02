// 常用算术生成算法
// accumulate()--求总合

#include <iostream>
using namespace std;
#include <numeric>
#include <vector>

void test01()
{
    vector<int> v;

    for (int i = 0; i <= 100; i++)
    {
        v.push_back(i);
    }

    int total = accumulate(v.begin(), v.end(), 0);
    cout << "sum = " << total << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}