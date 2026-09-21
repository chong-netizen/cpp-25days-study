#include <iostream>
#include <string>
using namespace std;

// Day 01 练习2：用 cin/cout 完成个人信息录入与打印
int main() {
    string name, major, hobby;

    cout << "请输入你的姓名：";
    cin >> name;
    cout << "请输入你的专业：";
    cin >> major;
    cout << "请输入你的兴趣爱好：";
    cin >> hobby;

    cout << endl << "===== 个人信息 =====" << endl;
    cout << "姓名：" << name << endl;
    cout << "专业：" << major << endl;
    cout << "爱好：" << hobby << endl;

    return 0;
}
