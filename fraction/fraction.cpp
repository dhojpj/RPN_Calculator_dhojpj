#include "fraction.h"

// constructor
fraction::fraction(int n, int d)
{
    num = n;
    denom = d;
}

// destructor
fraction::~fraction()
{
    num = 0;
    denom = 1;
}

fraction::fraction(int x)
{
    num = x;
    denom = 1;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++
fraction::fraction(double x)
{

}


fraction::fraction(const fraction &other)
{
    copy(other);
}

fraction& fraction::operator=(const fraction &other)
{
    if (this != &other)
    {
        num = other.num;
        denom = other.denom;
    }
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++
fraction& fraction::operator=(int other){}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++
fraction& fraction::operator=(double other){}
void fraction::setValue(int n, int d)
{
    numerator() = n;
    denominator() = d;
}

fraction& fraction::operator+=(const fraction &other)
{

}

fraction& fraction::operator-=(const fraction &other){}
fraction& fraction::operator*=(const fraction &other){}
fraction& fraction::operator/=(const fraction &other){}
fraction& fraction::operator^=(const fraction &other){}
fraction& fraction::operator+=(int other){}
fraction& fraction::operator-=(int other){}
fraction& fraction::operator*=(int other){}
fraction& fraction::operator/=(int other){}
fraction& fraction::operator^=(int other){}
fraction& fraction::operator+=(double other){}
fraction& fraction::operator-=(double other){}
fraction& fraction::operator*=(double other){}
fraction& fraction::operator/=(double other){}
fraction& fraction::operator^=(double other){}

void fraction::reduce()
{
    int g = abs(gcd(this->num, this->denom));

    if (g > 1)
    {
        this->num /= g;
        this->denom /= g;
    }

}

int& fraction::numerator()
{
    return num;
}

int& fraction::denominator()
{
    return denom;
}



void fraction::copy(const fraction& other)
{
    num = other.num;
    denom = other.denom;
}

int fraction::gcd(int p, int q)
{
    return !q ? p : gcd(q,p%q);
}





fraction& operator+(const fraction &x, const fraction &y){}

fraction& operator-(const fraction &x, const fraction &y){}

fraction& operator*(const fraction &x, const fraction &y){}

fraction& operator/(const fraction &x, const fraction &y){}

fraction& operator^(const fraction &x, const fraction &y){}


fraction& operator+(const fraction &x, int y){}

fraction& operator-(const fraction &x, int y){}

fraction& operator*(const fraction &x, int y){}

fraction& operator/(const fraction &x, int y){}

fraction& operator^(const fraction &x, int y){}

fraction& operator+(int x, const fraction &y){}

fraction& operator-(int x, const fraction &y){}

fraction& operator*(int x, const fraction &y){}

fraction& operator/(int x, const fraction &y){}

fraction& operator^(int x, const fraction &y){}


fraction& operator+(const fraction &x, double y){}

fraction& operator-(const fraction &x, double y){}

fraction& operator*(const fraction &x, double y){}

fraction& operator/(const fraction &x, double y){}

fraction& operator^(const fraction &x, double y){}

fraction& operator+(double x, const fraction &y){}

fraction& operator-(double x, const fraction &y){}

fraction& operator*(double x, const fraction &y){}

fraction& operator/(double x, const fraction &y){}

fraction& operator^(double x, const fraction &y){}


bool operator==(const fraction &x, const fraction &y){}

bool operator!=(const fraction &x, const fraction &y){}

bool operator<=(const fraction &x, const fraction &y){}

bool operator>=(const fraction &x, const fraction &y){}

bool operator<(const fraction &x, const fraction &y){}

bool operator>(const fraction &x, const fraction &y){}


bool operator==(const fraction &x, int y){}

bool operator!=(const fraction &x, int y){}

bool operator<=(const fraction &x, int y){}

bool operator>=(const fraction &x, int y){}

bool operator<(const fraction &x, int y){}

bool operator>(const fraction &x, int y){}

bool operator==(int x, const fraction &y){}

bool operator!=(int x, const fraction &y){}

bool operator<=(int x, const fraction &y){}

bool operator>=(int x, const fraction &y){}

bool operator<(int x, const fraction &y){}

bool operator>(int x, const fraction &y){}


bool operator==(const fraction &x, double y){}

bool operator!=(const fraction &x, double y){}

bool operator<=(const fraction &x, double y){}

bool operator>=(const fraction &x, double y){}

bool operator<(const fraction &x, double y){}

bool operator>(const fraction &x, double y){}

bool operator==(double x, const fraction &y){}

bool operator!=(double x, const fraction &y){}

bool operator<=(double x, const fraction &y){}

bool operator>=(double x, const fraction &y){}

bool operator<(double x, const fraction &y){}

bool operator>(double x, const fraction &y){}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
ostream& operator<<(ostream& out, const fraction &frac)
{

    if (&out == &cout)
    {
        cout << frac.num << "/" << frac.denom;
    }

}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
istream& operator>>(istream& in, fraction &frac)
{
    if (&in == &cin)
    {
        in >> frac.num >> frac.denom;
    }
}
