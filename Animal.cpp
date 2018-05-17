#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Animal
{
    public:
    virtual void print(string str) = 0;
    // {
    //     cout<<"This is Animal"<<endl;
    // }
};

class Tiger: public Animal{
    public:
    void print(string str)
    {
        cout<<"This is Tiger"<<endl;
    }
};

class Dog: public Animal{
    public:
    void print(string str)
    {
        cout<<"This is Dog"<<"\t"<<str<<endl;
    }
};

class AnimalSelector{
    public:
    map <string, Animal *> m = {{"Tiger", new Tiger()}, {"Dog", new Dog()}};
    
    Animal* getAnimal(string str)
    {
        Animal *mx ;
        // return m;
        // map <string, Animal *> m = {{"Tiger", new Tiger()}, {"Dog", new Dog()}};
        mx = m[str];
        // m.clear();
        return mx;
    }
};
int main() {
    
    AnimalSelector animal_selector;
    Animal* dog = animal_selector.getAnimal("Dog");
    Animal* dog1 = animal_selector.getAnimal("Dog");
    // vector <Animal *> v = {new Tiger(), new Dog()};
    dog->print("lskd");
    // Animal* tiger;
    // tiger = new Tiger();
    dog1->print("lskdjf");
    // tiger->print();
    // v[0]->print();
	cout<<"GfG!";
	return 0;
}
