#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int Rfull, Lfull;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	Lfull = binary_tree_is_full(tree->left);
	Rfull = binary_tree_is_full(tree->right);
	if (Lfull == 1 && Rfull == 1)
		return (1);
	else
		return (0);
}

