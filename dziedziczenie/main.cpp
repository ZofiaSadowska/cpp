#include <iostream>

using namespace std;

class Nauczyciel{
public:
    Nauczyciel()
    {
        cout<<"Jestesmy nauczycielami w zsme"<<endl;
    }
    void Show(string x)
    {
        cout<<x<<endl;
    }
    ~Nauczyciel(){cout<<"Destruktor"<<endl;}

};

class Dobry: public Nauczyciel
{
public:
    Dobry()
    {
        cout<<"Jestesmy dobrymi nauczycielami :D"<<endl;
    }
    ~Dobry()
    {
        cout<<"Destruktor"<<endl;
    }

};

class Zly:public Nauczyciel{

public:
    Zly(){
    cout<<"Jestesmy zlymi nauczycielami >:P"<<endl;}

    ~Zly(){
    cout<<"Destruktor"<<endl;}

};


class emeryt: public Nauczyciel{

public:
    emeryt(){
    cout<<"Jestem emerytem"<<endl;}
    ~emeryt(){
    cout<<"Destruktor"<<endl;}

};



int main()
{

   Nauczyciel obj;
   string  x = "Marcin Kowalski";
   obj.Show(x);


}



