#include "node.h"
#include "stack.h"
#include <iostream>

int main()
{

    Stack s;
    for (int i = 0; i < 10; i++)
    {
        s.push(i);
    }

    std::cout << "Length: " << s.getLength() << std::endl;
    s.printStack();
}