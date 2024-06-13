#pragma once
using namespace RegistroLibroClass;
#include "vector"
#include "string"
#include "iostream"
#include <list>
#include <cliext/vector>
#include <msclr\marshal_cppstd.h>
using namespace System::Collections::Generic;
using namespace std;
//#include "ArbolBinarioBusqueda.h"




// Asumiendo que Libro es una clase ref en el espacio de nombres correcto.

namespace RegistroLibroVentana {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Resumen de RegistroLibro
	/// </summary>
	public ref class RegistroLibro : public System::Windows::Forms::Form
	{
	public:
		RegistroLibro(void)
		{
			InitializeComponent();
			arbol = gcnew RegistroLibroClass::ArbolBinarioBusqueda();


			//
			//TODO: agregar código de constructor aquí
			//
		}
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		ArbolBinarioBusqueda^ arbol;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegistroLibro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelNumeroISBN;
	private: System::Windows::Forms::Label^ labelTitulo;
	private: System::Windows::Forms::Label^ labelAutor;
	private: System::Windows::Forms::Label^ labelGenero;

	protected:



	protected:

	protected:



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listaLibros;

	private: System::Windows::Forms::Button^ buttonLista;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::Button^ buttonBuscar;
	private: System::Windows::Forms::Button^ buttonEditar;
	private: System::Windows::Forms::Button^ buttonEliminar;





	private: System::Windows::Forms::TextBox^ textBoxNumeroISBN;
	private: System::Windows::Forms::TextBox^ textBoxTitulo;
	private: System::Windows::Forms::TextBox^ textBoxAutor;
	private: System::Windows::Forms::TextBox^ textBoxGenero;










	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelNumeroISBN = (gcnew System::Windows::Forms::Label());
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->labelAutor = (gcnew System::Windows::Forms::Label());
			this->labelGenero = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listaLibros = (gcnew System::Windows::Forms::ListBox());
			this->buttonLista = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->buttonBuscar = (gcnew System::Windows::Forms::Button());
			this->buttonEditar = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->textBoxNumeroISBN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTitulo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAutor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGenero = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// labelNumeroISBN
			// 
			this->labelNumeroISBN->AutoSize = true;
			this->labelNumeroISBN->Location = System::Drawing::Point(39, 119);
			this->labelNumeroISBN->Name = L"labelNumeroISBN";
			this->labelNumeroISBN->Size = System::Drawing::Size(86, 16);
			this->labelNumeroISBN->TabIndex = 0;
			this->labelNumeroISBN->Text = L"NumeroISBN";
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Location = System::Drawing::Point(39, 158);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(40, 16);
			this->labelTitulo->TabIndex = 1;
			this->labelTitulo->Text = L"Titulo";
			// 
			// labelAutor
			// 
			this->labelAutor->AutoSize = true;
			this->labelAutor->Location = System::Drawing::Point(39, 191);
			this->labelAutor->Name = L"labelAutor";
			this->labelAutor->Size = System::Drawing::Size(38, 16);
			this->labelAutor->TabIndex = 2;
			this->labelAutor->Text = L"Autor";
			// 
			// labelGenero
			// 
			this->labelGenero->AutoSize = true;
			this->labelGenero->Location = System::Drawing::Point(39, 231);
			this->labelGenero->Name = L"labelGenero";
			this->labelGenero->Size = System::Drawing::Size(52, 16);
			this->labelGenero->TabIndex = 3;
			this->labelGenero->Text = L"Genero";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(289, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"REGISTRO LIBROS";
			// 
			// listaLibros
			// 
			this->listaLibros->FormattingEnabled = true;
			this->listaLibros->ItemHeight = 16;
			this->listaLibros->Location = System::Drawing::Point(413, 90);
			this->listaLibros->Name = L"listaLibros";
			this->listaLibros->Size = System::Drawing::Size(418, 372);
			this->listaLibros->TabIndex = 5;
			// 
			// buttonLista
			// 
			this->buttonLista->Location = System::Drawing::Point(42, 306);
			this->buttonLista->Name = L"buttonLista";
			this->buttonLista->Size = System::Drawing::Size(75, 23);
			this->buttonLista->TabIndex = 6;
			this->buttonLista->Text = L"Lista";
			this->buttonLista->UseVisualStyleBackColor = true;
			this->buttonLista->Click += gcnew System::EventHandler(this, &RegistroLibro::buttonLista_Click);
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Location = System::Drawing::Point(243, 306);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(75, 23);
			this->buttonAgregar->TabIndex = 7;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			this->buttonAgregar->Click += gcnew System::EventHandler(this, &RegistroLibro::buttonAgregar_Click);
			// 
			// buttonBuscar
			// 
			this->buttonBuscar->Location = System::Drawing::Point(42, 363);
			this->buttonBuscar->Name = L"buttonBuscar";
			this->buttonBuscar->Size = System::Drawing::Size(75, 23);
			this->buttonBuscar->TabIndex = 8;
			this->buttonBuscar->Text = L"Buscar";
			this->buttonBuscar->UseVisualStyleBackColor = true;
			this->buttonBuscar->Click += gcnew System::EventHandler(this, &RegistroLibro::buttonBuscar_Click);
			// 
			// buttonEditar
			// 
			this->buttonEditar->Location = System::Drawing::Point(243, 363);
			this->buttonEditar->Name = L"buttonEditar";
			this->buttonEditar->Size = System::Drawing::Size(75, 23);
			this->buttonEditar->TabIndex = 9;
			this->buttonEditar->Text = L"Editar";
			this->buttonEditar->UseVisualStyleBackColor = true;
			this->buttonEditar->Click += gcnew System::EventHandler(this, &RegistroLibro::buttonEditar_Click);
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(149, 424);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(75, 23);
			this->buttonEliminar->TabIndex = 10;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &RegistroLibro::buttonEliminar_Click);
			// 
			// textBoxNumeroISBN
			// 
			this->textBoxNumeroISBN->Location = System::Drawing::Point(158, 116);
			this->textBoxNumeroISBN->Name = L"textBoxNumeroISBN";
			this->textBoxNumeroISBN->Size = System::Drawing::Size(100, 22);
			this->textBoxNumeroISBN->TabIndex = 11;
			// 
			// textBoxTitulo
			// 
			this->textBoxTitulo->Location = System::Drawing::Point(158, 152);
			this->textBoxTitulo->Name = L"textBoxTitulo";
			this->textBoxTitulo->Size = System::Drawing::Size(100, 22);
			this->textBoxTitulo->TabIndex = 12;
			// 
			// textBoxAutor
			// 
			this->textBoxAutor->Location = System::Drawing::Point(158, 191);
			this->textBoxAutor->Name = L"textBoxAutor";
			this->textBoxAutor->Size = System::Drawing::Size(100, 22);
			this->textBoxAutor->TabIndex = 13;
			// 
			// textBoxGenero
			// 
			this->textBoxGenero->Location = System::Drawing::Point(158, 228);
			this->textBoxGenero->Name = L"textBoxGenero";
			this->textBoxGenero->Size = System::Drawing::Size(100, 22);
			this->textBoxGenero->TabIndex = 14;
			// 
			// RegistroLibro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 503);
			this->Controls->Add(this->textBoxGenero);
			this->Controls->Add(this->textBoxAutor);
			this->Controls->Add(this->textBoxTitulo);
			this->Controls->Add(this->textBoxNumeroISBN);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonEditar);
			this->Controls->Add(this->buttonBuscar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->buttonLista);
			this->Controls->Add(this->listaLibros);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labelGenero);
			this->Controls->Add(this->labelAutor);
			this->Controls->Add(this->labelTitulo);
			this->Controls->Add(this->labelNumeroISBN);
			this->Name = L"RegistroLibro";
			this->Text = L"RegistroLibro";
			this->Load += gcnew System::EventHandler(this, &RegistroLibro::RegistroLibro_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegistroLibro_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void buttonLista_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Libro^>^ libros = arbol->listarLibro();
		listaLibros->Items->Clear();

		for each (Libro ^ libro in libros) {
			listaLibros->Items->Add(libro->ToString());
		}
	}



	private: System::Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numeroISBN = textBoxNumeroISBN->Text;
		String^ titulo = textBoxTitulo->Text;
		String^ autor = textBoxAutor->Text;
		String^ genero = textBoxGenero->Text;

		Libro^ nuevoLibro = gcnew Libro(numeroISBN, titulo, autor, genero);
		arbol->insertar(nuevoLibro);

		MessageBox::Show("Libro agregado con éxito");
	}



	private: System::Void buttonBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numeroISBN = textBoxNumeroISBN->Text;
		Libro^ libroEncontrado = arbol->buscar(numeroISBN);

		if (libroEncontrado != nullptr) {
			MessageBox::Show(libroEncontrado->ToString());
		}
		else {
			MessageBox::Show("Libro no encontrado");
		}
	}


	private: System::Void buttonEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}


	private: System::Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ numeroISBN = textBoxNumeroISBN->Text;
		arbol->eliminar(numeroISBN);

		MessageBox::Show("Libro eliminado con éxito");
	}


	};
}

