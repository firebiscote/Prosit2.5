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
	private: System::Windows::Forms::PictureBox^ pctBox;
	private: System::Windows::Forms::Button^ btnFirst;
	private: System::Windows::Forms::Button^ btnPrevious;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Button^ btnLast;
	private: System::Windows::Forms::GroupBox^ imageSection;
	private: System::Windows::Forms::GroupBox^ processSection;
	private: System::Windows::Forms::GroupBox^ imageSettingSection;
	private: System::Windows::Forms::Button^ process;
	private: System::Windows::Forms::CheckBox^ doDelete;
	private: System::Windows::Forms::CheckBox^ doCopy;
	private: System::Windows::Forms::Button^ targetFind;
	private: System::Windows::Forms::Button^ sourceFind;
	private: System::Windows::Forms::TextBox^ targetTextBox;
	private: System::Windows::Forms::TextBox^ sourceTextBox;
	private: System::Windows::Forms::Label^ targetLabel;
	private: System::Windows::Forms::Label^ sourceLabel;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowser;
	private: System::Windows::Forms::OpenFileDialog^ sourceFile;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		int index = 0;
		int nFile = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void) {
			this->pctBox = (gcnew System::Windows::Forms::PictureBox());
			this->btnFirst = (gcnew System::Windows::Forms::Button());
			this->btnPrevious = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnLast = (gcnew System::Windows::Forms::Button());
			this->imageSection = (gcnew System::Windows::Forms::GroupBox());
			this->processSection = (gcnew System::Windows::Forms::GroupBox());
			this->doDelete = (gcnew System::Windows::Forms::CheckBox());
			this->doCopy = (gcnew System::Windows::Forms::CheckBox());
			this->imageSettingSection = (gcnew System::Windows::Forms::GroupBox());
			this->targetFind = (gcnew System::Windows::Forms::Button());
			this->sourceFind = (gcnew System::Windows::Forms::Button());
			this->targetTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sourceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->targetLabel = (gcnew System::Windows::Forms::Label());
			this->sourceLabel = (gcnew System::Windows::Forms::Label());
			this->process = (gcnew System::Windows::Forms::Button());
			this->folderBrowser = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->sourceFile = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBox))->BeginInit();
			this->imageSection->SuspendLayout();
			this->processSection->SuspendLayout();
			this->imageSettingSection->SuspendLayout();
			this->SuspendLayout();
			// 
			// pctBox
			// 
			this->pctBox->Location = System::Drawing::Point(240, 21);
			this->pctBox->Name = L"pctBox";
			this->pctBox->Size = System::Drawing::Size(600, 300);
			this->pctBox->TabIndex = 0;
			this->pctBox->TabStop = false;
			// 
			// btnFirst
			// 
			this->btnFirst->Location = System::Drawing::Point(148, 141);
			this->btnFirst->Name = L"btnFirst";
			this->btnFirst->Size = System::Drawing::Size(40, 60);
			this->btnFirst->TabIndex = 1;
			this->btnFirst->Text = L"<<";
			this->btnFirst->UseVisualStyleBackColor = true;
			this->btnFirst->Click += gcnew System::EventHandler(this, &Home::btnFirst_Click);
			// 
			// btnPrevious
			// 
			this->btnPrevious->Location = System::Drawing::Point(194, 131);
			this->btnPrevious->Name = L"btnPrevious";
			this->btnPrevious->Size = System::Drawing::Size(40, 80);
			this->btnPrevious->TabIndex = 2;
			this->btnPrevious->Text = L"<";
			this->btnPrevious->UseVisualStyleBackColor = true;
			this->btnPrevious->Click += gcnew System::EventHandler(this, &Home::btnPrevious_Click);
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(846, 131);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(40, 80);
			this->btnNext->TabIndex = 3;
			this->btnNext->Text = L">";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Home::btnNext_Click);
			// 
			// btnLast
			// 
			this->btnLast->Location = System::Drawing::Point(892, 141);
			this->btnLast->Name = L"btnLast";
			this->btnLast->Size = System::Drawing::Size(40, 60);
			this->btnLast->TabIndex = 4;
			this->btnLast->Text = L">>";
			this->btnLast->UseVisualStyleBackColor = true;
			this->btnLast->Click += gcnew System::EventHandler(this, &Home::btnLast_Click);
			// 
			// imageSection
			// 
			this->imageSection->Controls->Add(this->btnLast);
			this->imageSection->Controls->Add(this->btnFirst);
			this->imageSection->Controls->Add(this->pctBox);
			this->imageSection->Controls->Add(this->btnPrevious);
			this->imageSection->Controls->Add(this->btnNext);
			this->imageSection->Location = System::Drawing::Point(12, 12);
			this->imageSection->Name = L"imageSection";
			this->imageSection->Size = System::Drawing::Size(1042, 341);
			this->imageSection->TabIndex = 5;
			this->imageSection->TabStop = false;
			this->imageSection->Text = L"Image viewer";
			// 
			// processSection
			// 
			this->processSection->Controls->Add(this->doDelete);
			this->processSection->Controls->Add(this->doCopy);
			this->processSection->Location = System::Drawing::Point(12, 359);
			this->processSection->Name = L"processSection";
			this->processSection->Size = System::Drawing::Size(234, 112);
			this->processSection->TabIndex = 6;
			this->processSection->TabStop = false;
			this->processSection->Text = L"Process section";
			// 
			// doDelete
			// 
			this->doDelete->AutoSize = true;
			this->doDelete->Location = System::Drawing::Point(117, 49);
			this->doDelete->Name = L"doDelete";
			this->doDelete->Size = System::Drawing::Size(71, 21);
			this->doDelete->TabIndex = 1;
			this->doDelete->Text = L"Delete";
			this->doDelete->UseVisualStyleBackColor = true;
			// 
			// doCopy
			// 
			this->doCopy->AutoSize = true;
			this->doCopy->Location = System::Drawing::Point(33, 49);
			this->doCopy->Name = L"doCopy";
			this->doCopy->Size = System::Drawing::Size(62, 21);
			this->doCopy->TabIndex = 0;
			this->doCopy->Text = L"Copy";
			this->doCopy->UseVisualStyleBackColor = true;
			// 
			// imageSettingSection
			// 
			this->imageSettingSection->Controls->Add(this->targetFind);
			this->imageSettingSection->Controls->Add(this->sourceFind);
			this->imageSettingSection->Controls->Add(this->targetTextBox);
			this->imageSettingSection->Controls->Add(this->sourceTextBox);
			this->imageSettingSection->Controls->Add(this->targetLabel);
			this->imageSettingSection->Controls->Add(this->sourceLabel);
			this->imageSettingSection->Location = System::Drawing::Point(252, 359);
			this->imageSettingSection->Name = L"imageSettingSection";
			this->imageSettingSection->Size = System::Drawing::Size(600, 112);
			this->imageSettingSection->TabIndex = 7;
			this->imageSettingSection->TabStop = false;
			this->imageSettingSection->Text = L"Image setting section";
			// 
			// targetFind
			// 
			this->targetFind->Location = System::Drawing::Point(484, 68);
			this->targetFind->Name = L"targetFind";
			this->targetFind->Size = System::Drawing::Size(75, 23);
			this->targetFind->TabIndex = 5;
			this->targetFind->Text = L"Find...";
			this->targetFind->UseVisualStyleBackColor = true;
			this->targetFind->Click += gcnew System::EventHandler(this, &Home::targetFind_Click);
			// 
			// sourceFind
			// 
			this->sourceFind->Location = System::Drawing::Point(484, 31);
			this->sourceFind->Name = L"sourceFind";
			this->sourceFind->Size = System::Drawing::Size(75, 23);
			this->sourceFind->TabIndex = 4;
			this->sourceFind->Text = L"Find...";
			this->sourceFind->UseVisualStyleBackColor = true;
			this->sourceFind->Click += gcnew System::EventHandler(this, &Home::sourceFind_Click);
			// 
			// targetTextBox
			// 
			this->targetTextBox->Location = System::Drawing::Point(94, 68);
			this->targetTextBox->Name = L"targetTextBox";
			this->targetTextBox->Size = System::Drawing::Size(384, 22);
			this->targetTextBox->TabIndex = 3;
			// 
			// sourceTextBox
			// 
			this->sourceTextBox->Location = System::Drawing::Point(94, 31);
			this->sourceTextBox->Name = L"sourceTextBox";
			this->sourceTextBox->Size = System::Drawing::Size(384, 22);
			this->sourceTextBox->TabIndex = 2;
			// 
			// targetLabel
			// 
			this->targetLabel->AutoSize = true;
			this->targetLabel->Location = System::Drawing::Point(17, 71);
			this->targetLabel->Name = L"targetLabel";
			this->targetLabel->Size = System::Drawing::Size(58, 17);
			this->targetLabel->TabIndex = 1;
			this->targetLabel->Text = L"Target :";
			// 
			// sourceLabel
			// 
			this->sourceLabel->AutoSize = true;
			this->sourceLabel->Location = System::Drawing::Point(17, 34);
			this->sourceLabel->Name = L"sourceLabel";
			this->sourceLabel->Size = System::Drawing::Size(61, 17);
			this->sourceLabel->TabIndex = 0;
			this->sourceLabel->Text = L"Source :";
			// 
			// process
			// 
			this->process->Location = System::Drawing::Point(904, 390);
			this->process->Name = L"process";
			this->process->Size = System::Drawing::Size(116, 55);
			this->process->TabIndex = 8;
			this->process->Text = L"Process";
			this->process->UseVisualStyleBackColor = true;
			// 
			// sourceFile
			// 
			this->sourceFile->FileName = L"";
			this->sourceFile->Filter = L"Image files (*.JPG/*.PNG/*.BMP)|*.JPG;*.PNG;*.BMP|All files (*.*)|*.*";
			this->sourceFile->InitialDirectory = L"C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierImage\\";
			this->sourceFile->Multiselect = true;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 486);
			this->Controls->Add(this->process);
			this->Controls->Add(this->imageSettingSection);
			this->Controls->Add(this->processSection);
			this->Controls->Add(this->imageSection);
			this->Name = L"Home";
			this->Text = L"Home";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBox))->EndInit();
			this->imageSection->ResumeLayout(false);
			this->processSection->ResumeLayout(false);
			this->processSection->PerformLayout();
			this->imageSettingSection->ResumeLayout(false);
			this->imageSettingSection->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnFirst_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->nFile != 0) {
			this->index = 0;
			this->pctBox->Image = gcnew Bitmap(this->sourceFile->FileNames[this->index], true);
		}
	}
	private: System::Void btnPrevious_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index != 0 && this->nFile != 0) {
			this->index--;
			this->pctBox->Image = gcnew Bitmap(this->sourceFile->FileNames[this->index], true);
		}
	}
	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index != nFile-1 && this->nFile != 0) {
			this->index++;
			this->pctBox->Image = gcnew Bitmap(this->sourceFile->FileNames[this->index], true);
		}
	}
	private: System::Void btnLast_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->nFile != 0) {
			this->index = this->nFile - 1;
			this->pctBox->Image = gcnew Bitmap(this->sourceFile->FileNames[this->index], true);
		}
	}
	private: System::Void sourceFind_Click(System::Object^ sender, System::EventArgs^ e) {
		this->sourceFile->ShowDialog();
		this->sourceTextBox->Text = sourceFile->FileNames[0];//sourceFile->FileNames[0];
		this->index = 0;
		this->nFile = 0;
		for each (String^ file in sourceFile->FileNames) {
			this->nFile++;
		}
		if (this->sourceFile->FileName != "") {
			this->pctBox->Image = gcnew Bitmap(this->sourceFile->FileNames[this->index], true);
		}
	}
	private: System::Void targetFind_Click(System::Object^ sender, System::EventArgs^ e) {
		folderBrowser->ShowDialog();
		targetTextBox->Text = folderBrowser->SelectedPath;
	}
};
}
