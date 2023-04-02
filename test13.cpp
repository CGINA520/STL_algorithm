// 常用拷贝和替换算法
// replace()

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
    vector<int> v;
    for (int i = 0; i < 9; i++)
    {
        v.push_back(10);
    }

    cout << "替换前的数列:" << endl;
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;

    // 将10替换成200
    replace(v.begin(), v.end(), 10, 200);

    cout << "替换后的数列:" << endl;
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}