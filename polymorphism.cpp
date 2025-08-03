#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
        void animal_sound(){
            cout << "The animal makes a sound. \n";
        }
};

class dog: public animal{
    public:
        void animal_sound(){
            cout << "The dog says: bow bow \n";
        }
};

class pig: public animal{
    public:
        void animal_sound(){
            cout << "The pig says: wee wee \n";
        }
};
int main()
{
    animal myani;
    dog mydog;
    pig mypig;

    myani.animal_sound();
    mydog.animal_sound();
    mypig.animal_sound();
    return 0;
}