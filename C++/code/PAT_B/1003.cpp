#include <iostream>
#include <vector>
using namespace std;

// 判断函数
bool judge(const string &s);

int main()
{
    int n;
    // 输入个数
    cin >> n;
    // 定义字符串数组
    vector<string> ss(n);
    // 输入字符串
    for (int i = 0; i < n; i++)
    {
        cin >> ss[i];
    }
    // 循环检验输出 YES/NO
    for (int i = 0; i < n; i++)
    {
        if (judge(ss[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

bool judge(const string &s)
{
    int pCount = 0, tCount = 0, aCount = 0;
    int pPos = -1, tPos = -1;

    // 遍历字符串，统计 P, A, T 的数量并记录位置
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'P')
        {
            pCount++;
            pPos = i;
        }
        else if (s[i] == 'T')
        {
            tCount++;
            tPos = i;
        }
        else if (s[i] == 'A')
        {
            aCount++;
        }
        else
        {
            // 如果出现非 P, A, T 的字符，直接返回 false
            return false;
        }
    }

    // 检查 P 和 T 的数量是否为 1，且 A 至少有一个
    if (pCount != 1 || tCount != 1 || aCount == 0)
        return false;

    // 检查 P 在 T 之前
    if (pPos >= tPos)
        return false;

    // 检查 "xPATx" 的规则
    int x1 = pPos;          // P 前面的 A 的数量
    int x2 = tPos - pPos - 1; // P 和 T 之间的 A 的数量
    int x3 = s.length() - tPos - 1; // T 后面的 A 的数量

    // 满足 x3 == x1 * x2 才是合法的
    return x2 > 0 && x3 == x1 * x2;
}