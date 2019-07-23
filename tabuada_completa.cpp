#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int valor_inicio_tab, valor_fim_tabuada, numInicio, numFinal,i,cont;
    bool dadosValidos;

   do{
      dadosValidos = true;
      cout << "Numero inicia a tabuada.: ";
      cin >> valor_inicio_tab;
      cout << "Numero termino da tabuada.: ";
      cin >> valor_fim_tabuada;
      cout << "Inicio do numero.: ";
      cin >> numInicio;
      cout << "Termino do numero.: ";
      cin >> numFinal;
      if ((valor_inicio_tab > valor_fim_tabuada) || (numInicio > numFinal)){
         cout << "Informacoes invalidas\n";
         cout << "Numeros iniciais precisam ser menor que do fim\n";
         dadosValidos = false;
      }else{
         cout << "Numeros validos!!";
         dadosValidos = true;
      }
   }while(dadosValidos == false);
   for(cont = valor_inicio_tab;cont <= valor_fim_tabuada;cont++){
      cout << "\n========================";
      cout << "\nTABUADA DE "<< cont;
      cout << "\n========================\n";
      for(i = numInicio;i <= numFinal;i++){
            cout << cont << " X " << i << " = " << cont * i << "\n";
      }
   }
   cout <<"========================\n";
   system("pause");
   return 0;
}
