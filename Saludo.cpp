#include <iostream>
#include <stdlib.h>
using namespace std;
class Saludo{
  private:
    char confirm;

  public:
    Saludo(char confirm){
      this->confirm=confirm;
    }

    virtual void saludar(){
      cout<<"~~~~~~~~~~~~~Bienvenido~~~~~~~~~~~~~\n\n Deseas jugar a adivinar la palabra?\ny/n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    virtual void pregunta(){
      cin>>this->confirm;
      if(this->confirm=='n'||this->confirm=='N'){
        cout<<"Vuelve cuando quieras jugar";
        exit(EXIT_SUCCESS);
      }
    }
};
