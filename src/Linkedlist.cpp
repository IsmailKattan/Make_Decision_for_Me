#include <Linkedlist.hpp>



Linkedlist::Linkedlist()
{
    this->first = 0;
}
Linkedlist::~Linkedlist()
{

}
void Linkedlist :: ekle (Ders veri)
{
    Node* node = new Node();
    node->setveri (veri);
    if(this->first==0)
    {
        first = node;
        return;
    }
    Node* gec = this->first;
    while (gec->getsonraki()!=0)
    {
        gec = gec->getsonraki();
    }
    gec->setsonraki(node);
    node->setonceki(gec);
}
void Linkedlist::yazdir()
{
    cout <<setw(30)<<"ders adi           "<<"|"<<setw(12)<<"basari notu "<<"|"<< setw(5)<<"akts "<<"|"<<endl;
    Node* gec = this->first;
    while (gec != 0)
    {
        gec->getveri().yazdir();
        gec = gec->getsonraki();
    }
}

double Linkedlist::ortalama()
{
    Node* gec = first;
    int toplam_akts=0;
    double toplam_ortalama =0;
    while (gec != 0)
    {
        toplam_ortalama =toplam_ortalama + gec->getveri().d_etkisi();
        toplam_akts =toplam_akts + gec->getveri().getakts();
        gec = gec->getsonraki();
    }
    return (float)toplam_ortalama*4/toplam_akts;
}

void Linkedlist :: oku()
{
    fstream dosya;
    dosya.open("veri.txt",ios ::in);
    if(dosya.is_open())
    {
        string line;
        while(getline(dosya,line))
        {
            int bk_sayaci = 0;
            string str="";
            Ders ders;
            int satirsayac=0;
            for(auto x : line)
            {
                if(x == '/')
                {
                    bk_sayaci++;
                    if(bk_sayaci < 2)
                        continue;
                }
                if(bk_sayaci >=2)
                    break;
                else if (x == '_')
                {
                    str = str+" ";    
                }
                else if(x == ' ')
                {
                    if (satirsayac%3==0)
                    {
                        ders.setad(str);
                        str="";
                    }
                    else if(satirsayac%3==1)
                    {
                        ders.setb_notu(str);
                        str="";

                    }
                    else if (satirsayac%3==2)
                    {
                        int akts = stoi(str);
                        ders.setakts(akts);
                        str="";

                    }
                    satirsayac++;
                }
                else 
                    str= str+x;
            }
            this->ekle(ders);
        }
    }
    // kararver(line);
    dosya.close();
}


void Linkedlist :: kararver(string line)
{
    int bk_sayaci = 0;
    for(auto x : line)
    {
        if(x == '/')
        {
            bk_sayaci++;
            if(bk_sayaci < 2)
                continue;
        }
        if(bk_sayaci >=2)
            break;
        
    }
}






void Linkedlist::setfirst(Node* first)
{
    this->first = first;
}
Node* Linkedlist::getfirst()
{
    return this->first;
}
