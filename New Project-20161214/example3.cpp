#include<iostream>
using namespace std;

class super{
    string name="Midhn Lohidakshan";
public:
    int age=27;
};

int main(void)
{
    super obj;
    cout << "My name is : " << obj.name << "\n";
    cout << "My age is : " << obj.age << "\n";
    return 0;
}