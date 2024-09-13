//---------------------------------------------------------------------------

#ifndef SrodowiskoH
#define SrodowiskoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TSrod : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TImage *Image1;
        TImage *Image2;
private:	// User declarations
public:		// User declarations
        __fastcall TSrod(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSrod *Srod;
//---------------------------------------------------------------------------
#endif
