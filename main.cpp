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
//Question : pourquoi un do … while plutôt qu'un while ? Que faudrait-il écrire en plus avec un while ?
// Réponse: on utilise un do while plutôt qu'un while pour que le code se lance automatiquement au moins une fois
// si on utilise un while on devrait mettre avant ce while un std::println("choisir un chiffre entre 1 et 3") puis le
// std::cin >> choix pour lancer la boucle une premiere fois puis on devrait répeter ça dans le while pour que la boucle
// ne s'arrete que si on choisi le bon chiffre
    }while (true);

    //Exercice 1.7 -------------------------------------------

    int multiplicateur = 1;

   for (multiplicateur = 1; multiplicateur <= 10; multiplicateur++)
       std::println("7 x {} = {}", multiplicateur, multiplicateur * 7);
       std::println("----------------");
    for (multiplicateur = 10; multiplicateur >= 1; multiplicateur--)
        std::println("7 x {} = {}", multiplicateur, multiplicateur * 7);
    return 0;
}