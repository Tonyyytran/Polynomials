//
// Created by Tony T on 1/10/20.
//
#ifndef POLY_POLY_H
#define POLY_POLY_H
#include <iostream>
#include <string>

using namespace std;

class Poly {
private:
    int *polynomial; // dynamic array
    int size; // size of the array

public:
    Poly( );    // Constructor: the default is a 0-degree polynomial with 0
    Poly( int power, int coeff ); // Contructor with 2 parameters power and coeff to create a single polynomial
    Poly( int coeff ); // construtor with single parameter power is set to 0
    Poly( const Poly &copy );  // copy constructor, deep copies polynomial

    int getCoeff( int power ) const; // returns the coefficient of the x^power term.
    bool setCoeff( int power, int coeff ); // sets the coeffecient at specified polynomial

    Poly operator+( const Poly& p )const; // adds 2 polynomials together returning the combination without changing the 2
    Poly operator-( const Poly& p )const; // subtracts 2 polynomials together returning the combination without changing the 2
    bool operator==( const Poly& p ) const;    // Boolean comparison operators tests if polynomials are equal to each other
    bool operator!=( const Poly& p ) const;    // returns if two polynomial are not equal to each other in terms/coeff/ and power

    Poly& operator=( const Poly& p );    // Assignment operators
    Poly& operator+=( const Poly& p );   // Plus equal
    Poly& operator-=( const Poly& p );   // minus equals

    int highestDegree() const; // returns highest degree polynomial

    friend ostream& operator<<( ostream &output, const Poly& p ); // overload ostream
    friend istream &operator>>(istream &in, Poly& rhs ); // overload istream

};
#endif //POLY_POLY_H
