
// call by value, 함수의 매개변수로 참조받는 변수를 직접 변경하는 방법을 의미한다. 
// 일반 변수로는 주소값을 매개변수에 넣음으로 해결할 수 있지만, 배열의 경우 배열의 주소값(배열 이름 - 상수 포인터)를 넘겨서 해결한다
// 위 배열의 경우, 매개변수로 받은 함수 내부에서는 배열이름 상수포인터를 마치 배열처럼 (ex - arr[1]) 대괄호로 원소 접근이 가능해진다. 

// 아래 코드는 알고리즘 공부 중 gpt에게서 확인한 in-place한 삽입정렬 코드이다. 예제코드라고 생각하고 기억안나면 다시 확인하자. 

#include <stdio.h>

// 함수 매개변수로 받을 때 arr[] == * arr 똑같음. 
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}