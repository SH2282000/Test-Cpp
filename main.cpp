#include "lib.h"
#include <stdexcept>
#include <iostream>

using namespace std;

int main() {
  // Assume a size of 3x3 for all matrices
  // Implementations in lib should of course generalize to arbitrary size for N*N.
  constexpr int N = 3;

  // ========= transpose_in_place =========
  // Initialize 3x3 matrix, assume row major format:
  // 0 1 2
  // 3 4 5
  // 6 7 8
  int *matrix = (int*)malloc(sizeof(int)*N*N), i, j; // dinamyc alloc to generate the pattern matrix in N*N with...
  for(i=0; i<N*N; i++) 
    matrix[i] = i; // type modified to int for space efficiency.

  // Call the transpose function
  transpose_in_place(matrix, N);

  // Check that the transpose worked, i.e. we expect:
  // 0 3 6
  // 1 4 7
  // 2 5 8
  for (i=0; i < N; i++) //more accurate for this pattern, verify the entire matrix
    for (j=0; j < N; j++)
      if (matrix[i*N+j] != i+j*N)
        throw runtime_error("transpose_in_place failed :(");
  cout<<"transpose_in_place successed"<<endl;

  // ========= transpose_into_buffer =========
  // Initialize 3x3 matrix like before, and another one that we will transpose into
  int matrix1[N * N] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  int matrix2[N * N];

  // Call the transpose function
  transpose_into_buffer(matrix1, matrix2, N);

  // Check that the transpose worked, like above:  
  for (i=0; i < N; i++) //more accurate for this pattern, verify the entire matrix
    for (j=0; j < N; j++)
      if (matrix2[i*N+j] != i+j*N)
        throw runtime_error("transpose_into_buffer failed :(");
  cout<<"transpose_into_buffer successed"<<endl;

  // ========= best_hamming_distance =========
  // Find the index of the element in b which has the lowest hamming distance to each element in a
  // i.e. best_idx_i = argmin_j(popcnt(a_i ^ b_j)).
  // If two pairs have the same hamming distance, the one with the lower index must be chosen
  constexpr int M = 3;
  uint8_t a[M] = {0b011101, 0b000001, 0b011100};
  uint8_t b[M] = {0b010001, 0b011101, 0b001101};
  uint8_t best_idxs[M];

  best_hamming_distance(a, b, best_idxs, M);

  // check that he best
  if (best_idxs[1] != 0)
    throw runtime_error("best_hamming_distance failed :(");
  cout<<"best_hamming_distance successed"<<endl;

  return 0;
}
