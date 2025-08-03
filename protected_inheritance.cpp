#include<bits/stdc++.h>
using namespace std;
class employee{
    protected:
        int salary;
};

class program: public employee{
    public:
        int bonus;
        void set_salary(int s){
            salary = s;
        }

        int get_salary(){
            return salary;
        }

};
int main()
{
    program obj;
    obj.set_salary(15000);
    obj.bonus = 2000;

    cout << "Salary: " << obj.get_salary() << endl;
    cout << "Bonus: " << obj.bonus;

    

    return 0;
}