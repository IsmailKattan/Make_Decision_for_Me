#include <Node.hpp>

Node::Node()
{
    this->onceki = 0 ; 
    this->sonraki = 0 ; 
}
Node::~Node()
{

}













void Node::setveri(Ders veri)
{
    this->veri = veri;
}
void Node::setsonraki(Node* sonraki)
{
    this->sonraki = sonraki; 
}
void Node::setonceki(Node* onceki)
{
    this->onceki = onceki; 
}
Ders Node::getveri()
{
    return this->veri;
}
Node* Node::getonceki()
{
    return this->onceki;
}
Node* Node::getsonraki()
{
    return this->sonraki; 
}