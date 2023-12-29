//Write a program with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message (different for mother and daugther).In the main define a daughter and call the display() method on it.

#include<iostream>
#include<conio.h>
using namespace std;


class Mother
{
public:
    Mother(){};
    ~Mother(){};
public:
   virtual void display() {
        cout << "This is Mother Class " << endl;
    }
};

class Daughter: public Mother
{
public:
    Daughter(){};
    ~Daughter(){};

public:
    void display () override{
        cout << "This is Daughter class" << endl; 
    }
};

int main(){
    Daughter daughter;
    Mother mother;
    mother.display();
}

