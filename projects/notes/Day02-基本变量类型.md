第一章：变量
1.1 什么是变量
变量就是一个有名字的盒子，用来存数据。
cpp

亮色

复制
int age = 25;
// ↑类型  ↑名字  ↑值
int 告诉计算机：这个盒子只能装整数
age 是盒子的名字
25 是放进盒子里的值
1.2 变量名规则
可以用：字母、数字、下划线 _
不能以数字开头：1name 不行，name1 可以
区分大小写：age 和 Age 是两个不同的变量
不能用关键词：int、return、if 这些已被 C++ 占用
两种命名风格（都能编译，选一种坚持用就行）：
cpp

亮色

复制
int studentAge = 25;     // 驼峰命名：从第二个单词开始首字母大写
int student_age = 25;    // 下划线命名：单词之间用 _ 隔开
1.3 多次赋值
一个变量可以反复改变值，旧值会被覆盖：
cpp

亮色

复制
int age = 25;     // 盒子里是 25
age = 26;         // 25 被清掉，放进 26
age = age + 1;    // 拿出 26，加 1 得 27，放回去
age = age + 1 不是数学等式，执行顺序是：
先算右边 age + 1 → 26 + 1 = 27
把结果 27 塞回左边的 age
1.4 简写运算符
表格
写法	等价于	效果
age += 10	age = age + 10	加 10
age -= 5	age = age - 5	减 5
age *= 2	age = age * 2	乘 2
age /= 3	age = age / 3	除以 3
age++	age = age + 1	加 1
age--	age = age - 1	减 1
第二章：基本数据类型
2.1 四种内置类型
不需要任何头文件，直接用：
表格
类型	装什么	例子	占字节
int	整数	25、-3、0	4 字节
double	小数	3.14、-0.5	8 字节
char	单个字符	'A'、'9'	1 字节
bool	真或假	true、false	1 字节
cpp

亮色

复制
int age = 25;
double height = 175.5;
char grade = 'A';           // 注意：单引号
bool isStudent = true;
bool 输出时 true 显示为 1，false 显示为 0。
2.2 字符串类型 string
需要头文件 #include <string>：
cpp

亮色

复制
#include <string>
using std::string;

string name = "官恒冲";     // 注意：双引号
表格
类型	引号	能装什么
char	单引号 'A'	单个字符
string	双引号 "hello"	一段文字
string 支持 + 拼接：
cpp

亮色

复制
string firstName = "恒冲";
string lastName = "官";
string fullName = lastName + firstName;   // "官恒冲"
2.3 整数家族
表格
类型	占字节	大致范围
short	2 字节	-32,768 ~ 32,767
int	4 字节	-21 亿 ~ 21 亿
long	4 字节	-21 亿 ~ 21 亿
long long	8 字节	约 ±922 亿亿
日常 99% 用 int 就够。 数字超过 21 亿才需要 long long。
2.4 unsigned
unsigned int 不能存负数，正数上限翻倍（0 ~ 42 亿）。
新手建议： 全部用普通 int，不要碰 unsigned，容易因负数运算导致溢出。
2.5 float vs double
表格
类型	占字节	精度
float	4 字节	约 7 位有效数字
double	8 字节	约 15 位有效数字
新手建议： 小数一律用 double。
2.6 sizeof 查看字节数
cpp

亮色

复制
cout << sizeof(int) << endl;         // 4
cout << sizeof(double) << endl;      // 8
cout << sizeof(char) << endl;        // 1
cout << sizeof(bool) << endl;        // 1
cout << sizeof(float) << endl;       // 4
cout << sizeof(short) << endl;       // 2
cout << sizeof(long long) << endl;   // 8

// 也可以查变量
int age = 25;
cout << sizeof(age) << endl;         // 4（查的是 int 类型的大小）
第三章：类型转换与整数除法
3.1 整数除法（最常踩的坑）
两个 int 做除法，结果还是 int，小数直接砍掉，不四舍五入：
cpp

亮色

复制
cout << 7 / 2;       // 输出 3（不是 3.5）
cout << 7.0 / 2;     // 输出 3.5
cout << 7 / 2.0;     // 输出 3.5
表格
情况	例子	结果
int ÷ int	7 / 2	3（砍小数）
double ÷ int	7.0 / 2	3.5
int ÷ double	7 / 2.0	3.5
double ÷ double	7.0 / 2.0	3.5
一句话：只要有一个是小数，结果就是小数。两个都是整数，小数直接丢弃。
3.2 自动类型转换
表格
转换方向	例子	结果	安全吗
int → double	double b = 10;	b = 10.0	安全
double → int	int x = 3.99;	x = 3	丢数据
double → int 不四舍五入，直接砍掉小数部分：
cpp

亮色

复制
int a = 7.1;     // 7
int b = 7.5;     // 7
int c = 7.9;     // 7
int d = -2.8;    // -2
