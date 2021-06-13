class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << this->numerator << " / " << denominator << endl;
    }
    void simplify()
    {
        int gcd = 1;
        int j = min(numerator, denominator);
        for (int i = 1; i <= j; i++)
        {
            if (numerator % i == 0 and denominator % i == 0)
            {
                gcd = i;
            }
        }
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
    Fraction add(Fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        // numerator=num;
        //denominator=lcm;
        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    Fraction operator+(Fraction const &f2) const //operator overloading
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        // numerator=num;
        //denominator=lcm;
        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }
    Fraction multiply(Fraction const &f2)
    {
        //numerator=numerator*f2.numerator;
        //denominator=denominator*f2.denominator;
        Fraction fnew(numerator * f2.numerator, denominator * f2.denominator);
        fnew.simplify();
        return fnew;
    }
    Fraction operator*(Fraction const &f2) const //operator overloading
    {

        Fraction fnew(numerator * f2.numerator, denominator * f2.denominator);
        fnew.simplify();
        return fnew;
    }
    bool operator==(Fraction const &f2) const
    {
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
    // Pre-increment  (It says first  increment then use)
    Fraction & operator++()
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
    //Post increment (It says first use then increment )   In post increment multiple increment is not possible like (i++)++
    Fraction operator++(int){
        Fraction fnew(numerator,denominator);
        numerator = numerator + denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
  Fraction & operator+=(Fraction const &f2) 
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator=num;
        denominator=lcm;
        simplify();
        return *this;
    }

};