#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

class animal{
    
    private:
    
    string name;
    int age;
    bool isHungry;
    
    public:
    
    void display(){
        cout << name << endl;
        cout << age << endl;
        cout << isHungry << endl;
    }
    void feed();
    
}

class mammal :: animal{
    
    public:
    
    string furColor;
    
}

class bird :: animal{
    
    public:
    
    float wingSpan
}

class reptile :: animal{
    
    public:
    
    bool isVenomous;
    
}

class enclosure{
    
    private:
    
    int capacity;
    int currentCount
    
    public:
    
    void addAnimal(animal* a){
        
        
        
    }
    void displayAnimals(){
        
        
        
    }
    
}

class visitor{
    
    private:
    
    string visitorName;
    int ticketsBought;
    
    public:
    
    void displayInfo(){
        
        cout << visitorName << endl;
        cout << ticketsBought << endl;
        
    }
    
}

// ============== MAIN FUNCTION ==============
int main() {
    
    
    return 0;
}
