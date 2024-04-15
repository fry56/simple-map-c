/*
** EPITECH PROJECT, 2024
** simple-c-map
** File description:
** map_get
*/
#include <map.h>
#include <string.h>

map_node_t *map_get(map_t *map, char *key)
{
    if (map == NULL)
        return NULL;
    map_foreach(map, node) {
        if (strcmp(node->key, key) == 0)
            return node;
    }
    return NULL;
}
