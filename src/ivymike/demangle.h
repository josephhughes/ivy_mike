#ifndef __ivy_mike__demangle_h
#define __ivy_mike__demangle_h

// TODO: rename this to runtime.h or rtti.h or something like that

#include <string>
#include <typeinfo>

namespace ivy_mike {
    
 
    
std::string demangle( const char *tname );

template<typename T1, typename T2>
inline bool isa( T2 * ptr ) {
    return typeid(*ptr) == typeid(T1);
}


// TODO: is this a good idea? the pointer version above should win if appropriate
template<typename T1, typename T2>
inline bool isa( T2 & ref ) {
    return typeid(ref) == typeid(T1);
}


// same_type stuff, copied from http://en.wikibooks.org/wiki/C%2B%2B_Programming/Templates/Template_Meta-Programming

template<typename X, typename Y>
struct same_type
{
   enum { result = 0 };
};

template<typename T>
struct same_type<T, T>
{
   enum { result = 1 };
};


}




#endif
