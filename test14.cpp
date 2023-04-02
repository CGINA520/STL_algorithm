// 常用拷贝和替换算法
// replace_if()

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class myPrint
{
public:
    void operator()(int vaule)
    {
        cout << vaule << " ";
    }
};

class greater30
{
public:
    bool operator()(int vaule)
    {
        return vaule > 30;
    }
};
void test01()
{
    vector<int> v;

    v.push_back(30);
    v.push_back(50);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(70);

    cout << "替换前：" << endl;
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;

    replace_if(v.begin(), v.end(), greater30(), 3000);

    cout << "替换后：" << endl;
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}