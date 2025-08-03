#include<bits/stdc++.h>
using namespace std;
class car{
    public:
        string brand, model;
        int year;
        car(int y){
            year = y;
        }

        car(string b, string m){
            brand = b;
            model = m;
        }
        
        car(string bb, string mm, int yy){
            brand = bb;
            model = mm;
            year = yy;
        }
};
int main()
{
    car obj1(1999);
    car obj2("BMW", "X5");
    car obj3("Ford", "Mustang", 1969);

    cout << obj2.brand << " " << obj2.model << " " << obj1.year << endl;
    cout << obj3.brand << " " << obj3.model << " " << obj3.year << endl;
    return 0;
}