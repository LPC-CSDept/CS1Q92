#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct Date
{
        string month;
        int day;
        int year;
};

struct Employee
{
        int id;
        string fname;
        string lname;
        long salary;
        string department;
        Date start;
};

int makeEmpRecord(Employee[]);
void printEmp(Employee[], int);
void printEmp(Employee emp[], int N, int i);
int findEmp(Employee[], int, string);

const int SIZE = 100;
