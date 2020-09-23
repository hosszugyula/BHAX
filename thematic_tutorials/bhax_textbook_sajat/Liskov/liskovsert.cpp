// ez a T az LSP-ben
class Szamitogep {};
    //public:
        //void teleprolmukodo(){};
        
// ez a két osztály alkotja a "P programot" az LPS-ben
class Program {
public:
    void fgv (Szamitogep &szamitogep) {}
    
};

// itt jönnek az LSP-s S osztályok
class TeleprolMukodoSzm : public Szamitogep {
public:
    virtual void teleprolmukodo() {};

};

class Asztali: public TeleprolMukodoSzm
{};

class Laptop : public Szamitogep // ezt úgy is lehet olvasni, hogy a laptop tud telep nélkül működni
{};

int main ( int argc, char **argv )
{
    Program program;
    Szamitogep szamitogep;
    program.fgv ( szamitogep );
    
    Asztali asztali;
    program.fgv ( asztali );
    
    Laptop laptop;
    program.fgv ( laptop );
}
