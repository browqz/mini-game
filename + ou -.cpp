#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int nombrerandom = rand() % 100;
    int tentative;
    int essais = 0;
    char reponse;

    cout << "Jouons a '+ ou -'" << endl;

    do {
        cout << "Veuillez choisir un nombre : ";
        cin >> tentative;
        essais++;

        if (tentative < nombrerandom) {
            cout << "+ !" << endl;
        } else if (tentative > nombrerandom) {
            cout << "- !" << endl;
        } else {
            cout << "Bravo ! Vous avez trouve le nombre  en " << essais << " essais." << endl;
            break;
        }

        cout << "Voulez-vous continuer ? (Y/N) : ";
        cin >> reponse;
    } while (reponse == 'Y');

    cout << "Merci d'avoir utilise mon jeu !" << endl;

    return 0;
}