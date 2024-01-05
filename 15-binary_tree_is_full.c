#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);

		if ((!tree->left && tree->right) ||
				(tree->left && !tree->right))
			return (0);

		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}
