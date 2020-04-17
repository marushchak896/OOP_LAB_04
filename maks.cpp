/*
Створити базовий клас СПОРТИВНА УНІВЕРСІАДА (задаються назва і дата проведення).
Створити похідний клас ЗМАГАННЯ МІЖ 2 КОМАНДАМИ (задаються дані про двох суперників,
кількість очок (голів), набраних кожним з них проти іншого).
Для введених даних про різні змагання визначити загальну кількість перемог команд кожного університету
і відсортувати університети за спаданням цієї кількості.
*/

#include <iostream>
#include "TwoTeamCompetition.h"

using namespace std;

int main()
{
    TwoTeamCompetition competitions[3];
    cout << "First team name: ";
    string first;
    cin >> first;
    cout << "Second team name: ";
    string second;
    cin >> second;
    for (int i = 0; i < 3; i++)
    {
        cout << "Competition name: ";
        string compname;
        cin >> compname;
        cout << "Competition date (dd.mm.yyyy): ";
        int d, m, y;
        scanf_s("%d.%d.%d.", &d, &m, &y);
        competitions[i] = TwoTeamCompetition(compname, d, m, y, first, second);
        cout << "How many points in this competition will get first team?" << endl;
        int n;
        cin >> n;
        competitions[i].incFirstTeamPoints(n);
        cout << "How many points in this competition will get second team?" << endl;
        cin >> n;
        competitions[i].incSecondTEamPoints(n);
    }
    int wincounter1 = 0;
    int wincounter2 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (competitions[i].winnerName() == first)
        {
            wincounter1++;
        }
        if (competitions[i].winnerName() == second)
        {
            wincounter2++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << competitions[i] << "\n"
            << "Winner name: " << competitions[i].winnerName() << endl;
    }
    if (wincounter1 > wincounter2)
    {
        cout << "1. " << first << endl
            << "2. " << second << endl;
    }
    else
    {
        cout << "1. " << second << endl
            << "2. " << first << endl;
    }
}
