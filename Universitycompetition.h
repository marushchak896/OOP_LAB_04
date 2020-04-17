#pragma once
#include <iostream>
#include <string>

using namespace std;

class Universitycompetition
{
private:
    string competitionName;
    int day;
    int month;
    int year;
public:
    Universitycompetition();
    Universitycompetition(string name, int d, int m, int y);
    string getCompetitionName();
    string getComoetitionDate();
    void setCompetitionName(string name);
    void setComoetitionDate(int d, int m, int y);

    friend ostream& operator<<(ostream& out, const Universitycompetition& obj);
};
