//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox2;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label12;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit7;
        TEdit *Edit8;
        TDateTimePicker *DateTime;
        TGroupBox *GroupBox3;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TComboBox *ComboBox1;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit5;
        TEdit *Edit6;
        TComboBox *ComboBox2;
        TButton *ADD;
        TButton *ButStart;
        TButton *ButEnd;
        TButton *Button4;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        void __fastcall ButStartClick(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall ButEndClick(TObject *Sender);
        void __fastcall ADDClick(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
         int count;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
