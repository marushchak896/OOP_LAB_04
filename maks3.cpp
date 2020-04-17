#include "Universitycompetition.h"

Universitycompetition::Universitycompetition()
{
    competitionName = "Uncknown";
    day = 1;
    month = 1;
    year = 2000;
}

Universitycompetition::Universitycompetition(string name, int d, int m, int y)
{
    competitionName = name;
    this->setComoetitionDate(d, m, y);
}

string Universitycompetition::getCompetitionName()
{
    return competitionName;
}

string Universitycompetition::getComoetitionDate()
{
    string date = to_string(day) + "." + to_string(month) + "." + to_string(year);
    return date;
}

void Universitycompetition::setCompetitionName(string name)
{
    if (name.size() > 30)
    {
        throw ("Competition name is to long!");
    }
    competitionName = name;
}

void Universitycompetition::setComoetitionDate(int d, int m, int y)
{
    if (d > 31)
    {
        throw ("Incorrect day value");
    }
    day = d;
    if (m > 12)
    {
        throw ("Incorrect month value");
    }
    month = m;
    year = y;
}

ostream& operator<<(ostream& out, const Universitycompetition& obj)
{
    out << obj.competitionName << '\n'
        << obj.day << "." << obj.month << "."
        << obj.year;
    return out;
}
