#ifndef Ders_hpp
#define Ders_hpp

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;
class Ders
{
private:
    string ad;
    string b_notu;
    int akts;
public:
    Ders();
    ~Ders();
    void yazdir();
    float agirlik();
    double d_etkisi();


    void setad(string ad);
    void setb_notu(string b_notu);
    void setakts(int akts);
    string getad();
    string getb_notu();
    int getakts();
    
};

#endif