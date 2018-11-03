
#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <ctime>
#include <string>
#include <string.h>
#include "BaseValue.h"
//星座二维数组
const std::string constell_names[12][2] =
{
	{ "摩羯座", "水瓶座" },	//一月
    { "水瓶座", "双鱼座" },	//二月
    { "双鱼座", "白羊座" },	//三月
    { "白羊座", "金牛座" },	//四月
    { "金牛座", "双子座" },	//五月
    { "双子座", "巨蟹座" },	//六月
    { "巨蟹座", "狮子座" },	//七月
    { "狮子座", "处女座" },	//八月
    { "处女座", "天平座" },	//九月
    { "天平座", "天蝎座" },	//十月
    { "天蝎座", "射手座" },	//十一月
    { "射手座", "摩羯座" }		//十二月
};
//各月份跨星座的日期
const int constell_dates[]{ 20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22 };
using namespace std;


int main()
{
	bool value_boole = 0;
	//1. 为父女取名字
	//2. 录入女儿的初始信息
	//    根据女儿的星座,设置游戏的基本参数
	//3. 开始游戏大循环
	//4. 根据各项参数,判定游戏结果
	// 女儿的基本信息: 体力, 智力, 魅力, 道德, 气质
	std::string value_father_name;
    ValueDaughterBase value_daughter_base;
	cout << "输入父亲的姓名: ";
	cin >> value_father_name;
	cout << endl;
	cout << "输入女儿的姓名:";
	cin >> value_daughter_base.name;
	do    //输入月份
	{
	    cout << "输入女儿的出生月份(MM):";
		cin >> value_daughter_base.month;
		if (value_daughter_base.month < 1 || value_daughter_base.month >12)
		{
			cerr << "月份超限" << endl;
			value_boole = 0;
		}
		else
        {
            value_boole = 1;
        }
	} while (!value_boole);
	value_boole = 0;
	cout << endl;
	do    //输入日期
	{
	    cout << "输入女儿的出生日期(DD):";
		cin >> value_daughter_base.date;
		switch (value_daughter_base.month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (value_daughter_base.date < 1 || value_daughter_base.date > 31)
			{
				cerr << "日期超限" << endl;
				value_boole = 0;
			}
			else
			{
				value_daughter_base.constell = constell_names[value_daughter_base.month - 1][value_daughter_base.date / constell_dates[value_daughter_base.month - 1]];
				value_boole = 1;
			}
			break;
		case 2:
			if (value_daughter_base.date < 1 || value_daughter_base.date > 31)
			{
				cerr << "日期超限" << endl;
				value_boole = 0;
			}
			else
			{
				value_daughter_base.constell = constell_names[value_daughter_base.month - 1][value_daughter_base.date / constell_dates[value_daughter_base.month - 1]];
				value_boole = 1;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (value_daughter_base.date < 1 || value_daughter_base.date > 31)
			{
				cerr << "日期超限" << endl;
				value_boole = 0;
			}
			else
			{
				value_daughter_base.constell = constell_names[value_daughter_base.month - 1][value_daughter_base.date / constell_dates[value_daughter_base.month - 1]];
				value_boole = 1;
			}
			break;
		default:
			break;
		}
	} while ( !value_boole );
	cout << endl;
	//test
	cout << value_daughter_base.constell << endl;
    if( value_daughter_base.constell == "水瓶座" )
    {
        value_daughter_base.strength = 43;
        value_daughter_base.mentality = 43;
        value_daughter_base.charm = 20;
    }
    else if("双鱼座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 41;
        value_daughter_base.mentality = 20;
        value_daughter_base.charm = 49;
    }
    else if("白羊座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 80;
        value_daughter_base.mentality = 15;
        value_daughter_base.charm = 15;
    }
    else if("金牛座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 46;
        value_daughter_base.mentality = 30;
        value_daughter_base.charm = 28;
    }
    else if("双子座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 50;
        value_daughter_base.mentality = 35;
        value_daughter_base.charm = 23;
    }
    else if("巨蟹座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 40;
        value_daughter_base.mentality = 31;
        value_daughter_base.charm = 33;
    }
    else if("狮子座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 85;
        value_daughter_base.mentality = 9;
        value_daughter_base.charm = 11;
    }
    else if("处女座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 35;
        value_daughter_base.mentality = 28;
        value_daughter_base.charm = 36;
    }
    else if("天平座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 42;
        value_daughter_base.mentality = 33;
        value_daughter_base.charm = 25;
    }
    else if("天蝎座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 50;
        value_daughter_base.mentality = 25;
        value_daughter_base.charm = 40;
    }
    else if("射手座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 57;
        value_daughter_base.mentality = 31;
        value_daughter_base.charm = 15;
    }
    else if("摩羯座" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 56;
        value_daughter_base.mentality = 21;
        value_daughter_base.charm = 16;
    }
    //年龄初值18岁
    value_daughter_base.age = TEEN;
    /**test*/
    /*
    cout << "姓名:" << value_daughter_name << "\t" << "出生日期:" << YEAR << "年" <<value_birth_month << "月" << value_birth_date << "日" << "\n"
         << "星座:" << value_daughter_constell << "\t" << "属性:" << endl;
    cout << "体力:" << value_daughter_base.strength << "\n"
         << "智力:" << value_daughter_base.mentality << "\n"
         << "魅力:" << value_daughter_base.charm << endl;
    */
    //游戏大循环
    for(int year = TEEN; year < TEEN + GAME_TIME;)
    {
        for(int month = ( (year == TEEN)? value_daughter_base.month : 1 ); month <=12; )
        {
            if( value_daughter_base.month == month )
            {
                cout << "本月为" << value_daughter_base.name << "的生日,是否要送礼物?" << endl;
            }
            /********************************************************************************************/
            char choice;
            cout << "是否结束本回合(Y/N):";
            cin >> choice;
            if(choice == 'Y' || 'y')
            {
                value_daughter_base.current_month = month;
                value_daughter_base.age = year;
                value_daughter_base.current_year = YEAR + year - TEEN;
                Show(value_daughter_base);
                month++;
                if(month > 12)
                    year++;
            }
            /********************************************************************************************/
        }
    }
    return 0;
}

/*
string GetConstell(int value_birth_month, int value_birth_date)
{
	string value_daughter_constell;
	if (value_birth_month < 1 || value_birth_month >12 )
		cerr << "月份超限" << endl;
	else
	{
		switch (value_birth_month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (value_birth_date < 1 || value_birth_date > 31)
					cerr << "日期超限" << endl;
				else
				{
					value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
					return value_daughter_constell;
				}
				break;
			case 2:
				if (value_birth_date < 1 || value_birth_date > 28)
					cerr << "日期超限" << endl;
				else
				{
					value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
					return value_daughter_constell;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if( value_birth_date < 1 || value_birth_date >30 )
					cerr << "日期超限" << endl;
				else
				{
					value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
					return value_daughter_constell;
				}
				break;
			default:
				break;
	     }


	}
}
*/

