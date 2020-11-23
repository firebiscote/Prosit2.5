#pragma once

namespace Prosit25 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Home
	/// </summary>
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form {
	public:
		Home(void) {
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Home() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ image1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void) {
			this->image1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image1))->BeginInit();
			this->SuspendLayout();
			// 
			// image1
			// 
			Bitmap^ myImage;
			myImage = gcnew Bitmap(L"C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\a.jpg", true);
			this->image1->Image = myImage;
			this->image1->Location = System::Drawing::Point(240, 50);
			this->image1->Name = L"image1";
			this->image1->Size = System::Drawing::Size(600, 400);
			this->image1->SizeMode = PictureBoxSizeMode::StretchImage;
			this->image1->TabIndex = 0;
			this->image1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(145, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 98);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(879, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 100);
			this->button2->TabIndex = 2;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->image1);
			this->Name = L"Home";
			this->Text = L"Home";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Bitmap^ myImage;
		char image = 'a';
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (image) {
		case 'a': case 'b':
			image = 'a';
			myImage = gcnew Bitmap("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\a.jpg", true);
			break;
		case 'c':
			image = 'b';
			myImage = gcnew Bitmap("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\b.jpg", true);
			break;
		case 'd':
			image = 'c';
			myImage = gcnew Bitmap("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\c.jpg", true);
			break;
		}
		this->image1->Image = myImage;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (image) {
		case 'a': 
			image = 'b';
			myImage = gcnew Bitmap("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\b.jpg", true);
			break;
		case 'b':
			image = 'c';
			myImage = gcnew Bitmap("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\c.jpg", true);
			break;
		case 'c': case 'd':
			image = 'd';
			myImage = gcnew Bitmap("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\d.jpg", true);
			break;
		}
		this->image1->Image = myImage;
	}
	};
}
