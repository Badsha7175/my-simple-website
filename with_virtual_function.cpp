#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
        void virtual sound(){
            cout << "Animal sound." << endl;
        }
};

class dog: public animal{
    public:
        void sound() override{
            cout << "Dog bucks." << endl;
        }
};
int main()
{
    animal* a;
    dog d;
    a = &d;
    a->sound();
    return 0;
}