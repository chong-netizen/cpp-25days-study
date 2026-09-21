# C++ 25 天零基础学习打卡

> 零基础 25 天冲刺 C++ 考核，每天在 GitHub 提交学习笔记与代码，保持连续打卡。

## 简介

覆盖考核大纲 8 大模块：变量与生命周期 / 流程控制 / 类型转换 / 运算符 / 数组·指针·引用 / 函数 / 类·继承·多态 / vector。

- 学习计划：每日知识点 + 练习题 + 提交内容（见本地学习路线表）
- 笔记目录：[`notes/`](notes)
- 每日代码：[`code/`](code)
- 阶段项目：[`projects/`](projects)

## 进度打卡

- [x] **Day 1**　开发环境与第一个 C++ 程序　→ [笔记](notes/Day01-开发环境与第一个C++程序.md)
- [ ] **Day 2**　基本变量类型
- [ ] **Day 3**　变量的默认初始化与 const
- [ ] **Day 4**　auto、using 与变量生命周期
- [ ] **Day 5**　分支与条件语句
- [ ] **Day 6**　循环语句
- [ ] **Day 7**　类型转换（隐式转换 / static_cast）
- [ ] **Day 8**　运算符
- [ ] **Day 9**　一维数组
- [ ] **Day 10**　二维数组与字符数组
- [ ] **Day 11**　指针基础
- [ ] **Day 12**　指针运算与引用
- [ ] **Day 13**　第一阶段复盘（数组·指针·引用）
- [ ] **Day 14**　函数基础
- [ ] **Day 15**　传引用参数
- [ ] **Day 16**　函数重载与内联函数
- [ ] **Day 17**　第二阶段复盘 + 项目 score-stats-func
- [ ] **Day 18**　类的定义与成员
- [ ] **Day 19**　封装、访问控制与 this 指针
- [ ] **Day 20**　构造函数与初始化列表
- [ ] **Day 21**　常量成员函数与常量成员变量
- [ ] **Day 22**　继承
- [ ] **Day 23**　多态、虚函数与抽象类 + 项目 shape-polymorphism
- [ ] **Day 24**　vector
- [ ] **Day 25**　全真模拟 + 毕业项目 student-management-system

## 项目作品

| 项目 | 完成日 | 知识点 |
| --- | --- | --- |
| score-stats-func | Day 17 | 函数重载、传引用、函数拆分 |
| shape-polymorphism | Day 23 | 继承、虚函数、抽象基类、多态 |
| student-management-system | Day 25 | 类、构造、const、vector 综合 |

## 仓库结构

```
cpp-25days-study/
├── notes/      每日学习笔记（Markdown）
├── code/       每日练习代码（day01 ~ day25）
└── projects/   阶段综合项目
```

## 参考资料

- 编译器：g++ (MSYS2 UCRT64)
- 编译命令：`g++ -Wall 源文件.cpp -o 程序名.exe`
