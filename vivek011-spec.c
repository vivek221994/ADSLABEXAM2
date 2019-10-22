#include <stdint.h>
#include <assert.h>
#include "vivek011.h"

void test_sort( int32_t data[], uint32_t len) 
{
	uint32_t idx;
	for (idx = 1; idx <= len; ++idx) {
		assert (data[idx] <= data[idx+1]);		
	}
}

void test_heap()
{
	int32_t data[] = { 0, 100, 200, 300, 400,500, 600, 700, 800, 900, 1000, 1100};
	int32_t status[] = {LANDING, TAKE_OFF };
	Heap heap = heap_new(data, 12);	
	heap_insert(&heap, 0,LANDING);
	heap_test(&heap);
	assert(heap_get_min(&heap) == 0);
	assert(heap_extract_min(&heap) == 0);
	heap_test(&heap);
	assert(heap_size(&heap) == 12);

	heap_sort(&heap);
	test_sort(heap.data, 12);

}

int main()
{
	test_heap();
	return 0;
}