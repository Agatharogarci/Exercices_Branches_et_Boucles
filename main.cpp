#include <iostream>
#include <print>
int main() {

    // Exercice 1.1 ----------------------------------------------------

    //int pv = 0;
    int pv = 42;

    if (pv <= 0)
    {
        std::println("Game Over");
    }else
    {
        std::println("Toujours vivant");

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
// si on enleve un break par exemple sur le premier case dans ce cas si on tape 'z'
// la console nous dira avancer et reculer
    char touche = 'z';
    std::print("Que voulez vous faire? 'z': Avancer 's':Reculer 'q': Gauche 'd': Droite");
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

    std::string countdownYesOrNo;


    do
    {
        std::println("Voulez vous lancer le compte a rebours?[Yes/No]");

        std::cin >> countdownYesOrNo;

        if (countdownYesOrNo == "Yes" || countdownYesOrNo == "yes" || countdownYesOrNo == "y") {
            std::println("Compte a rebours lance:");

            do
            {
                std::println("{}", countdown);
                countdown--;
            }while (countdown > 0);

            std::println("Decollage!");
            break;
        }else if (countdownYesOrNo == "No" || countdownYesOrNo == "no" || countdownYesOrNo == "n") {
        }
    }while (true);

    //Exercice 1.6 -------------------------------------------

    int choix = 0;

    do
    {
        std::println("Choisis un chiffre entre 1 et 3:");
        std::cin >> choix;
        if (choix == 1 || choix == 2 || choix == 3)
        {
            std::println("Merci!");
            break;
        }else {
            std::println("Chiffre non reconnu");
        }

    }while (true);


    return 0;
}