#include<Ders.hpp>


Ders::Ders()
{
    this->ad="default_ders";
    this->b_notu="FF";
    this->akts = 0;
}

Ders::~Ders()
{
    
}

void Ders:: yazdir()
{
    cout <<setw(30)<<this->ad<<"|"<<setw(12)<<this->b_notu<<"|"<< setw(5)<<this->akts<<"|"<<endl;
}
//akts*bn/4
float Ders:: agirlik()
{
    string bn = this->b_notu;
    transform(bn.begin(),bn.end(),bn.begin(),::toupper);
    if (bn=="AA")
        return 4;
    else if (bn=="BA"||bn=="AB")
        return 3.5;
    else if (bn=="BB")
        return 3;
    else if (bn=="BC"||bn=="CB")
        return 2.5;
    else if (bn=="CC")
        return 2;
    else if (bn=="CD"||bn=="DC")
        return 1.5;
    else if (bn=="DD")
        return 1;
    else if (bn=="FD"||bn=="DF")
        return 0.5;
    else if (bn=="FF")
        return 0;
    else 
    {
        cout <<this->ad<<" dersin basari notu yanliş girdiniz, 0 olarak kabul edilmiştir"<< endl;
        return 0; 
    }
}

double Ders :: d_etkisi()
{
    float bn = agirlik();
    if (bn>=0&&bn<=4)
    {
        return (float)akts/4*bn;
    }
    else 
    {
        cout << "d_etkisi erorr"<<endl;
        return 0;
    }
}



void Ders :: setad(string ad)
{
    this->ad=ad;
}
void Ders :: setb_notu(string b_notu)
{
    this->b_notu=b_notu;
}
void Ders :: setakts(int akts)
{
    this->akts=akts;
}
string Ders :: getad()
{
    return this->ad;
}
string Ders :: getb_notu()
{
    return this->b_notu;
}
int Ders :: getakts()
{
    return this->akts;
}