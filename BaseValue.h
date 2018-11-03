#ifndef BASEVALUE_H_INCLUDED
#define BASEVALUE_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <array>
#include <ctime>
#include <string.h>
const int YEAR = 2008;
const int TEEN = 18;
const int GAME_TIME = 10;




struct ValueDaughterBase
{
    std::string name;
    int month;    //生日月份
    int current_month;    //当前游戏月份
    int current_year;    //当前年份
    int date;    //生日日期
    std::string constell;
    int age=18;
    int money=0;
    int strength;
    int mentality;
    int charm;
};
// 父亲姓名

// 打印信息
void Show(ValueDaughterBase);






#endif // BASEVALUE_H_INCLUDED
