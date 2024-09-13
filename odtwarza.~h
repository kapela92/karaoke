//---------------------------------------------------------------------------

#ifndef odtwarzaH
#define odtwarzaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
#include <Buttons.hpp>
#include <MPlayer.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TLeci : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Zakocz1;
        TMenuItem *Informacje1;
        TMenuItem *Autor1;
        TMenuItem *Srodowiskowykonania1;
        TImage *Image1;
        TListBox *Lista_piosenek;
        TMemo *Text;
        TSpeedButton *Powtorz;
        TSpeedButton *Inna_piosenka;
        TMediaPlayer *MediaPlayer1;
        TTrackBar *TrackBar1;
        TSpeedButton *ok;
        void __fastcall okClick(TObject *Sender);
        void __fastcall Inna_piosenkaClick(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall PowtorzClick(TObject *Sender);
        void __fastcall Autor1Click(TObject *Sender);
        void __fastcall Srodowiskowykonania1Click(TObject *Sender);
        void __fastcall Zakocz1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TLeci(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLeci *Leci;
//---------------------------------------------------------------------------
#endif
