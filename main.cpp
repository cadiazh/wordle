// bibliotecas
#include "colormod.h"
#include "Saludo.cpp"
#include <bits/stdc++.h>
#include <ctime>
#include <iostream>
#include <string.h>
using namespace std;

// Modificadores de color de colormod
Color::Modifier fault(Color::FG_DEFAULT);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier red(Color::FG_RED);
Color::Modifier yellow(Color::FG_LIGHT_YELLOW);


int main() {
  Saludo s1=Saludo('y');
  s1.saludar();
  s1.pregunta();

  // banco de palabras
  string words[18] = {"CARRO","PERRO","ARENA","AGRIO","CAMION", "POCION", "DRAGON",
                     "RELOJ", "ESCUDO","WORDLE", "MARCO","CAMA","COSA","LATA","LODO","LIMA","PINO","CUNA"};
//selecciona una palabra aleatoriamente y indica el numero de caracteres que contiene
  srand(time(NULL));

  string word = words[rand() % 18];
  int large = word.length();
  char ad[large];
  strcpy(ad, word.c_str());
  // le indica a el usuario cuantas letras tendra la palabra
  if(large==4){
    cout<< red << "Digite una palabra de 4 letras \n";
    cout<< fault;
  }
  else if(large==5){
    cout<< red << "Digite una palabra de 5 letras \n";
    cout<< fault;
  }
  else{
     cout<< red << "Digite una palabra de 6 letras \n";
     cout<< fault;
  }
  string pal;
  char palabra[7];
  int n;
  n = 1;
  int i;
  int c;
 while (n <= 6) {
    
    cin >> palabra;
    c = 0;
    i = 0;
    while (c <= 6) {
      if(strcmp(palabra,ad)==0){
        cout<<green<< palabra;
        cout<<fault<< "\nHas ganado";
        cout<<"Te ha tomado "<<n<<" intentos";
        exit(EXIT_SUCCESS);
      }
      else if (palabra[i] == ad[i]) {
        cout << green << palabra[i];
        cout << fault;
        i++;
      } else if (palabra[i] == ad[0] || palabra[i] == ad[1] ||
                 palabra[i] == ad[2] || palabra[i] == ad[3] ||
                 palabra[i] == ad[4] || palabra[i] == ad[5] ||
                 palabra[i] == ad[6] || palabra[i] == ad[7]) {
        cout << yellow << palabra[i];
        cout << fault;
        i++;
      } else {
        cout << fault << palabra[i];
        i++;
      }
      c++;
    }
    cout << "\n";
    c = 0;
    n++;
  }
  cout<<red<<"HAS PERDIDO";
  return 0;
}
