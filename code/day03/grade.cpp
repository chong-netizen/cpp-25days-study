#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
    double grade;
    cout<<"请输入成绩:";
    cin>>grade;
        if(grade>=90)
        cout<<"A";

    else if(grade<90&&grade>=80)
    cout<<"B";

    else if(grade<80&&grade>=60)
    cout<<"C";

    else
    cout<<"D";

    return 0;
}