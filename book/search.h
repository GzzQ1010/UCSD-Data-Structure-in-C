/*
 * search.h
 */
#ifndef SEARCH_H
#define SEARCH_H

/*
 * Public interface
 */

int bisearch(void *sorted, const void *target, int size, int esize,
        int (*compare)(const void *key1, const void *key2));

#endif
