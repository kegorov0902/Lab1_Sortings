#pragma once
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//дополнительные функции

//функция для генерации массива случайных целых чисел
int* generateArray(int arraySize) {	
	srand(time(NULL));	//иниициализация генератора случайных чисел

	int* arrTemp = (int*)malloc(arraySize * sizeof(int));

	if (arrTemp == NULL) {	//проверка того, что память была выделена
		return NULL;
	}

	for (int i = 0; i < arraySize; i++) {
		arrTemp[i] = rand() % 100;
	}

	return arrTemp;
}

//функция копирования массива
void copyArray(int* baseArray, int* currentArray, int size) {	
	for (int i = 0; i < size; i++) {
		currentArray[i] = baseArray[i];
	}
}

//печать массива на экран
void printArray(int* array, int arraySize) {	
	for (int i = 0; i < arraySize; i++) {
		printf("%d: %d\n", i, array[i]);
	}
}

//вывод результатов в файл
void saveResults(char** names, double* times, char** fileName) {
	//эту функцию нужно реализовать самостоятельно
}

//вывод результатов в виде таблицы НА ЭКРАН
void printTable(char** names, double* times) {
	//эту функцию нужно реализовать самостоятельно
}

//функции алгоритмов сортировки
//вместо заглушек в код функций нужно подставить код для соответствующего алгоритма сортировки
//для написания сортировки согласно вашему варианту нужно создать функцию аналогичным образом

//сортировка пузырьком
void bubbleSort(int* array, int arraySize) {
	printf("Bubble sort on %d element array\n", arraySize);
}

//сортировка слиянием - рекурсивный вариант
void mergeSortRec(int* array, int arraySize) {
	printf("Recursive merge sort on %d element array\n", arraySize);
}

//сортировка слиянием - итеративный вариант
void mergeSort(int* array, int arraySize) {
	printf("Merge sort on %d element array\n", arraySize);
}

//быстрая сортировка
void quickSort(int* array, int arraySize) {
	printf("Quick sort on %d element array\n", arraySize);
}