//
// Created by Tony T on 1/14/20.
//

#include "polynomials.h"

Poly::Poly(){ // no parameter sets initial power and coeffecient to 0
    polynomial = new int [ 1 ];
    polynomial[ 0 ] = 0;
    size = 1;
}

Poly::Poly( int power, int coeff ) { // Contructor with 2 parameters power and coeff to create a single polynomial
    polynomial = new int [ power + 1 ];
    for ( int i = 0; i < power + 1 ; i++ ) // clears array
        polynomial[ i ] = 0;
    polynomial[ power ] = coeff;
    size = power + 1;
}

Poly::Poly( int coeff ){  // construtor with single parameter power is set to 0
    polynomial = new int [ 1 ];
    polynomial[ 0 ] = coeff;
    size = 1;
}
Poly::Poly( const Poly &copy ){ // copy constructor, deep copies polynomial
    polynomial = new int [ copy.highestDegree() ];
    for ( int i = 0; i < copy.highestDegree() ; i++ ){ // clears array
        polynomial[ i ] = 0;
    }
    for( int i = 0; i < copy.highestDegree() ; i++)
        setCoeff( i, copy.polynomial[ i ] );
    size = copy.size;
}

int Poly::getCoeff( int power ) const{ // returns the coefficient of the x^power term.
    if (power < 0 || power > this->highestDegree())
        return 0;
    return polynomial[ power ];
}

bool Poly::setCoeff( int power, int coeff ){ // sets the coeffecient at specified polynomial
    if ( power < 0 )
        return false;
    if ( this->highestDegree() < power + 1 ){ // checks if new power is larger than array if so create larger array and copy
        int temp [ power + 1 ];
        for ( int i = 0; i < power + 1 ; i++ ){ // clears array
            temp[ i ] = 0;
        }
        for ( int i = 0 ; i < this->highestDegree() ; i++ )
            temp[i] = polynomial[i];
        polynomial = temp;
    }
    polynomial[ power ] = coeff;
    size = power + 1;
    return true;
}

Poly Poly::operator+( const Poly& p ) const { // adds 2 polynomials together returning the combination without changing the 2
    Poly temp;
    if ( p.highestDegree() > this -> highestDegree() ) {// checks to see which polynomial is larger to set new size
        Poly temp(p);
        for ( int i = 0; i < temp.highestDegree() + 1; ++i )
            temp.polynomial[ i ] = temp.polynomial[ i ] + this->polynomial[ i ];
    }
    else {
        Poly temp( *this );
        for ( int i = 0; i < temp.highestDegree() + 1; ++i )
            temp.polynomial[ i ] = temp.polynomial[ i ] + p.polynomial[ i ];
    }
    return temp;
}

Poly Poly::operator-( const Poly& p )const { // subtracts 2 polynomials together returning the combination without changing the 2
    Poly temp;
    if ( p.highestDegree() > this -> highestDegree() ) { // checks to see which polynomial is larger to set new size
        Poly temp( p );
        for ( int i = 0; i < temp.highestDegree() + 1; ++i )
            temp.polynomial[ i ] = temp.polynomial[ i ] - this->polynomial[ i] ;
    }
    else {
        Poly temp( *this );
        for ( int i = 0; i < temp.highestDegree() + 1; ++i )
            temp.polynomial[ i ] = temp.polynomial[ i ] - p.polynomial[ i ];
    }
    return temp;
}

bool Poly::operator==( const Poly& p ) const {    // Boolean comparison operators tests if polynomials are equal to each other
    if ( p.highestDegree() != this-> highestDegree() )// returns if two polynomial are not equal to each other in terms/coeff/ and power
        return false;
    for ( int i = 0; i < this -> highestDegree() + 1; ++i ) // loop iterates through array to check if values are equal
        if ( p.polynomial[ i ] != this -> polynomial[ i ] )
            return false;
    return true;
}
bool Poly::operator!=( const Poly& p ) const{   // Boolean comparison operators tests if polynomials are not equal to each other
    if ( p.highestDegree() != this-> highestDegree() ) // returns if two polynomial are not equal to each other in terms/coeff/ and power
        return true;
    for ( int i = 0; i < this -> highestDegree() + 1; ++i )
        if ( p.polynomial[ i ] != this -> polynomial[ i ] )
            return true;
    return false;
}

Poly& Poly::operator=( const Poly& p ) {    // Assignment operators
    Poly temp( p ); // deep copy
    *this = temp;
    return *this;
}
Poly& Poly::operator+=( const Poly& p ) {   // Plus equal
    Poly temp;
    if ( p.highestDegree() > this -> highestDegree() ) { // checks to see which polynomial is larger to set new size
        Poly temp( p );
        for ( int i = 0; i < temp.highestDegree(); ++i )
            temp.polynomial[ i ] = temp.polynomial[i] + this->polynomial[ i ];
    }
    else {
        Poly temp(*this);
        for ( int i = 0; i < temp.highestDegree() + 1; ++i )
            temp.polynomial[ i ] = temp.polynomial[ i ] + p.polynomial[ i ];
    }
    *this = temp;
    return *this;
}
Poly& Poly::operator-=( const Poly& p ) {   // minus equals
    Poly temp;
    if ( p.highestDegree() > this -> highestDegree() ) { // checks to see which polynomial is larger to set new size
        Poly temp( p );
        for ( int i = 0; i < temp.highestDegree(); ++i )
            temp.polynomial[ i ] = temp.polynomial[ i ] - this->polynomial[ i ];
    }
    else {
        Poly temp( *this );
        for ( int i = 0; i < temp.highestDegree() + 1; ++i )
            temp.polynomial[ i ] = temp.polynomial[ i ] - p.polynomial[ i ];
    }
    *this = temp;
    return *this;
}

ostream& operator<<( ostream &output, const Poly& p ) {
    for( int i = p.highestDegree() + 1; i >= 0; i-- ){
        if( i != 0){
            if ( p.polynomial[ i ] != 0 ){ // do not print 0s
                if ( i != p.highestDegree() ) { // if its not the highest polynomial add +
                    if ( i == 1 ) // if the degree is equal to 1 its just x no power
                        output << " + " << p.polynomial[ i ] << "x";
                    else
                        output << " + " << p.polynomial[ i ] << "x^" << i;
                }
                else{
                    if ( i == 1 )
                        output << p.polynomial[ i ] << "x";
                    else
                        output << p.polynomial[ i ] << "x^" << i ;
                }

            }
        }
        else{ // 0 doesnt have an x so only the coeffecient is printed
            if ( p.polynomial[ i ] != 0 ) {
                if ( i == p.highestDegree() )
                    output << p.polynomial[ i ];
                else
                    output << " + " << p.polynomial[ i ];
            }
        }
    }
    return output;
}

istream& operator>>( istream& in, Poly& rhs ) { // overloads istream
    int pow, coef;
    string input;
    while ( pow != -1 && coef != -1 ){ // loops until user inputs -1 -1 to exit loop
        in >> input;
        pow = stoi( input );
        in >> input;
        coef = stoi( input );
        rhs.setCoeff( pow, coef);
    }
    return in;
}

int Poly::highestDegree() const{ // returns the highest degree that doesnt have a coeffecient of 0
    int highest = 0;
    for ( int i = 0; i < this -> size ; i++ ){ // checks array to see if size is indeed highest if coeff is not set to 0
        if ( this -> polynomial[i] != 0 )
            highest = i;
    }
    return highest;
}