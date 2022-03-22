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

    //Atributos
    private:
        string name;
        int life;

    //Metodos
    public:
        Unidad(string , int); //Constructor
        void mostrarUnidad();
};


//Clase Civil hija de Unidad
class Civil : public Unidad{

    private:
        string build; 
        string repair;

    public:
        Civil(string , int , string , string);
        void mostrarCivil();
};



class Infantry : public Unidad{

    private:
    int damage; 


    public:
        Infantry(string , int , int);
        void mostrarInfantry();
};




//      ----Constructores----


//Constructor Padre "Unidad"
Unidad::Unidad(string _name , int _life){
    name = _name;
    life = _life;
}


//Constructor Civil Hija de Unidad 
Civil::Civil(string _name , int _life , string _build , string _repair) : Unidad(_name , _life){
    build = _build;
    repair = _repair;
}


//Constructor infantry hija de Unidad
Infantry::Infantry(string _name , int _life , int _damage) : Unidad(_name , _life){
    damage = _damage;
}



//      ----Metodos----


//Metodo mostrar de Unidad
void Unidad::mostrarUnidad(){
    cout<<"El nombre de la unidad es: "<<name<<endl;
    cout<<"La vida de la unidad es de: "<<life<<endl;
}


//Metodo mostrar de Civil
void Civil::mostrarCivil(){
    mostrarUnidad();
    cout<<"El puede construir: "<<build<<endl;
    cout<<"EL puede reparar: "<<repair<<endl;
}


//Metodo mostrar de Infantry
void Infantry::mostrarInfantry(){
    cout<<"El daño que tiene esta unidad de infanteria es: "<<damage<<endl;
}





//Funcion Principal
int main(){

    cout<<"\n\n\t\tBienvenido"<<endl;
	cout<<"\t\tHector Mauricio Rodriguez Salazar 21310314"<<endl;
	cout<<"\n\n\t\tPrograma con Herencia"<<endl;

    cout<<"--Unidad--"<<endl;
    //Objeto de unidad
    Unidad unidad1("Caballero" , 80);
    unidad1.mostrarUnidad();

    cout<<"\n\n--Civil--"<<endl;
    //Objeto de civil
    Civil civil1("Aldeano" , 50 , "Edificios , Casas , Cuarteles." , "Unidades de asedio , Edificios , Casas , Cuarteles.");
    civil1.mostrarCivil();

    cout<<"\n\n--Infanteria--"<<endl;
    //Objeto de la infantry
    Infantry infantry1("Espadachin" , 75 , 12);
    infantry1.mostrarInfantry();


    system("pause");
    return 0;
}













