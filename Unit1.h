//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "TOpenGLAPPanel.h"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
    TOpenGLAPPanel *surface;
    void __fastcall FormKeyPress(TObject *Sender, char &Key);
    void __fastcall surfaceInit(TObject *Sender);
    void __fastcall surfaceResize(TObject *Sender);
    void __fastcall surfacePaint(TObject *Sender);
private:	// Anwender-Deklarationen
public:		// Anwender-Deklarationen
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
