//
// Created by Fear on 10/10/15.
//

#ifndef CELERAONEEX2_HASHMAPCONCURRENTEXCEPTION_H
#define CELERAONEEX2_HASHMAPCONCURRENTEXCEPTION_H

#include <exception>

class HashmapConcurrentException : public std::exception
{
    virtual const char* what() const throw()
    {
        return "Conccurency implementation failed.";
    }
};

#endif //CELERAONEEX2_HASHMAPCONCURRENTEXCEPTION_H