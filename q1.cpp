#include <iostream>
using namespace std;

int gcd (int a, int b)
{
  int c;
  if (a==b)
    return a;
    if (b==0)
      return a;
    else
      if (a== 0)
        return b;
      else
        if ((a<10) && (b<10))
          return a*b;
        else
          while (b !=0 )
          {
            c=b;
            b=a%b;
            a=c;
            //cout << b << endl;
          }
          return a;
}

int main()
{
  int numero1,numero2,resultado;
  cout << "First number " << endl;
  cin >> numero1;

  cout << "Second number 2" << endl;
  cin >> numero2;

  //numero1 = numero1-numero2;       //if numero1>numero2
  //numero2 = numero2-numero1;       //if numero2>numero1

  resultado = gcd (numero1, numero2);
  cout << "Resultado: " << resultado << endl;
  return 0;
}
