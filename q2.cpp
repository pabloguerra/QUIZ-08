#include <iostream>
using namespace std;

int triangle (int number)
{

  for (int i=0;i<number ; i++) //el loop empieza en 0 y continua mientras i< number
  {

    for(int j=0; j<i; j++) // loop empieza en 0 y continua mientras j<i
    {
      cout << "T "; //impresión de T
    }
    cout << "\n"; //define un enter
  }

  for(int i=number;i>0;--i)
  {
    for(int j=0;j<i;++j)
    {
      cout<<"T ";
    }
    cout<<"\n"; //define un enter
  }
  return 0;
}
int main ()
{
  int pyramid, number;
  cout << "Lines for the triangle: " << endl;
  cin >> number; //se guarda el número de lineas

  triangle (number); //se asigna number a la función y dentro de ella se realiza la impresión
  return 0;
}
