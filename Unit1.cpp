//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "TOpenGLAPPanel"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{}

//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyPress(TObject *Sender, char &Key)
{
    if(Key == 'l')
    {
    }
    else if(Key == 'r')
    {
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::surfaceInit(TObject *Sender)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glShadeModel(GL_FLAT);
    
    surfaceResize(Sender);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::surfaceResize(TObject *Sender)
{
    glViewport(0,0,surface->Width,surface->Height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

    gluPerspective(45.0f,(GLfloat)surface->Width/(GLfloat)surface->Height,1.0f,500.0f);
	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

    surface->Repaint();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::surfacePaint(TObject *Sender)
{
    #define WIDTH 200
    #define HEIGHT 200

    glClear(GL_COLOR_BUFFER_BIT);

    GLubyte pixel[WIDTH][HEIGHT][3];

    for(unsigned int i=0;i<HEIGHT;i++)
        for(unsigned int j=0; j<WIDTH; j++)
        {
            pixel[i][j][0] = 0;
            pixel[i][j][1] = 255;
            pixel[i][j][2] = 0;
        }


    glDrawPixels(WIDTH, HEIGHT, GL_RGB, GL_UNSIGNED_BYTE, pixel);
}
//---------------------------------------------------------------------------
