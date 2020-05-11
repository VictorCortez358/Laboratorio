#include "iostream"
#include "cmath"


using namespace std;
int main(void)
{

   float a;
   float b;
   float c;
   float x1;
   float x2;
   
   
   
   cout <<"Formula Cuadratica"<<endl<<endl;

   cout <<"Ingrese a:";
   cin >> a;

   cout <<"Ingrese b:";
   cin >> b;
   
   cout << "Ingrese c:";
   cin >> c;
   
   x1 = (-b + sqrt(pow(b, 2)-4*a*c))/(2*a);
   x2 = (-b - sqrt(pow(b, 2)-4*a*c))/(2*a);


   cout <<"x1="<<x1<<endl;
   cout <<"x2="<<x2<<endl;
   


   
 














}