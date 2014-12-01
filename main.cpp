// queue::push/pop
#include "Evaluador.h"
#include <iostream>
#include "tinyxml2.h"
#include <iostream>
#include <list>
using namespace std;
using namespace tinyxml2;

//Fuente del XML:
//http://openweathermap.org/current

//Sugerencia: investigar sobre la funcion atof para convertir string a float

//Dado el formato xml en el ejemplo clima.xml realizar los siguientes ejercicios:
//Devuelve el attributo value del tag temperature
float getTemperature(string nombre_archivo)
{
    XMLDocument arch;
    arch.LoadFile(nombre_archivo.c_str());//abrimos el archivo  XML
    XMLElement* elm = arch.FirstChildElement("current"); //Creamos un apuntador hacia current
    XMLElement* temperature = elm->FirstChildElement("temperature");//creamos otro apuntador dentro de current para buscar temperature

    double aux = atof(temperature->Attribute("value"));// Convertimos el dato encontrado a double
    return aux;//Retornamos el valor encontrado

}

//Devuelve el attributo value del tag humidity
int getHumidity(string nombre_archivo)
{
    XMLDocument arch;
    arch.LoadFile(nombre_archivo.c_str());//abrimos el archivo  XML
    XMLElement* elm = arch.FirstChildElement("current"); //Creamos un apuntador hacia current
    XMLElement* humidity = elm->FirstChildElement("humidity");//creamos otro apuntador dentro de current para buscar humidity

    double aux = atof(humidity->Attribute("value"));// Convertimos el dato encontrado a double
    return aux;//Retornamos el valor encontrado
}

//Devuelve el attributo value del tag pressure
int getPressure(string nombre_archivo)
{
    XMLDocument arch;
    arch.LoadFile(nombre_archivo.c_str());//abrimos el archivo  XML
    XMLElement* elm = arch.FirstChildElement("current"); //Creamos un apuntador hacia current
    XMLElement* pressure = elm->FirstChildElement("pressure");//creamos otro apuntador dentro de current para buscar pressure

    double aux = atof(pressure->Attribute("value"));// Convertimos el dato encontrado a double
    return aux;//Retornamos el valor encontrado
}

//Devuelve el attributo value del tag speed dentro del tag wind
float getWindSpeed(string nombre_archivo)
{
    XMLDocument arch;
    arch.LoadFile(nombre_archivo.c_str());//abrimos el archivo  XML
    XMLElement* elm = arch.FirstChildElement("current"); //Creamos un apuntador hacia current
    XMLElement* wind = elm->FirstChildElement("wind");//creamos otro apuntador dentro de current para buscar wind
    XMLElement* speed = wind->FirstChildElement("speed");//creamos otro apuntador dentro de wind para encontrar speed

    double aux = atof(speed->Attribute("value"));// Convertimos el dato encontrado a double
    return aux;//Retornamos el valor encontrado
}

//Devuelve el attributo name del tag city
string getCityName(string nombre_archivo)
{
    XMLDocument arch;
    arch.LoadFile(nombre_archivo.c_str());//abrimos el archivo  XML
    XMLElement* elm = arch.FirstChildElement("current"); //Creamos un apuntador hacia current
    XMLElement* city = elm->FirstChildElement("city");//creamos otro apuntador dentro de current para buscar city


  return city->Attribute("name"); //Retornamos el valor name que esta dentro de city
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
