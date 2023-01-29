#ifndef Node_hpp
#define Node_hpp

#include <Ders.hpp>

class Node
{
private:
    Ders veri;
    Node* sonraki; 
    Node* onceki;
public:
    Node();
    ~Node();
    void setveri(Ders veri);
    void setsonraki(Node* sonraki);
    void setonceki(Node* onceki);
    Ders getveri();
    Node* getonceki();
    Node* getsonraki();
    
};



#endif