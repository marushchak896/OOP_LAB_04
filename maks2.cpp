#include "TwoTeamCompetition.h"

TwoTeamCompetition::TwoTeamCompetition()
{
    firstTeamName = "Uncknown";
    secondTeamName = "Uncknown";
    firstTeamPoints = 0;
    secondTeamPoints = 0;
}

TwoTeamCompetition::TwoTeamCompetition(string name, int d, int m, int y, string name1, string name2) : Universitycompetition(name, d, m, y)
{
    firstTeamName = name1;
    secondTeamName = name2;
}

string TwoTeamCompetition::getFirstTeamName()
{
    return firstTeamName;
}

string TwoTeamCompetition::getSecondTeamName()
{
    return secondTeamName;
}

int TwoTeamCompetition::getFirstTeamPoints()
{
    return firstTeamPoints;
}

int TwoTeamCompetition::getSecondTeamPoints()
{
    return secondTeamPoints;
}

void TwoTeamCompetition::incFirstTeamPoints(int n)
{
    firstTeamPoints += n;
}

void TwoTeamCompetition::incSecondTEamPoints(int n)
{
    secondTeamPoints += n;
}

void TwoTeamCompetition::decFirstTeamPoints(int n)
{
    firstTeamPoints -= n;
}

void TwoTeamCompetition::decSecondTEamPoints(int n)
{
    secondTeamPoints -= n;
}

string TwoTeamCompetition::winnerName()
{
    if (firstTeamPoints > secondTeamPoints)
    {
        return firstTeamName;
    }
    else if (firstTeamPoints < secondTeamPoints)
    {
        return secondTeamName;
    }
    else
    {
        return "Draw!";
    }
}
