// 常用排序算法
// reserve()

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

    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(60);

    // 反转前：
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    reverse(v.begin(), v.end());

    // 反转后：
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}