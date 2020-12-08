#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include <iomanip>

using namespace std;

class Civilizacion
{
private:
    string nombre;
    float ubix;
    float ubiy;
    int puntuacion;
public:
    Civilizacion();
    //Civilizacion(const string &nombre, int ubix, int ubiy, float puntuacion);
    void setNombre(const string &v);
    string getNombre();
    void setUbix(float v);
    float getUbix();
    void setUbiy(float v);
    float getUbiy();
    void setPuntuacion(int v);
    int getPuntuacion();

    friend ostream& operator<<(ostream &out, const Civilizacion &p)
    {
        out << left;
        out << setw(10) << p.nombre;
        out << setw(20) << p.ubix;
        out << setw(20) << p.ubiy;
        out << setw(15) << p.puntuacion;
        out <<endl;

        return out;
    } 
    friend istream& operator>>(istream &in, Civilizacion &p)
    {

        cout << "Nombre: ";
        getline(cin, p.nombre);

        cout << "Ubicación en X: ";
        cin >> p.ubix;

        cout << "Ubicación en Y: ";
        cin >> p.ubiy;

        cout << "Puntuación: ";
        cin >> p.puntuacion;

        return in;
    }
    bool operator==(const Civilizacion& c)
    {

        return nombre == c.nombre;
    }

    bool operator==(const Civilizacion& c) const
    {

        return nombre == c.nombre;
    }

    bool operator==(const string& c)
    {

        return nombre == c;
    }

    bool operator==(const string& c) const
    {

        return nombre == c;
    }

    bool operator<(const Civilizacion& c)
    {
        return nombre > c.nombre;
    }

    bool operator<(const Civilizacion& c) const
    {
        return nombre > c.nombre;
    }
};

#endif