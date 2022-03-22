/*Ceti Colomos
Docente: Luis Manuel Morales Medina
Hector Mauricio Rodriguez Salazar 21310416
Grupo y Grado 2P2*/


//Bibliotecas
#include <stdlib.h>
#include <iostream>

using namespace std;


//      ----Clases----

//Clase Padre "Unidad"
class Unidad{

    private:
        string name;
        int life;

    public:
        Unidad(string , int);
        void mostrarUnidad();
};



//      ----Constructores----


//Constructor Padre "Unidad"
Unidad::Unidad(string _name , int _life){
    name = _name;
    life = _life;
}





//      ----Metodos----


//Metodo mostrar de Unidad
void Unidad::mostrarUnidad(){
    cout<<"El nombre de la unidad es: "<<name<<endl;
    cout<<"La vida de la unidad es de: "<<life<<endl;
}








//Funcion Principal
int main(){

    cout<<"\n\n\t\tBienvenido"<<endl;
	cout<<"\t\tHector Mauricio Rodriguez Salazar 21310314"<<endl;
	cout<<"\n\n\t\tPrograma con Herencia"<<endl;

    Unidad unidad1("Caballero" , 80);

    unidad1.mostrarUnidad();

    system("pause");
    return 0;
}













