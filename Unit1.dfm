object Form1: TForm1
  Left = 281
  Top = 170
  Width = 696
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object surface: TOpenGLAPPanel
    Left = 0
    Top = 0
    Width = 688
    Height = 453
    Caption = 'My OpenGL Pa'#28
    Align = alClient
    TabOrder = 0
    PFDFlags = [f_PFD_DRAW_TO_WINDOW, f_PFD_SUPPORT_OPENGL, f_PFD_DOUBLEBUFFER]
    cAccBits = #0
    Font3D_Type.Charset = ANSI_CHARSET
    Font3D_Type.Color = clWindowText
    Font3D_Type.Height = -9
    Font3D_Type.Name = 'Arial'
    Font3D_Type.Style = []
    Font3D_MaxDeviation = 1
    Font3D_Extrustion = 0.100000001490116
    Font2D_Type.Charset = ANSI_CHARSET
    Font2D_Type.Color = clWindowText
    Font2D_Type.Height = -9
    Font2D_Type.Name = 'Arial'
    Font2D_Type.Style = []
    OnInit = surfaceInit
    OnResize = surfaceResize
    OnPaint = surfacePaint
  end
end
