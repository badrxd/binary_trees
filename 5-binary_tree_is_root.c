#include "binary_trees.h"

/**
* binary_tree_is_root- function
* @node: node
* Return: 0 or 1
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
