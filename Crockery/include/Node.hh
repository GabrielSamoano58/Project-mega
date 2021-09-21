#pragma once
#include "crockery.hh"
class Node
{
  private:
    List* list{};
  public:
    Node* next{};
    Node(List*& list);
    ~Node();
    List* GetList() const;
};