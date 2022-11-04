#include "Q91.hpp"

int main()
{
        int numEmp, cnt;
        Employee emp[SIZE];
        string dname;

        numEmp = makeEmpRecord(emp);
        cout << "There are " << numEmp << " employees in the structure array. \n\n";
        printEmp(emp, numEmp);

        dname = "HR";
        cout << "************************************************************************************************\n";
        cnt = findEmp(emp, numEmp, dname);
        cout << "Total Employess found : " << cnt << endl;
        cout << "************************************************************************************************\n";
}