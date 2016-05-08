//
// Created by Brian on 5/6/2016.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#include <string>
#include <cstring>

namespace CS2312{
    template <typename T>   //declares a generic value type of T
    class less{             //classs called less that will be used to compare a lhs and rhs argument
    public:
        less(){}            //default constructor
        ~less(){}           //destructor
        bool operator()(const T &x, const T &y) {
           return x < y;
        }
    };
    //Class Less that will use to std:: string arguments///////
    template<>             //need to call template again for it to work
    class less<std::string>{//create a new class called less that will handle a string argument
    public:
        less(){}
        ~less(){}
        bool operator()(const std::string &x, const std::string &y){
            return x < y;
        }
    };
    //Class Less that will have char as arguments////////
    template<>            //calls the template again
    class less<const char*>{//this less class will use a char as an argument
    public:
        less(){}
        ~less(){}
        bool operator()(const char *x, const char *y){
            //todo look up how to compare char
            return strcmp(x, y) < 0;
        }
    };
}
#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
