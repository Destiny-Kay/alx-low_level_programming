/**
 * alloc_grid- allocates memory to a 2d grid array
 * @width: width of the array
 * @height: the height of the array
 * Return: pointer to array
*/
int **alloc_grid(int width, int height)
{
	int **array = (int **)malloc(width * sizeof(int *));

	for (int i = 0; i < width; i++)
	{
		array[i] = (int *)malloc(height * sizeof(int));
	}

	return (array);
}
