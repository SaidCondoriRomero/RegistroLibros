#include "pch.h"
#include <cliext/vector>

#include "RegistroLibroClass.h"

RegistroLibroClass::Libro::Libro(String^ NumeroISBN, String^ Titulo, String^ Autor, String^ Genero)
{
	this->NumeroISBN = NumeroISBN;
	this->Titulo = Titulo;
	this->Autor = Autor;
	this->Genero = Genero;
}

RegistroLibroClass::Libro::Libro()
{
	this->NumeroISBN = " ";
	this->Titulo = " ";
	this->Autor = " ";
	this->Genero = " ";
}



RegistroLibroClass::Nodo::Nodo(Libro^ libro)
{
	this->libro = libro;
	this->izquierda = nullptr;
	this->derecha = nullptr;
}

RegistroLibroClass::Nodo::Nodo()
{

}

RegistroLibroClass::Nodo^ RegistroLibroClass::ArbolBinarioBusqueda::insertarRecursivo(Nodo^ nodo, Libro^ libro)
{
	if (nodo == nullptr)
	{
		return gcnew Nodo(libro);
	}
	if (String::Compare(libro->NumeroISBN, nodo->libro->NumeroISBN) < 0) {
		nodo->izquierda = insertarRecursivo(nodo->izquierda, libro);
	}
	else {
		nodo->derecha = insertarRecursivo(nodo->derecha, libro);
	}
	Console::WriteLine("Libro Insertado:" + libro->ToString());
	// TODO: Insertar una instrucción "return" aquí

}

RegistroLibroClass::Nodo^ RegistroLibroClass::ArbolBinarioBusqueda::buscarRecursivo(Nodo^ nodo, String^ numeroISBN)
{
	if (nodo == nullptr || nodo->libro->NumeroISBN == numeroISBN)
	{
		return nodo;
	}
	if (String::Compare(numeroISBN, nodo->libro->NumeroISBN) < 0) {
		return buscarRecursivo(nodo->izquierda, numeroISBN);
	}
	else {
		return buscarRecursivo(nodo->derecha, numeroISBN);
	}
	// TODO: Insertar una instrucción "return" aquí

}

RegistroLibroClass::Nodo^ RegistroLibroClass::ArbolBinarioBusqueda::eliminarRecursivo(Nodo^ nodo, String^ numeroISBN)
{
	if (nodo == nullptr)return nodo;
	if (String::Compare(numeroISBN, nodo->libro->NumeroISBN) < 0) {
		nodo->izquierda = eliminarRecursivo(nodo->izquierda, numeroISBN);
	}
	else if (String::Compare(numeroISBN, nodo->libro->NumeroISBN) > 0) {
		nodo->derecha = eliminarRecursivo(nodo->derecha, numeroISBN);
	}
	else {
		if (nodo->izquierda == nullptr) {
			return nodo->derecha;
		}
		else if (nodo->derecha == nullptr) {
			return nodo->izquierda;
		}
		Nodo^ temp = minValorNodo(nodo->derecha);
		nodo->libro = temp->libro;
		nodo->derecha = eliminarRecursivo(nodo->derecha, temp->libro->NumeroISBN);
	}
	return nodo;
	// TODO: Insertar una instrucción "return" aquí

}

RegistroLibroClass::Nodo^ RegistroLibroClass::ArbolBinarioBusqueda::minValorNodo(Nodo^ nodo)
{
	Nodo^ actual = nodo;
	while (actual->izquierda != nullptr) {
		actual = actual->izquierda;
	}
	return actual;
	// TODO: Insertar una instrucción "return" aquí

}

void RegistroLibroClass::ArbolBinarioBusqueda::inOrdenRecursivo(Nodo^ nodo, List<Libro^>^ libros)
{
	if (nodo != nullptr) {
		inOrdenRecursivo(nodo->izquierda, libros);
		libros->Add(nodo->libro);
		inOrdenRecursivo(nodo->derecha, libros);
	}
}

void RegistroLibroClass::ArbolBinarioBusqueda::insertar(Libro^ libro)
{
	raiz = insertarRecursivo(raiz, libro);
}

RegistroLibroClass::Libro^ RegistroLibroClass::ArbolBinarioBusqueda::buscar(String^ numeroISBN)
{
	Nodo^ resultado = buscarRecursivo(raiz, numeroISBN);
	return resultado == nullptr ? nullptr : resultado->libro;
	// TODO: Insertar una instrucción "return" aquí

}

void RegistroLibroClass::ArbolBinarioBusqueda::eliminar(String^ numeroISBN)
{
	raiz = eliminarRecursivo(raiz, numeroISBN);
}

System::Collections::Generic::List<RegistroLibroClass::Libro^>^ RegistroLibroClass::ArbolBinarioBusqueda::listarLibro()
{
	System::Collections::Generic::List<Libro^>^ libros = gcnew System::Collections::Generic::List<Libro^>();
	inOrdenRecursivo(raiz, libros);
	return libros;
	// TODO: Insertar una instrucción "return" aquí
}
