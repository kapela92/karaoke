//---------------------------------------------------------------------------

#ifndef WizytowkaH
#define WizytowkaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TWiz : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TImage *Image1;
        TLabel *Label1;
        TImage *Image2;
        TLabel *Label2;
private:	// User declarations
public:		// User declarations
        __fastcall TWiz(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWiz *Wiz;
//---------------------------------------------------------------------------
#endif
