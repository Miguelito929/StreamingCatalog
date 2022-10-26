#include "Episodio.h"

Episodio::Episodio(){
  num = 0;
  nombre = " ";
  duracion = 0;
}

Episodio::Episodio(int nu, string n, int d){
  num = nu;
  nombre = n;
  duracion = d;
}

int Episodio::getNum() const{
  return num;
}

string Episodio::getNom() const{
  return nombre;
}

int Episodio::getDur() const{
  return duracion;
}

void Episodio::setNum(int nu){
  num=nu;
}

void Episodio::setNom(string n){
  nombre=n;
}

void Episodio::setDur(int d){
  duracion=d;
}

string Episodio::imprime(){
  string s= "\t\tEpisodio #"+ to_string(num)+"  -  Titulo: " + nombre + "  -  Duracion: " + to_string(duracion) + " min \n";
  return s;
}
