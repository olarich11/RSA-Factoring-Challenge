#ifndef FACTORS_H
#define FACTORS_H
#define _GNU_SOURCE

#include <vector>
#include <string>
#include <utility>


int pollard_rho_factorization(int number);
void main_pollard_rho(const std::string & file_path);


int find_prime_factor(int n);
bool is_probable_prime(int num, int tests = 5);
void main_rsa_factorizer(const std::string & file_path);

#endif /* FACTORS_H */
