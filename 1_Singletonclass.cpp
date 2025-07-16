#include <iostream>
#include <string>
using namespace std;

class Singleton{
private:
    static Singleton* instance;

    Singleton(){}

public:
    Singleton(const Singleton &t){delete this;} // Copy constructor

    static Singleton* getinstance(){
        if(instance == nullptr){
            instance = new Singleton();
        }
        return instance;
    }
};

Singleton* Singleton::instance = nullptr;

int main(){

    Singleton* s1 = Singleton::getinstance();
    Singleton* s2 = Singleton::getinstance();

    if(s1 == s2){
        cout << "Both pointers point to the same instance." << endl;
    } else {
        cout << "Pointers point to different instances." << endl;
    }

    return 0;

}