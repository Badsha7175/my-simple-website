#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        Student(){
            cout << "The Constructor is executed.\n";
        }
        ~Student(){
            cout << "The destructor is executed.";
        }
};
int main()
{
    Student s1;
    return 0;
}