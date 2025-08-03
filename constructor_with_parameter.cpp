#include<iostream>
using namespace std;
class car{
    public:
        string brand, model;
        int year;
        car(string b, string m, int y){
            brand = b;
            model = m;
            year = y;
        }
};
int main(){
    car obj1("BMW", "X5", 1999);
    car obj2("Ford", "Mustang", 1969);
    cout << obj1.brand << " " << obj1.model << " " << obj1.year << endl;
    cout << obj2.brand << " " << obj2.model << " " << obj2.year << endl;
    return 0;
}