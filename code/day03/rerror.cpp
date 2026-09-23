#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    double r;
    const double pi{3.14159};

    cout<<"请输入圆的半径";
    cin>>r;

    double area=pi*r*r;
    double perimeter = 2 * pi * r;
    
    cout<<"圆的半径等于:"<<r<<endl;
    cout<<"圆的面积等于："<<area<<endl;
    cout<<"圆的周长等于:"<<perimeter<<endl;

    return 0;
}
