#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32
#define LANDING 0
#define TAKE_OFF 1

typedef struct _event_ Event;
typedef struct _event_{
	uint32_t timestamp[HEAP_MAX_SIZE];
	uint32_t aircraft_number[HEAP_MAX_SIZE];
	uint32_t TAKE_OFF_or_LAND[HEAP_MAX_SIZE];
}


Heap 		heap_new(int32_t data[], uint32_t len);
Heap*		heap_sort(Heap *heap);
Heap*		heap_insert(Heap *heap, int32_t key);
Heap*		heap_test(Heap *heap);
int32_t		heap_get_max(Heap *heap);
int32_t		heap_extract_max(Heap *heap);
uint32_t	heap_size(Heap *heap);

#endif