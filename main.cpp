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







}