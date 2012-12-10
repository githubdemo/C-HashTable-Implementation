#include "hashtable.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	hashtable_t tbl;

	// init
	hashtable_init(&tbl, hashtable_hash_fnv, (hashtable_len_function)strlen);
		
    // populate
	printf("Adding values to hash ... ");
	hashtable_set(&tbl, "NAME", "Saumitra");
	hashtable_set(&tbl, "EMAIL", "saumitra.srivastav7@gmail.com");
	hashtable_set(&tbl, "CITY", "Bangalore");
	hashtable_set(&tbl, "COLLEGE", "SRCEM");
	printf("Done\n\n");
	
	// print contents
	printf("Hash Contents:\n");
	hash_print(&tbl, "NAME");
	hash_print(&tbl, "EMAIL");
	hash_print(&tbl, "CITY");
	hash_print(&tbl, "COLLEGE");
	printf("\n");

	// remove college key
	printf("Removing the 'college' key ... ");
	hashtable_remove(&tbl, "COLLEGE");
	printf("Done\n\n");

	// print contents
	printf("Hash after removing college key:\n");
	hash_print(&tbl, "NAME");
	hash_print(&tbl, "EMAIL");
	hash_print(&tbl, "CITY");
	hash_print(&tbl, "COLLEGE");
	printf("\n");
	
	// clear all keys
	printf("Removing all keys from hash ... ");
	hashtable_clear(&tbl);
	printf("Done\n\n");
	
	// print contents after removing all keys
	printf("Hash after removing all keys:\n");
	hash_print(&tbl, "NAME");
	hash_print(&tbl, "EMAIL");
	hash_print(&tbl, "CITY");
	hash_print(&tbl, "COLLEGE");
	printf("\n");

	// destroy
	printf("Destroying hash from memory ... ");
	hashtable_destroy(&tbl);
	printf("Done");
	
	getchar();
	return 0;
}
