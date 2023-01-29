#ifndef Linkedlist_hpp
#define Linkedlist_hpp

#include <Node.hpp>
#include <fstream>

class Linkedlist
{
private:
    Node* first;
public:
    Linkedlist();
    ~Linkedlist();
    void ekle(Ders veri);
    void yazdir();
    double ortalama();
    void oku();
    void kararver(string line);

    void setfirst(Node* first);
    Node* getfirst();

};




#endif