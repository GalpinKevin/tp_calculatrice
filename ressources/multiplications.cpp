// effectue les multiplications

#include <iostream>
#include <cstdint>
using namespace std;

//multiplication INT32
/// \brief Fonction de multiplication de deux nombres de type int32_t
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
/// \sa multiplier(int64_t, int64_t), multiplier(double, double), multiplier(float, float)
///
int32_t multiplier (int32_t operandeA, int32_t operandeB)
{
  return (operandeA*operandeB);
}

//multiplication INT64
/// \brief Fonction de multiplication de deux nombres de type int64_t
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
/// \sa multiplier(int32_t, int32_t), multiplier(double, double), multiplier(float, float)
///
int64_t multiplier (int64_t operandeA, int64_t operandeB)
{
  return (operandeA*operandeB);
}

//multiplication float
/// \brief Fonction de multiplication de deux nombres de type float
///
/// \param operandeA un float
/// \param operandeB un float
/// \sa multiplier(int64_t, int64_t), multiplier(double, double), multiplier(int32_t, int32_t)
///
float multiplier (float operandeA, float operandeB)
{
  return (operandeA*operandeB);
}

//multiplication double
/// \brief Fonction de multiplication de deux nombres de type double
///
/// \param operandeA un entier double
/// \param operandeB un entier double
/// \sa multiplier(int64_t, int64_t), multiplier(int32_t, int32_t), multiplier(float, float)
///
double multiplier (double operandeA, double operandeB)
{
  return (operandeA*operandeB);
}
