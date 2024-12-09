#pragma once

const int N_Max = 100, M_Max = 100;

void Read(int matr[N_Max][M_Max], int& n, int& m);
int maxInt(int matr[N_Max][M_Max], int n, int m);
bool isMaxNinOrderTwice(int matr[N_Max][M_Max], int n, int m);
bool isNonPrime(int x);
int HowManyNonPrime(int x);
void swap(int& a, int& b);
void Sort(int matr[N_Max][M_Max], int n, int m);
void Write(int matr[N_Max][M_Max], int n, int m);