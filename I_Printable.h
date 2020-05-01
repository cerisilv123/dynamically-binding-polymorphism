
#ifndef I_Printable_h
#define I_Printable_h

#include <stdio.h>
#include <iostream>

// ======== Interface Class ======== //

// provide Printable support for any object we wish without knowing its implementation at compile time //

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0; // Pure virtual Function
    virtual ~I_Printable() = default;
};

#endif /* I_Printable_hpp */
