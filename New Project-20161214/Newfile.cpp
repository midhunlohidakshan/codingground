#include <iostream>
using namespace std;

class super{
protected:
    int age=28;
public:
    void print(void){
        cout << "My Name is Midhun\n";
    }
};

class subclass : public super{
public:
    void print_age(void){
        cout << "My age is "<< age << "\n";
    }
};
int main(void)
{
subclass object;
object.print();

object.print_age();
return 0;
}