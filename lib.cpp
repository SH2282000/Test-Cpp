#include "lib.h"
#include <iostream>
#include <bitset>

using namespace std;

void transpose_in_place(int *matrix, int N) { 
	for (int i = 0; i < N; i++)
		for (int j = i+1; j < N; j++)
		{
			matrix[i*N+j] += matrix[i+j*N]; 
		    matrix[i+j*N] = matrix[i*N+j] - matrix[i+j*N]; 
		    matrix[i*N+j] -= matrix[i+j*N];
		}
  return;
}

void transpose_into_buffer(int *source_matrix, int *destination_matrix, int N) { 
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			destination_matrix[i*N+j] = source_matrix[i+j*N];
  return;
}
//didn't found popcount in the std namespace 
unsigned int hamming_distance(uint8_t a, uint8_t b) { //not declared in *.h bcs just used in best_hamming_distance
	unsigned int sum = 0;
	for(int i = 0; i<sizeof(uint8_t)*8; i++)
		sum+=(bitset<8>(a)[i] ^ bitset<8>(b)[i]);
	return sum;
}
void best_hamming_distance(uint8_t *a, uint8_t *b, uint8_t *best_idxs, int N) {
	for (int i = 0; i < N; ++i)
	{
		int minDist = 8;
		for (int j = 0; j < N; ++j)
		{
			int hamDist = hamming_distance(a[j],b[i]);
			if(hamDist<minDist)
			{
				minDist=hamDist;
				best_idxs[i]=j;
			}
		}
	}
  return;
}