/// <summary>
/// TP Animation de carre version C++.net visual Studio 2017
/// rev 2024
/// VERSION ELEVE a completer
/// </summary>

using namespace System;
using namespace System::Drawing;

/// <summary>
/// Carr� de couleur
/// </summary>
ref class CCarre
{
private:
    int cote;
    int sx;
    int sy;
    Color color;

public:
    CCarre()
    {
        sx = 10;
        sy = 10;
        cote = 20;
        color = Color::Red;
    }

    /// <summary>
    /// initialise sx priv�
    /// </summary>
    /// <param name="x1">Position x du carr�</param>
    void Setsx(int x1)
    {
        sx = x1;
    }

    /// <summary>
    /// retourne sx priv�
    /// </summary>
    /// <returns>Position x du carr�</returns>
    int Getsx()
    {
        return sx;
    }

    /// <summary>
    /// initialise sy priv�
    /// </summary>
    /// <param name="y1">Position y du carr�</param>
    void Setsy(int y1)
    {
        sy = y1;
    }

    /// <summary>
    /// retourne sy priv�
    /// </summary>
    /// <returns>Position y du carr�</returns>
    int Getsy()
    {
        return sy;
    }

    /// <summary>
    /// initialise color priv�
    /// </summary>
    /// <param name="couleur">Couleur du carr�</param>
    void SetColor(Color couleur)
    {
        color = couleur;
    }

    /// <summary>
    /// initialise cote priv�
    /// </summary>
    /// <param name="c">Cot� du carr�</param>
    void SetCote(int c)
    {
        cote = c;
    }

    /// <summary>
    /// retourne cote priv�
    /// </summary>
    /// <returns>Cot� du carr�</returns>
    int GetCote()
    {
        return cote;
    }

    /// <summary>
    /// D�place le carr� suivant un vecteur d�placement dx et dy
    /// </summary>
    /// <param name="dx">Valeur dx du d�placement</param>
    /// <param name="dy">Valeur dy du d�placement</param>
    void Deplacer(int dx, int dy)
    {
        sx += dx;
        sy += dy;
    }

    /// <summary>
    /// Dessine le carr�
    /// </summary>
    /// <param name="form">pointeur sur la fen�tre dans laquelle on dessine.</param>
    void Dessiner(System::Windows::Forms::Form^ form)
    {
        Graphics^ g = form->CreateGraphics();
        g->FillRectangle(gcnew SolidBrush(color), sx, sy, cote, cote);
    }

    /// <summary>
    /// Efface le carr�
    /// </summary>
    /// <param name="form">pointeur sur la fen�tre dans laquelle on dessine.</param>
    void Effacer(System::Windows::Forms::Form^ form)
    {
        Graphics^ g = form->CreateGraphics();
        g->FillRectangle(gcnew SolidBrush(form->BackColor), sx, sy, cote, cote);
    }
};
