// 常用排序算法
// random_shuffle

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <ctime>

void myPrint(int vaule)
{
    cout << vaule << " ";
}
void test01()
{
    srand((unsigned int)time(NULL));
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    // 利用洗牌算法打乱有序数列
    random_shuffle(v.begin(), v.end());

    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}