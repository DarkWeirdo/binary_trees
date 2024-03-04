#include "binary_trees.h"

/**
 * _height - Helper function to calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + _height(tree->left) : 1;
	right_height = tree->right ? 1 + _height(tree->right) : 1;
	return ((left_height > right_height) ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return ((int)_height(tree->left) - (int)_height(tree->right));
}

