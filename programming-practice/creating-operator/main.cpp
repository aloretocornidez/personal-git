#include <iostream>
#include <ostream>

class ComplexCartesian
{
public:
  ComplexCartesian(double re = 0, double im = 0)
  {
    this->re = re;
    this->im = im;
  }

  void print()
  {

    if (this->im < 0)
    {
      std::cout << this->re << " - j" << -this->im << std::endl;
    }
    else if (this->im == 0)
    {
      std::cout << this->re << std::endl;
    }
    else if (this->re == 0 && this->im < 0)
    {
      std::cout << "- j" << -this->im << std::endl;
    }
    else if (this->re == 0)
    {
      std::cout << "j" << this->im << std::endl;
    }
    else
    {
      std::cout << this->re << " + j" << this->im << std::endl;
    }
  }

  friend std::ostream &operator<<(std::ostream &os, const ComplexCartesian &obj)
  {

    if (obj.im < 0)
    {
      return os << obj.re << " -j" << -obj.im;
    }
    else if (obj.im == 0)
    {
      return os << obj.re;
      std::cout << obj.re << std::endl;
    }
    else if (obj.re == 0 && obj.im < 0)
    {
      return os << " +j" << obj.im;
    }
    else if (obj.re == 0)
    {
      return os << "j" << obj.im;
    }
    else
    {
      return os << obj.re << " + j" << obj.im << std::endl;
    }
  }

  ComplexCartesian operator+(ComplexCartesian const &obj)
  {
    ComplexCartesian result;
    result.re = this->re + obj.re;
    result.im = this->im + obj.im;
    return result;
  }

  ComplexCartesian operator-(ComplexCartesian const &obj)
  {
    ComplexCartesian result;
    result.re = this->re - obj.re;
    result.im = this->im - obj.im;
    return result;
  }

  ComplexCartesian operator*(ComplexCartesian const &obj)
  {

    double a = this->re;
    double b = this->im;
    double c = obj.re;
    double d = obj.im;

    ComplexCartesian result;

    result.re = a * c - b * d;
    result.im = a * d + b * c;
    return result;
  }

  ComplexCartesian operator/(ComplexCartesian const &obj)
  {
    ComplexCartesian result;

    double a = this->re;
    double b = this->im;
    double c = obj.re;
    double d = obj.im;

    result.re = (a * c + b * d) / (c * c + d * d);
    result.im = (b * c - a * d) / (c * c + d * d);

    return result;
  }

private:
  double re;
  double im;
};

int main(int argc, char *argv[])
{

  ComplexCartesian num1(2, -5), num2(6, 3);

  num1.print();
  num2.print();

  ComplexCartesian temp = num1 * num2;
  temp.print();

  std::cout << temp << std::endl;

  return 0;
}
