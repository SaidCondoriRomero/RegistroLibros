#pragma once
#include <vector>
#include <list>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace System;
using namespace System::IO;
using namespace cliext;

using namespace std;
using namespace System::Collections::Generic;

namespace RegistroLibroClass {
    public ref class Libro {
    public:
        property String^ NumeroISBN;
        property String^ Titulo;
        property String^ Autor;
        property String^ Genero;

        Libro(String^ NumeroISBN, String^ Titulo, String^ Autor, String^ Genero);
        Libro();
        virtual String^ ToString() override {
            return "ISBN: " + NumeroISBN + "\r\n" +
                "Titulo: " + Titulo + "\r\n" +
                "Autor: " + Autor + "\r\n" +
                "Genero: " + Genero + "\r\n";
        }

        String^ GetNumeroISBN() { return NumeroISBN; }
        String^ GetTitulo() { return Titulo; }
        String^ GetAutor() { return Autor; }
        String^ GetGenero() { return Genero; }

        void SetNumeroISBN(String^ NumeroISBN) { this->NumeroISBN = NumeroISBN; }
        void SetTitulo(String^ Titulo) { this->Titulo = Titulo; }
        void SetAutor(String^ Autor) { this->Autor = Autor; }
        void SetGenero(String^ Genero) { this->Genero = Genero; }

    };

    public ref class Nodo {
    public:
        Libro^ libro;
        Nodo^ izquierda;
        Nodo^ derecha;

        Nodo(Libro^ libro);
        Nodo();

        Libro^ GetLibro() { return libro; }
        void SetLibro(Libro^ libro) { this->libro = libro; }
        Nodo^ GetIzquierda() { return izquierda; }
        void SetIzquierda(Nodo^ izquierda) { this->izquierda = izquierda; }
        Nodo^ GetDerecha() { return derecha; }
        void SetDerecha(Nodo^ derecha) { this->derecha = derecha; }
    };

    public ref class ArbolBinarioBusqueda {
    private:
        Nodo^ raiz;

        Nodo^ insertarRecursivo(Nodo^ nodo, Libro^ libro);
        Nodo^ buscarRecursivo(Nodo^ nodo, String^ numeroISBN);
        Nodo^ eliminarRecursivo(Nodo^ nodo, String^ numeroISBN);
        Nodo^ minValorNodo(Nodo^ nodo);
        void inOrdenRecursivo(Nodo^ nodo, List<Libro^>^ libros);

    public:
        ArbolBinarioBusqueda() { raiz = nullptr; }

        void insertar(Libro^ libro);
        Libro^ buscar(String^ numeroISBN);
        void eliminar(String^ numeroISBN);

        System::Collections::Generic::List<Libro^>^ listarLibro();
    };
}
