#ifndef POO_PROYECT_ALUMNO_H
#define POO_PROYECT_ALUMNO_H
#include "USER.h"

//ESTA CLASE DEBE SER ACCESIBLE DESDE ADMIN Y MASTER(SOLO CALIFICACIONES)

//EL ALUMNO DEBE SER CAPAZ DE VER SUS CALIFICACIONES//
class ALUMNO:public USER {

public:

    //int num_mat,string &turno,int boleta,string &nombre//
    ALUMNO(int ,string&,int,string& );
    ~ALUMNO();

    void mostrar_calificaciones();
    void actualizar_contrasena_alumno(string&);

private:
    int no_materias;
    string turno;
    int boleta;

    //LA MATRIZ DE CALIFICACIONES DEBE PERMANECER AUN DESPUES DE CERRADO EL PROGRAMA//
    int filas;
    int columnas=5;     //tres filas para los parciales, una para el extra, otra para promedio//

    int **matriz;


};


#endif //POO_PROYECT_ALUMNO_H
