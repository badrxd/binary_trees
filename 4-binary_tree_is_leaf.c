#include "binary_trees.h"

/**
* binary_tree_is_leaf- function
* @node: node
*
* Return: 0 or 1
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
