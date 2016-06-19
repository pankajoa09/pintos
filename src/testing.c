#include <stdio.h>
#include <lib\kernel\list.h>

struct stct
{
	int id;
	struct list_elem elem;
};

static struct lst;
int main() {
	list_intit(&lst);

	// struct stct * a = (stct *) malloc(sizeof(stct));
	// a -> id = 1;
	// list_push_back(&lst, &a -> elem);

	// struct stct * b = 
	// list_entry (list_pop_back(&lst), struct stct, elem);

	// printf("%d\n", b -> id);

}