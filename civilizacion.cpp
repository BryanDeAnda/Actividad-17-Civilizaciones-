#include "civilizacion.h"

Civilizacion::Civilizacion()
{
    
}

/*Civilizacion::Civilizacion(const string &nombre, int ubix, int ubiy, float puntuacion)
{
    this->nombre = nombre;
    this->ubix = ubix;
    this->ubiy = ubiy;
    this->puntuacion = puntuacion;
}*/

void Civilizacion::setNombre(const string &v)
{
    nombre = v;
}
string Civilizacion::getNombre()
{
    return nombre;
}

void Civilizacion::setUbix(float v)
{
    ubix = v;
}
float Civilizacion::getUbix()
{
    return ubix;
}

void Civilizacion::setUbiy(float v)
{
    ubiy = v;
}
float Civilizacion::getUbiy()
{
    return ubiy;
}

void Civilizacion::setPuntuacion(int v)
{
    puntuacion = v;
}

int Civilizacion::getPuntuacion()
{
    return puntuacion;
}