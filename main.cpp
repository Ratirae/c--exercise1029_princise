
#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <ctime>
#include <string>
#include <string.h>
#include "BaseValue.h"
//������ά����
const std::string constell_names[12][2] =
{
	{ "Ħ����", "ˮƿ��" },	//һ��
    { "ˮƿ��", "˫����" },	//����
    { "˫����", "������" },	//����
    { "������", "��ţ��" },	//����
    { "��ţ��", "˫����" },	//����
    { "˫����", "��з��" },	//����
    { "��з��", "ʨ����" },	//����
    { "ʨ����", "��Ů��" },	//����
    { "��Ů��", "��ƽ��" },	//����
    { "��ƽ��", "��Ы��" },	//ʮ��
    { "��Ы��", "������" },	//ʮһ��
    { "������", "Ħ����" }		//ʮ����
};
//���·ݿ�����������
const int constell_dates[]{ 20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22 };
using namespace std;


int main()
{
	bool value_boole = 0;
	//1. Ϊ��Ůȡ����
	//2. ¼��Ů���ĳ�ʼ��Ϣ
	//    ����Ů��������,������Ϸ�Ļ�������
	//3. ��ʼ��Ϸ��ѭ��
	//4. ���ݸ������,�ж���Ϸ���
	// Ů���Ļ�����Ϣ: ����, ����, ����, ����, ����
	std::string value_father_name;
    ValueDaughterBase value_daughter_base;
	cout << "���븸�׵�����: ";
	cin >> value_father_name;
	cout << endl;
	cout << "����Ů��������:";
	cin >> value_daughter_base.name;
	do    //�����·�
	{
	    cout << "����Ů���ĳ����·�(MM):";
		cin >> value_daughter_base.month;
		if (value_daughter_base.month < 1 || value_daughter_base.month >12)
		{
			cerr << "�·ݳ���" << endl;
			value_boole = 0;
		}
		else
        {
            value_boole = 1;
        }
	} while (!value_boole);
	value_boole = 0;
	cout << endl;
	do    //��������
	{
	    cout << "����Ů���ĳ�������(DD):";
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
				cerr << "���ڳ���" << endl;
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
				cerr << "���ڳ���" << endl;
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
				cerr << "���ڳ���" << endl;
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
    if( value_daughter_base.constell == "ˮƿ��" )
    {
        value_daughter_base.strength = 43;
        value_daughter_base.mentality = 43;
        value_daughter_base.charm = 20;
    }
    else if("˫����" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 41;
        value_daughter_base.mentality = 20;
        value_daughter_base.charm = 49;
    }
    else if("������" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 80;
        value_daughter_base.mentality = 15;
        value_daughter_base.charm = 15;
    }
    else if("��ţ��" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 46;
        value_daughter_base.mentality = 30;
        value_daughter_base.charm = 28;
    }
    else if("˫����" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 50;
        value_daughter_base.mentality = 35;
        value_daughter_base.charm = 23;
    }
    else if("��з��" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 40;
        value_daughter_base.mentality = 31;
        value_daughter_base.charm = 33;
    }
    else if("ʨ����" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 85;
        value_daughter_base.mentality = 9;
        value_daughter_base.charm = 11;
    }
    else if("��Ů��" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 35;
        value_daughter_base.mentality = 28;
        value_daughter_base.charm = 36;
    }
    else if("��ƽ��" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 42;
        value_daughter_base.mentality = 33;
        value_daughter_base.charm = 25;
    }
    else if("��Ы��" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 50;
        value_daughter_base.mentality = 25;
        value_daughter_base.charm = 40;
    }
    else if("������" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 57;
        value_daughter_base.mentality = 31;
        value_daughter_base.charm = 15;
    }
    else if("Ħ����" ==  value_daughter_base.constell)
    {
        value_daughter_base.strength = 56;
        value_daughter_base.mentality = 21;
        value_daughter_base.charm = 16;
    }
    //�����ֵ18��
    value_daughter_base.age = TEEN;
    /**test*/
    /*
    cout << "����:" << value_daughter_name << "\t" << "��������:" << YEAR << "��" <<value_birth_month << "��" << value_birth_date << "��" << "\n"
         << "����:" << value_daughter_constell << "\t" << "����:" << endl;
    cout << "����:" << value_daughter_base.strength << "\n"
         << "����:" << value_daughter_base.mentality << "\n"
         << "����:" << value_daughter_base.charm << endl;
    */
    //��Ϸ��ѭ��
    for(int year = TEEN; year < TEEN + GAME_TIME;)
    {
        for(int month = ( (year == TEEN)? value_daughter_base.month : 1 ); month <=12; )
        {
            if( value_daughter_base.month == month )
            {
                cout << "����Ϊ" << value_daughter_base.name << "������,�Ƿ�Ҫ������?" << endl;
            }
            /********************************************************************************************/
            char choice;
            cout << "�Ƿ�������غ�(Y/N):";
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
		cerr << "�·ݳ���" << endl;
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
					cerr << "���ڳ���" << endl;
				else
				{
					value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
					return value_daughter_constell;
				}
				break;
			case 2:
				if (value_birth_date < 1 || value_birth_date > 28)
					cerr << "���ڳ���" << endl;
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
					cerr << "���ڳ���" << endl;
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

