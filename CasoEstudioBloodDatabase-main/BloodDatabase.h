/*
    Clase: BloodDatabase
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle


    Información CRC:
   
    Clase: BloodDatabase


    Responsabilidades:
        - Gestionar una base de datos de donantes de sangre, almacenando
          un conjuto de objetos de tipo `Donor`.
        - Proveer métodos para agregar, eliminar y buscar donantes en la base de datos.
        - Facilitar el manejo de la información almacenada de forma eficiente y
          adecuada para su consulta y modificación.


    Colaboradores:
        - Colabora directamente con la clase `Donor`, ya que administra una colección
          de objetos `Donor`.


    Este es un proyecto del curso FPOO de la Universidad del Valle,
    desarrollado con fines académicos. Puede ser utilizado con fines
    académicos dando los créditos de la autoría.


    El código se basó en el proyecto BloodDatabase, fue traducido al español
    y adaptado a las necesidades del curso.


    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Octubre 2024
*/
#ifndef BLOODDATABASE_H
#define BLOODDATABASE_H


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Donor.h"


class BloodDatabase {
private:
    const std::string fileName = "data.txt";
    std::vector<Donor> donors;


    static void displayProvinces();
    static void displayBloodtype();



public:
    static void clearConsole();
    static void waitForKeyPress();
    static int getValidatedinput(const std::string& prompt); //parte de la solución al bug
    static int getValidatedBloodType(const std::string& prompt);   // 👈 lo agregas aquí
    static long long getValidatedLong(const std::string& prompt);  // 👈 y este también


    void getDonorDetails();
    void writeDataToFile();
    void searchAndDisplay() const;
    void deleteDonor(const std::string& donorName);
};


#endif // BLOODDATABASE_H
