/// <summary>
/// TP Animation de carre version C++.net visual Studio 2017
/// rev 2024
/// VERSION ELEVE a completer
/// </summary>

using namespace System;
using namespace System::Drawing;

/// <summary>
/// Carré de couleur
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
    /// initialise sx privé
    /// </summary>
    /// <param name="x1">Position x du carré</param>
    void Setsx(int x1)
    {
        sx = x1;
    }

    /// <summary>
    /// retourne sx privé
    /// </summary>
    /// <returns>Position x du carré</returns>
    int Getsx()
    {
        return sx;
    }

    /// <summary>
    /// initialise sy privé
    /// </summary>
    /// <param name="y1">Position y du carré</param>
    void Setsy(int y1)
    {
        sy = y1;
    }

    /// <summary>
    /// retourne sy privé
    /// </summary>
    /// <returns>Position y du carré</returns>
    int Getsy()
    {
        return sy;
    }

    /// <summary>
    /// initialise color privé
    /// </summary>
    /// <param name="couleur">Couleur du carré</param>
    void SetColor(Color couleur)
    {
        color = couleur;
    }

    /// <summary>
    /// initialise cote privé
    /// </summary>
    /// <param name="c">Coté du carré</param>
    void SetCote(int c)
    {
        cote = c;
    }

    /// <summary>
    /// retourne cote privé
    /// </summary>
    /// <returns>Coté du carré</returns>
    int GetCote()
    {
        return cote;
    }

    /// <summary>
    /// Déplace le carré suivant un vecteur déplacement dx et dy
    /// </summary>
    /// <param name="dx">Valeur dx du déplacement</param>
    /// <param name="dy">Valeur dy du déplacement</param>
    void Deplacer(int dx, int dy)
    {
        sx += dx;
        sy += dy;
    }

    /// <summary>
    /// Dessine le carré
    /// </summary>
    /// <param name="form">pointeur sur la fenêtre dans laquelle on dessine.</param>
    void Dessiner(System::Windows::Forms::Form^ form)
    {
        Graphics^ g = form->CreateGraphics();
        g->FillRectangle(gcnew SolidBrush(color), sx, sy, cote, cote);
    }

    /// <summary>
    /// Efface le carré
    /// </summary>
    /// <param name="form">pointeur sur la fenêtre dans laquelle on dessine.</param>
    void Effacer(System::Windows::Forms::Form^ form)
    {
        Graphics^ g = form->CreateGraphics();
        g->FillRectangle(gcnew SolidBrush(form->BackColor), sx, sy, cote, cote);
    }
};
