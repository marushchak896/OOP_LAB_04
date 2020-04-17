#pragma once
#include "Universitycompetition.h"
class TwoTeamCompetition : public Universitycompetition
{
private:
    string firstTeamName;
    string secondTeamName;
    int firstTeamPoints;
    int secondTeamPoints;
public:
    TwoTeamCompetition();
    TwoTeamCompetition(string name, int d, int m, int y, string name1, string name2);

    string getFirstTeamName();
    string getSecondTeamName();
    int getFirstTeamPoints();
    int getSecondTeamPoints();

    void incFirstTeamPoints(int n);
    void incSecondTEamPoints(int n);
    void decFirstTeamPoints(int n);
    void decSecondTEamPoints(int n);

    string winnerName();
};
