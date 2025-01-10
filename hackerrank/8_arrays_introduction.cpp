//
// Created by franc on 1/10/2025.
// Link: https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
//

#include <iostream>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i ++) {
        const char * format_string = (i == size - 1)?"%d": "%d ";
        printf(format_string, arr[size - i - 1]);
    }
    return 0;
}
