#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <sstream>

using namespace std;
class fraction
{
public:
    fraction(int n = 0, int d = 1);
    ~fraction();
    fraction(int x);
    fraction(double x);
    fraction(const fraction &other);
    fraction& operator=(const fraction &other);
    fraction& operator=(int other);
    fraction& operator=(double other);
    void setValue(int n = 0, int d = 1);

    fraction& operator+=(const fraction &other);
    fraction& operator-=(const fraction &other);
    fraction& operator*=(const fraction &other);
    fraction& operator/=(const fraction &other);
    fraction& operator^=(const fraction &other);
    fraction& operator+=(int other);
    fraction& operator-=(int other);
    fraction& operator*=(int other);
    fraction& operator/=(int other);
    fraction& operator^=(int other);
    fraction& operator+=(double other);
    fraction& operator-=(double other);
    fraction& operator*=(double other);
    fraction& operator/=(double other);
    fraction& operator^=(double other);

    friend
    fraction& operator+(const fraction &x, const fraction &y);
    friend
    fraction& operator-(const fraction &x, const fraction &y);
    friend
    fraction& operator*(const fraction &x, const fraction &y);
    friend
    fraction& operator/(const fraction &x, const fraction &y);
    friend
    fraction& operator^(const fraction &x, const fraction &y);

    friend
    fraction& operator+(const fraction &x, int y);
    friend
    fraction& operator-(const fraction &x, int y);
    friend
    fraction& operator*(const fraction &x, int y);
    friend
    fraction& operator/(const fraction &x, int y);
    friend
    fraction& operator^(const fraction &x, int y);
    friend
    fraction& operator+(int x, const fraction &y);
    friend
    fraction& operator-(int x, const fraction &y);
    friend
    fraction& operator*(int x, const fraction &y);
    friend
    fraction& operator/(int x, const fraction &y);
    friend
    fraction& operator^(int x, const fraction &y);

    friend
    fraction& operator+(const fraction &x, double y);
    friend
    fraction& operator-(const fraction &x, double y);
    friend
    fraction& operator*(const fraction &x, double y);
    friend
    fraction& operator/(const fraction &x, double y);
    friend
    fraction& operator^(const fraction &x, double y);
    friend
    fraction& operator+(double x, const fraction &y);
    friend
    fraction& operator-(double x, const fraction &y);
    friend
    fraction& operator*(double x, const fraction &y);
    friend
    fraction& operator/(double x, const fraction &y);
    friend
    fraction& operator^(double x, const fraction &y);

    friend
    bool operator==(const fraction &x, const fraction &y);
    friend
    bool operator!=(const fraction &x, const fraction &y);
    friend
    bool operator<=(const fraction &x, const fraction &y);
    friend
    bool operator>=(const fraction &x, const fraction &y);
    friend
    bool operator<(const fraction &x, const fraction &y);
    friend
    bool operator>(const fraction &x, const fraction &y);

    friend
    bool operator==(const fraction &x, int y);
    friend
    bool operator!=(const fraction &x, int y);
    friend
    bool operator<=(const fraction &x, int y);
    friend
    bool operator>=(const fraction &x, int y);
    friend
    bool operator<(const fraction &x, int y);
    friend
    bool operator>(const fraction &x, int y);
    friend
    bool operator==(int x, const fraction &y);
    friend
    bool operator!=(int x, const fraction &y);
    friend
    bool operator<=(int x, const fraction &y);
    friend
    bool operator>=(int x, const fraction &y);
    friend
    bool operator<(int x, const fraction &y);
    friend
    bool operator>(int x, const fraction &y);

    friend
    bool operator==(const fraction &x, double y);
    friend
    bool operator!=(const fraction &x, double y);
    friend
    bool operator<=(const fraction &x, double y);
    friend
    bool operator>=(const fraction &x, double y);
    friend
    bool operator<(const fraction &x, double y);
    friend
    bool operator>(const fraction &x, double y);
    friend
    bool operator==(double x, const fraction &y);
    friend
    bool operator!=(double x, const fraction &y);
    friend
    bool operator<=(double x, const fraction &y);
    friend
    bool operator>=(double x, const fraction &y);
    friend
    bool operator<(double x, const fraction &y);
    friend
    bool operator>(double x, const fraction &y);

    friend
    ostream& operator<<(ostream& out, const fraction &frac);

    friend
    istream& operator>>(istream& in, fraction &frac);

protected:
    int& numerator();
    int& denominator();
    void reduce();

private:
    int num, denom;
    void copy(const fraction& other);
    int gcd(int p, int q);


};

#endif // FRACTION_H
