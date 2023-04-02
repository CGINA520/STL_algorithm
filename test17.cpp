// 常用算术生成算法
// fill()--填充给容器指定的值

#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <algorithm>

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
    v.resize(10);

    fill(v.begin(), v.end(), 100);

    for_each(v.begin(), v.end(), myPrint());
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}