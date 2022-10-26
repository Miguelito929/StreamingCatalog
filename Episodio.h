#ifndef EPISODIO_H
#define EPISODIO
#include <iostream>
#include <string>
using namespace std;

class Episodio{
  public:
    Episodio();
    Episodio(int,string,int);
    int getNum() const;
    string getNom() const;
    int getDur() const;
    void setNum(int);
    void setNom(string);
    void setDur(int);
    string imprime();

  private:
    int duracion,
        num;
    string nombre;
};

#endif
