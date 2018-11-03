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
    cout << "��, �����ڵ�״��..." << "\n"
         << "����:" << value.name << "\n"
         << "����:" << YEAR << "-" << value.month << "-" << value.date << "\n"
         << "����:" << value.constell << "\n"
         << "����:" << value.age << "\n"
         << "��Ǯ:" << value.money << endl;
    cout << "����:" << value.strength;
    for(int i = 0; i < 10; ++i)
        cout << ( (i < value.strength / 10) ? "��" : "��" );
    cout << endl;
    cout << "����:" << value.mentality;
    for(int i = 0; i < 10; ++i)
        cout << ( (i < value.mentality / 10) ? "��" : "��" );
    cout << endl;
    cout << "����:" << value.charm;
    for(int i = 0; i < 10; ++i)
        cout << ( (i < value.charm / 10) ? "��" : "��" );
    cout << endl;
    cout << "��ǰʱ��:" << value.current_year << "��" << value.current_month << "��" << endl;
}












