#include<bits/stdc++.h>
using namespace std;
class myclass{
    public:
        void myfunction(){
            cout << "Some content in parent class.\n";
        }
};

class childclass: public myclass{
};

class grandchild: public childclass{

};
int main()
{
    grandchild obj;
    obj.myfunction();
    return 0;
}