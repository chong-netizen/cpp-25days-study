#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;

int year;

int main()
{
    cout<<"请输入年份:";
    cin>>year;

    if ((year%4==0&&year%100!=0)||(year%400==0))
    {
        cout<<"是闰年"<<endl;
    } 
    else
    {
        cout<<"不是闰年"<<endl;
    }
        return 0;
}