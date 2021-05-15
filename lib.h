#pragma once
#include "cstdint"

void transpose_in_place(int *matrix, int N);
void transpose_into_buffer(int *source_matrix, int *destination_matrix, int N);
void best_hamming_distance(uint8_t *a, uint8_t *b, uint8_t *best_idx, int N);