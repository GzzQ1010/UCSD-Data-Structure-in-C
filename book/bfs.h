/*
 * bfs.h
 */
#ifndef BFS_H
#define BFS_H

#include "graph.h"
#include "list.h"

/* Define a structure for vertices in breadth-first search. */
typedef struct BfsVertex_ {

    void *data;

    VertexColor color;
    int hops;

} BfsVertex;

/* Public Interface */
int bfs(Graph *graph, BfsVertex *start, List *hops);

#endif
