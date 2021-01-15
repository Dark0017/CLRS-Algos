void InsertionSort(std::vector<int>& arr) {
	int j{ 0 }, i{ 0 }, key{ 0 };
	for (j = 1; j < arr.size(); j++)
	{
		key = arr[j];

		i = j - 1;
		while (i >= 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i--;
		}

		arr[i + 1] = key;
	}
}
