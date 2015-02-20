// effectue les additions

#include <iostream>
#include <cstdint>
using namespace std;

//addition INT32
/// \brief Fonction d'addition de deux nombres de type int32_t
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
/// \sa ajouter(int64_t, int64_t), ajouter(double, double), ajouter(float, float)
///
int32_t ajouter (int32_t operandeA, int32_t operandeB)
{
  return (operandeA+operandeB);
}

//addition INT64
/// \brief Fonction d'addition de deux nombres de type int64_t
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
/// \sa ajouter(int32_t, int32_t), ajouter(double, double), ajouter(float, float)
///
int64_t ajouter (int64_t operandeA, int64_t operandeB)
{
  return (operandeA+operandeB);
}

//addition float
/// \brief Fonction d'addition de deux nombres de type float
///
/// \param operandeA un float
/// \param operandeB un float
/// \sa ajouter(int64_t, int64_t), ajouter(double, double), ajouter(int32_t, int32_t)
///
float ajouter (float operandeA, float operandeB)
{
  return (operandeA+operandeB);
}

//addition double
/// \brief Fonction d'addition de deux nombres de type double
///
/// \param operandeA un double
/// \param operandeB un double
/// \sa ajouter(int64_t, int64_t), ajouter(int32_t, int32_t), ajouter(float, float)
///
double ajouter (double operandeA, double operandeB)
{
  return (operandeA+operandeB);
}
