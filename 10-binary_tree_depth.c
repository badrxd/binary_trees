#include "binary_trees.h"

/**
* binary_tree_depth - function
* @tree: tree
* Return: yes
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
	{
		return (0);
	}
	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
