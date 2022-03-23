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


//Clase hija Civil de Unidad
class Civil : public Unidad{

    private:
        string build; 
        string repair;

    public:
        Civil(string , int , string , string);
        void mostrarCivil();
};


//Clase hija Infantry de Unidad
class Infantry : public Unidad{

    private:
        int damage; 


    public:
        Infantry(string , int , int);
        void mostrarInfantry();
};


//Clase hija InfantrySpecial de Infantry
class InfantrySpecial : public Infantry{

    private:
        string special;


    public:
         InfantrySpecial(string , int , int , string);   
         void mostrarInfantrySpecial();
};


//Clase hija Heroes de InfantrySpecial
class Heroes : public InfantrySpecial{

    private:
        string skill;

    public:
        Heroes(string , int , int , string , string);
        void mostrarHeroes();        

};


//Clase hija UniDistance de Unidad
class UniDistance : public Unidad{

    private:
        int distance;

    public:
        UniDistance(string , int , int);  
        void  mostrarUniDistance();
};


class Cannon : public UniDistance{

    private:
        int damage;

    public:
        Cannon(string , int , int , int);    
        void mostrarCannon();


};


class UniMonted : public Unidad{
    private:
        int speed;

    public:
        UniMonted(string , int, int);    
        void mostrarUniMonted();
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


//Constructor infantrySpecial hija de Infantry
InfantrySpecial::InfantrySpecial(string _name , int _life , int _damage , string _special) : Infantry(_name , _life , _damage){
    special = _special;
}


//Contrutor Heroes hija de infantrySpecial
Heroes::Heroes(string _name , int _life , int _damage , string _special , string _skill) : InfantrySpecial(_name , _life , _damage, _special){
    skill = _skill;
}


//Constructor de UniDistace de Unidad
UniDistance::UniDistance(string _name , int _life , int _distance) : Unidad(_name , _life){
    distance = _distance;
}


//Constructor de Cannons
Cannon::Cannon(string _name , int _life , int _distance , int _damage) : UniDistance(_name , _life , _distance){
    damage = _damage;
}


//Constructor UniMontend
UniMonted::UniMonted(string _name , int _life, int _speed) : Unidad(_name , _life){
    speed = _speed;
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
    mostrarUnidad();
    cout<<"El deteriodo que tiene esta unidad de infanteria es: "<<damage<<endl;
}


//Metodo mostrar InfantrySpecial
void InfantrySpecial::mostrarInfantrySpecial(){
    mostrarInfantry();
    cout<<"La especialidad de la infanteria es: "<<special<<endl;
}


//Metodo mostrar Heroe
void Heroes::mostrarHeroes(){
    mostrarInfantrySpecial();
    cout<<"La habilidad del heroe es: "<<skill<<endl;
}


//Metodo mostrar de UniDistance
void UniDistance::mostrarUniDistance(){
    mostrarUnidad();
    cout<<"El proyectil de la unidad puede llegar hasta: "<<distance<<" metros"<<endl;
}


//Metodo mostrar de Cannon
void Cannon::mostrarCannon(){
    mostrarUniDistance();
    cout<<"El deteriodo que tiene esta maquinaria es: "<<damage<<endl;
}


//Metodo mostrar de UniMontand
void UniMonted::mostrarUniMonted(){
    mostrarUnidad();
    cout<<"La velocidad de la unidad montada es: "<<speed<<" Km/h"<<endl;
}



//Metodo 


//Funcion Principal
int main(){

    cout<<"\n\n\t\tBienvenido"<<endl;
	cout<<"\t\tHector Mauricio Rodriguez Salazar 21310314"<<endl;
	cout<<"\n\n\t\tPrograma con Herencia"<<endl;

    cout<<"\n\n--Unidad--"<<endl;
    Unidad unidad1("Caballero" , 80);
    unidad1.mostrarUnidad();

    cout<<"\n\n--Civil--"<<endl;
    Civil civil1("Aldeano" , 50 , "Edificios , Casas , Cuarteles." , "Unidades de asedio , Edificios , Casas , Cuarteles.");
    civil1.mostrarCivil();

    cout<<"\n\n--Infanteria--"<<endl;
    Infantry infantry1("Hombre con Espada" , 75 , 12);
    infantry1.mostrarInfantry();


    cout<<"\n\n--Infanteria Especial--"<<endl;
    InfantrySpecial infantryspecial1("Espadachin" , 80 , 14 ,  "Hace mas deteriodo por segundo" );
    infantryspecial1.mostrarInfantrySpecial();


    cout<<"\n\n--Heroes--"<<endl;
    Heroes heroes1("william Wallace" , 200 , 18 , "Liderasgo" , "Moverse mas rapido");    
    heroes1.mostrarHeroes();


    cout<<"\n\n--Unidad de distancia--"<<endl;
    UniDistance unidistance1("Arquero", 35 , 6); 
    unidistance1.mostrarUniDistance();


    cout<<"\n\n--Maquinaria--"<<endl;
    Cannon cannon1("Catapulta", 80 , 16 , 250);
    cannon1.mostrarCannon();


    cout<<"\n\n--Unidad Montada--"<<endl;
    UniMonted unimonted1("Jinete" , 90 , 35);
    unimonted1.mostrarUniMonted();

    cout<<"\n\n\t---Fin---"<<endl;
        system("pause");
    return 0;
}



