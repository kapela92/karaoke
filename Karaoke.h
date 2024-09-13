//---------------------------------------------------------------------------

#ifndef KaraokeH
#define KaraokeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TKaraokee : public TForm
{
__published:	// IDE-managed Components
        TImage *tlo;
        TLabel *Label1;
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Zakocz1;
        TMenuItem *Informacje1;
        TMenuItem *Autor1;
        TMenuItem *Srodowiskowykonania1;
        TSpeedButton *Graj;
        TSpeedButton *aktualizuj;
        TLabel *Label2;
        TLabel *Label3;
        void __fastcall Autor1Click(TObject *Sender);
        void __fastcall Srodowiskowykonania1Click(TObject *Sender);
        void __fastcall GrajClick(TObject *Sender);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall aktualizujClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TKaraokee(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TKaraokee *Karaokee;
//---------------------------------------------------------------------------
#endif
