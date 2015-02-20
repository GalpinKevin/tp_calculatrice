// fait avec l'aide de Romain Besland et Alexis Widmer

#include <iostream>
#include <cstdint>
#include "./ressources/additions.cpp"
#include "./ressources/soustractions.cpp"
#include "./ressources/multiplications.cpp"
#include "./ressources/divisions.cpp"
#include "./ressources/modulo.cpp"
using namespace std;

///\brief début du programme main.
///
int main (){

  int rep;

do 
  {

// demande en quel type les operations doivent t'elles être faites
/// \brief procedure pour connaitre le type dans lequel doivent être fait les calculs.
///
///
 cout << "En quel type voulez calculer : \n 0: int32 \n 1: int64 \n 2: float \n 3: double" << endl;
 cin >> rep;

 // fonction INT32
/// \brief si la reponse a la question precedente est 0.
///
 if (rep == 0)
   {

// initialisation des variables
/// \brief initialise les variables.
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
///
     int32_t operandeA, operandeB;

// demande la saisie des valeurs INT32
/// \brief demande la saisie des 2 valeurs.
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
///
cout << "Veuillez saisir la première valeur :" << endl;
cin >> operandeA;

cout << "Veuillez saisir la deuxième valeur :" << endl;
cin >> operandeB;

// RESULTATS
/// \brief renvoi des differents resultats.
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
/// \sa ajouter(int32_t, int32_t), soustraire(int32_t, int32_t), diviser(int32_t, int32_t), multiplier(int32_t, int32_t), modulo(int32_t, int32_t)
///
 cout << "Resulat de l'addition:" << ajouter(operandeA, operandeB) << endl;

 cout << "Resulat de la soustraction:" << soustraire(operandeA, operandeB) << endl;

 cout << "Resulat de la division:" << diviser(operandeA, operandeB) << endl;

 cout << "Resulat de la multiplication:" << multiplier(operandeA, operandeB) << endl;

 cout << "Resulat du modulo:" << modulo(operandeA, operandeB) << endl;
   }

 // fonction INT64
/// \brief si la reponse a la question precedente est 1.
///
 if (rep == 1)
   {

// initialisation des variables
/// \brief initialise les variables.
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
///
     int64_t operandeA, operandeB;

// demande la saisie des valeurs INT64
/// \brief demande la saisie des 2 valeurs.
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
///
cout << "Veuillez saisir la première valeur :" << endl;
cin >> operandeA;

cout << "Veuillez saisir la deuxième valeur :" << endl;
cin >> operandeB;

// RESULTATS
/// \brief renvoi des differents resultats.
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
/// \sa ajouter(int64_t, int64_t), soustraire(int64_t, int64_t), diviser(int64_t, int64_t), multiplier(int64_t, int64_t), modulo(int64_t, int64_t)
///
 cout << "Resulat de l'addition:" << ajouter(operandeA, operandeB) << endl;

 cout << "Resulat de la soustraction:" << soustraire(operandeA, operandeB) << endl;

 cout << "Resulat de la division:" << diviser(operandeA, operandeB) << endl;

 cout << "Resulat de la multiplication:" << multiplier(operandeA, operandeB) << endl;

 cout << "Resulat du modulo:" << modulo(operandeA, operandeB) << endl;
   }

 // fonction float
/// \brief si la reponse a la question precedente est 2.
///
 if (rep == 2)
   {

// initialisation des variables
/// \brief initialise les variables.
///
/// \param operandeA un float
/// \param operandeB un float
///
     float operandeA, operandeB;

// demande la saisie des valeurs float
/// \brief demande la saisie des 2 valeurs.
///
/// \param operandeA un float
/// \param operandeB un float
///
cout << "Veuillez saisir la première valeur :" << endl;
cin >> operandeA;

cout << "Veuillez saisir la deuxième valeur :" << endl;
cin >> operandeB;

// RESULTATS
/// \brief renvoi des differents resultats.
///
/// \param operandeA un float
/// \param operandeB un float
/// \sa ajouter(float, float), soustraire(float, float), diviser(float, float), multiplier(float, float)
///
 cout << "Resulat de l'addition:" << ajouter(operandeA, operandeB) << endl;

 cout << "Resulat de la soustraction:" << soustraire(operandeA, operandeB) << endl;

 cout << "Resulat de la division:" << diviser(operandeA, operandeB) << endl;

 cout << "Resulat de la multiplication:" << multiplier(operandeA, operandeB) << endl;
   }

 // fonction double
/// \brief si la reponse a la question precedente est 3.
///
 if (rep == 3)
   {

// initialisation des variables
/// \brief initialise les variables.
///
/// \param operandeA un double
/// \param operandeB un double
///
     double operandeA, operandeB;

// demande la saisie des valeurs double
/// \brief demande la saisie des 2 valeurs.
///
/// \param operandeA un double
/// \param operandeB un double
///
cout << "Veuillez saisir la première valeur :" << endl;
cin >> operandeA;

cout << "Veuillez saisir la deuxième valeur :" << endl;
cin >> operandeB;

// RESULTATS
/// \brief renvoi des differents resultats.
///
/// \param operandeA un double
/// \param operandeB un double
/// \sa ajouter(double, double), soustraire(double, double), diviser(double, double), multiplier(double, double)
///
 cout << "Resulat de l'addition:" << ajouter(operandeA, operandeB) << endl;

 cout << "Resulat de la soustraction:" << soustraire(operandeA, operandeB) << endl;

 cout << "Resulat de la division:" << diviser(operandeA, operandeB) << endl;

 cout << "Resulat de la multiplication:" << multiplier(operandeA, operandeB) << endl;
   }

 // fonction autre
/// \brief si la reponse a la question precedente est autre chose que demandé.
///
 if (rep != 0 && rep != 1 && rep != 2 && rep != 3)
   {

     cout << "Saisie incorrect, boloss, recommence: " << endl;
   }
  } while (rep != 0 && rep != 1 && rep != 2 && rep != 3);

 return 0;
}
