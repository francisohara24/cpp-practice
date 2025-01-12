//
// Created by franc on 1/11/2025.
// Link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
//
#include <iostream>
#include <vector>


int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    std::vector<std::vector<int>> arr(n);

    for (int i = 0; i < n; i ++) {
        int k;
        scanf("%d", &k);
        std::vector<int> arr_i(k);
        for (int j = 0; j < k; j ++) {
            int arr_i_j;
            scanf("%d", &arr_i_j);
            arr_i.at(j) = arr_i_j;
        }
        arr.at(i) = arr_i;
    }

    for (int i = 0; i < q; i ++) {
        int first, second;
        scanf("%d %d", &first, &second);
        printf("%d\n", arr.at(first).at(second));
    }

    return 0;

}
