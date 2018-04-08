#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

typedef enum {
  OP_RETURN,
} OpCode; // operaton code

typdef struct {
  int count; // number of elements in use
  int capacity; // number of elements we have allocated
  uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif
