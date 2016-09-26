#include <iostream>

using namespace std;

int main()
{
  //variables
  int _data[3],data1[3],data2[3];
  int check = 0;

  //titol
  cout << "\n\n\n\t\tQUANTS SEGONS HAN PASSAT\n\n";

  //introduccio
  cout << "Introdueix les dues hores(HH:MM:SS).\n1>";
  cin >> data1[0];
  cin.ignore();
  cin >> data1[1];
  cin.ignore();
  cin >> data1[2];

  cout << "2>";
  cin >> data2[0];
  cin.ignore();
  cin >> data2[1];
  cin.ignore();
  cin >> data2[2];

  //check
  if (data1[0] <= 24 && data2[0] <= 24 && data1[1] <= 59 && data2[1] <= 59 && data1[2] <= 59 && data2[2] <= 59 )
    {
      check =1;
    }
  
  //computacio
  for(int i = 0;i < 3;i++)
    {
      //es 2-1 pq en l'enunciat es deia que es suposava que la segona sempre seria mes gran
      _data[i] = data2[i]-data1[i];
    }

  //tornada
  cout << "La diferencia horaria entre ";
  cout << data1[0] << ":" << data1[1] << ":" << data1[2] << " i ";
  cout << data2[0] << ":" << data2[1] << ":" << data2[2] << " es de ";
  cout << _data[0]*3600+_data[1]*60+_data[2] << " segons.\n";
  return 0;
}
