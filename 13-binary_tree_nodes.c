#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes in the binary tree with at least one child.
 *         If tree is NULL, return 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);

	return (0);
}
