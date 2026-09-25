#include <iostream>
#include <print>
int main() {

    // Exercice 1.1 ----------------------------------------------------

    //int pv = 0;
    int pv = 42;

    if (pv <= 0)
    {
        std::println("Game Over");
    }

    // Exercice 1.2 --------------------------------------------------

    int munitions = 7;
    // si on divise par deux le nombre de munitions qu'on a et que le résultat est 0 alors c'est pair sinon impair

    // dans ce cas vu que les munitions sont égales à 7 alors on aura toujours un résultat impair
    if (munitions % 2 == 0)
    {
        std::println("pair");

    }
    else
    {
        std::println("impair");

    }
    // Exercice 1.3 -----------------------------------------

    int points_de_vie = 0;

    if (points_de_vie >= 75)
    {
        std::println("Intact!");
    }
    else if (points_de_vie < 75 && points_de_vie > 41)
    {
        std::println("Egratigne...");
    }
    else if (points_de_vie < 41 && points_de_vie > 1)
    {
        std::println("Critique!!");
    }
    if (points_de_vie <= 0)
    {
        std::println("Game Over");

    }


        // Exercice 1.4 ------------------------------------------------

    char touche = 'z';
    std::cin >> touche;
    switch (touche)
    {
        case 'z':
            std::println("Avancer");
            break;
        case 's':
            std::println("Reculer");
            break;
        case 'q':
            std::println("Gauche");
            break;
        case 'd':
            std::println("Droite");
            break;
        default:
            std::println("Touche inconnue ");
            break;
    }
    // Exercice 1.5 ----------------------------------------

    int countdown = 10;
    do
    {
        std::println("{}", countdown);
        countdown--;
    }while (countdown > 0);

    std::println("Decollage!");






}