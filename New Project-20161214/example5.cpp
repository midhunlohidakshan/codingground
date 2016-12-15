#include<iostream>
using namespace std;

class Globalclass{
    static Globalclass *s_instance;
public:
    void printname(string name){
        
        cout << "My Name is : " << name << "\n";
    }
    static Globalclass *instance()
    {
        cout << "Calling instance function\n";        
        if( !s_instance )
        {
            s_instance= new Globalclass;
        }
        return s_instance;
    }
};
Globalclass* Globalclass::s_instance=0;

int main()
{
    Globalclass::instance()->printname("Midhun Lohidakshan");
    return 0;
}