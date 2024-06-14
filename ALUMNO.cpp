#include "ALUMNO.h"


ALUMNO::ALUMNO(int num_mat,string &_turno,int _boleta,string &nombre) :USER(){

no_materias=filas=num_mat;

turno=_turno;
boleta=_boleta;
username=nombre;

matriz=new int *[num_mat];

    for (int i = 0; i < num_mat; ++i) {
        matriz[i] = new int[columnas];
    }



}

ALUMNO::~ALUMNO() {

    for (int i = 0; i< no_materias; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;


}