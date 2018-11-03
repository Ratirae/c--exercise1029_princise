#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <ctime>
#include <string.h>
#include "BaseValue.h"

void Show(ValueDaughterBase value)
{
    using namespace std;
    cout << "嗯, 她现在的状况..." << "\n"
         << "姓名:" << value.name << "\n"
         << "生日:" << YEAR << "-" << value.month << "-" << value.date << "\n"
         << "星座:" << value.constell << "\n"
         << "年龄:" << value.age << "\n"
         << "金钱:" << value.money << endl;
    cout << "体力:" << value.strength;
    for(int i = 0; i < 10; ++i)
        cout << ( (i < value.strength / 10) ? "■" : "□" );
    cout << endl;
    cout << "智力:" << value.mentality;
    for(int i = 0; i < 10; ++i)
        cout << ( (i < value.mentality / 10) ? "■" : "□" );
    cout << endl;
    cout << "魅力:" << value.charm;
    for(int i = 0; i < 10; ++i)
        cout << ( (i < value.charm / 10) ? "■" : "□" );
    cout << endl;
    cout << "当前时间:" << value.current_year << "年" << value.current_month << "月" << endl;
}












