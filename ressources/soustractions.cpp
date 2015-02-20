// effectue les soustractions

#include <iostream>
#include <cstdint>
using namespace std;

//soustraction INT32
/// \brief Fonction de soustraction de deux nombres de type int32_t
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
/// \sa soustraire(int64_t, int64_t), soustraire(double, double), soustraire(float, float)
///
int32_t soustraire (int32_t operandeA, int32_t operandeB)
{
  return (operandeA-operandeB);
}

//soustraction INT64
/// \brief Fonction de multiplication de deux nombres de type int64_t
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
/// \sa soustraire(int32_t, int32_t), soustraire(double, double), soustraire(float, float)
///
int64_t soustraire (int64_t operandeA, int64_t operandeB)
{
  return (operandeA-operandeB);
}

//soustraction float
/// \brief Fonction de soustraction de deux nombres de type float
///
/// \param operandeA un entier float
/// \param operandeB un entier float
/// \sa soustraire(int64_t, int64_t), soustraire(double, double), soustraire(int32_t, int32_t)
///
float soustraire (float operandeA, float operandeB)
{
  return (operandeA-operandeB);
}

//soustraction double
/// \brief Fonction de multiplication de deux nombres de type double
///
/// \param operandeA un entier double
/// \param operandeB un entier double
/// \sa soustraire(int64_t, int64_t), soustraire(int32_t, int32_t), soustraire(float, float)
///
double soustraire (double operandeA, double operandeB)
{
  return (operandeA-operandeB);
}
