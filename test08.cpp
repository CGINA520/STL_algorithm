// 常用排序算法
// sort()

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint(int value)
{
    cout << value << " ";
}
void test01()
{
    vector<int> v;

    v.push_back(30);
    v.push_back(10);
    v.push_back(40);
    v.push_back(0);
    v.push_back(3);

    // 默认为升序排序
    sort(v.begin(), v.end());

    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
    // 降序排序
    // greater<int>()是内置函数对象
    sort(v.begin(), v.end(), greater<int>());

    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    test01();
    system("pause");
    return 0;
}