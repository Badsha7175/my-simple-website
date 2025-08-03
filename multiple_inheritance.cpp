#include<bits/stdc++.h>
using namespace std;
class myclass{
    public:
        void myfunction(){
        cout << "My class context.\n";
        }
};

class myanother{
    public:
        void anotherfunction(){
        cout << "My another context.\n";
        }
};

class mychild: public myclass, public myanother{

};
int main()
{
    mychild obj;
    obj.myfunction();
    obj.anotherfunction();
    return 0;
}