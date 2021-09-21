#include<iostream>
#include "crockery.hh"
#include "Stack.hh"
int main()
{
  List* type1{new List( "Cup", 15)};
  List* type2{new List("Dish", 25)};
  List* type3{new List("Fork", 5)};
  List* type4{new List( "Spoon", 5)};
  Stack* stack{new Stack()};
  stack->Push(type1);
  stack->Push(type2);
  stack->Push(type3);
  stack->Push(type4);
  stack->Print();
  stack->Pop();
  stack->Print();
  std::cin.get();
  delete stack;
  return 0;
}