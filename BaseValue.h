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
    int month;    //�����·�
    int current_month;    //��ǰ��Ϸ�·�
    int current_year;    //��ǰ���
    int date;    //��������
    std::string constell;
    int age=18;
    int money=0;
    int strength;
    int mentality;
    int charm;
};
// ��������

// ��ӡ��Ϣ
void Show(ValueDaughterBase);






#endif // BASEVALUE_H_INCLUDED
