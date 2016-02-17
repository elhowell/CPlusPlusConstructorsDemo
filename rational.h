#ifndef Rational_H
#define Rational_H
class Rational
{
      private:
      int num;
      int denom;
      public:
             Rational();
             Rational(int a,int b);
             Rational operator+(Rational);
             Rational operator*(Rational);
             Rational operator-(Rational);
             Rational operator/(Rational);
             int get_num() const;
             int get_denom() const;
             void output() const;        
};
#endif
