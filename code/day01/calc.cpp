#include <iostream>
using namespace std;

// Day 01 练习3：读入两个整数，输出和、差、积、商
int main() {
    int a, b;
    cout << "请输入两个整数（用空格隔开）：";
    cin >> a >> b;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;   // 两个 int 相除结果仍是 int（Day 02 会深入）

    return 0;
}
