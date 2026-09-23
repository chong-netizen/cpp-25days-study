#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    const string A{"请输入华氏温度F:"};
    const string B{"得到摄氏温度C:"};
    double F;

    cout<<A;
    cin>>F;

    cout<<B<<(F-32)*5/9<<endl;
    return 0;
}