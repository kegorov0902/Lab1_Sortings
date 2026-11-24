//шаблон для выполнения лабораторной работы #1 по курсу "Основы программирования"
//подробную информацию см. readme.md
//Кирилл Егоров, ННГУ, 2024, переработано в 2026

#include "sortings.h"

int main() {
	const int* baseArray;	//основной массив - заполняется значениями один раз в начале выполнения программы
	int* currentArray;	//текущая копия массива
	int arraySize = 0;	//размер массива
	clock_t start, end;	//переменные для измерения времени выполнения функции сортировки

	double times[5];	//массив, хранящий времена выполнения функций сортировки
	char** names;	//двумерный массив названий сортировок - добавлёем название после выполнения каждого следующего алгоритма
	//не забудьте выделить память для массива названий!

	printf("Enter size of the array, please: ");
	scanf_s("%d", & arraySize);

	baseArray = generateArray(arraySize);
	currentArray = (int*)malloc(arraySize * sizeof(int));
	copyArray(baseArray, currentArray, arraySize);

	//bubblesort
	start = clock();
	bubbleSort(currentArray, arraySize);
	end = clock();
	double timeBubble = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Bubble sort on %d elements took %.6f seconds\n", arraySize, timeBubble);
	//добавить данные в массивы times, names!

	copyArray(baseArray, currentArray, arraySize);

	//mergeSortRec
	start = clock();
	mergeSortRec(currentArray, arraySize);
	end = clock();
	double timemergeSortRec = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Bubble sort on %d elements took %.6f seconds\n", arraySize, timemergeSortRec);
	//добавить данные в массивы times, names!

	copyArray(baseArray, currentArray, arraySize);

	//mergesort
	start = clock();
	mergeSort(currentArray, arraySize);
	end = clock();
	double timemergeSort = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Bubble sort on %d elements took %.6f seconds\n", arraySize, timemergeSort);
	//добавить данные в массивы times, names!

	copyArray(baseArray, currentArray, arraySize);

	//quicksort
	start = clock();
	quickSort(currentArray, arraySize);
	end = clock();
	double timequickSort = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Bubble sort on %d elements took %.6f seconds\n", arraySize, timequickSort);
	//добавить данные в массивы times, names!

	//выводим таблицу
	//printTable(names, times);
	//сохраняем результаты в файл
	//saveResults(names, times, "result.txt");

	return 0;
}