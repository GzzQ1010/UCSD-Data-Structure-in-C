/*
 * dfs.h
 */
#ifndef DFS_H
#define DFS_H

#include "graph.h"
#include "list.h"

/* Define a structure for vertices in depth-first search. */
typedef struct DfsVertex_ {

    void *data;

    VertexColor color;

} DfsVertex;

/* Public Interface */
int dfs(Graph *graph, List *ordered);

#endif
