#include <iostream>
using namespace std;

class Processor{
    int price;
    string model;
public:
    Processor(){
        price = 0;
        model = nullptr;
    }
    void Print(){
        cout << "Price: " << price << "\n" << "Model: " << model << endl;
    }
};

class DynMemory{
    int price;
    string model;
public:
    DynMemory(){
        price = 0;
        model = nullptr;
    }
    void Print(){
        cout << "Price: " << price << "\n" << "Model: " << model << endl;
    }
};

class Videocard{
    int price;
    string model;
public:
    Videocard(){
        price = 0;
        model = nullptr;
    }
    void Print(){
        cout << "Price: " << price << "\n" << "Model: " << model << endl;
    }
};

class WebCamera{
    int price;
    string model;
public:
    WebCamera(){
        price = 0;
        model = nullptr;
    }
    void Print(){
        cout << "Price: " << price << "\n" << "Model: " << model << endl;
    }
};

class Printer{
    int price;
    string model;
public:
    Printer(){
        price = 0;
        model = nullptr;
    }
    void Print(){
        cout << "Price: " << price << "\n" << "Model: " << model << endl;
    }
};

class Mouse{
    int price;
    string model;
public:
    Mouse(){
        price = 0;
        model = nullptr;
    }
    void Print(){
        cout << "Price: " << price << "\n" << "Model: " << model << endl;
    }
};

class Computer{
    Processor p;
    Videocard v;
    DynMemory d;
    WebCamera* w;
    Printer* pr;
    Mouse* m;
public:
    Computer(Processor pr, Videocard vi, DynMemory dy, WebCamera* we, Mouse* mo, Printer* prin){
        p = pr;
        v = vi;
        d = dy;
        w = we;
        m = mo;
        this->pr = prin;
    }
    void Print(){
        cout << "Processor\n";
        p.Print();
        cout << "Videocard\n";
        v.Print();
        cout << "Dynamic memory\n";
        d.Print();
        cout << "Web Camera\n";
        w->Print();
        cout << "Printer\n";
        pr->Print();
        cout << "Mouse\n";
        m->Print();
        
    }
};

int main() {
    Processor p;
    Videocard v;
    DynMemory d;
    WebCamera* w = new WebCamera;
    Printer* pr = new Printer;
    Mouse* m = new Mouse;
    Computer comp(p, v, d, w, m, pr);
    comp.Print();
}
