#ifndef POO_PROYECT_USER_H
#define POO_PROYECT_USER_H
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;

class USER {
public:
    USER();
    ~USER()=default;
   void actualizar_contrasena(string&);
 //void actualizar_username(string&);      //esta funcion debe ser de USO exclusivo de la clase admin//



protected:

    string password;
    string username;


};


#endif //POO_PROYECT_USER_H
