/*
 * route.h
 */
#ifndef ROUTE_H
#define ROUTE_H

#include "graphalg.h"
#include "list.h"

/* Public Interface */
int route(List *paths, PathVertex *destination, PathVertex **next, int(*match)(
        const void *key1, const void *key2));

#endif
