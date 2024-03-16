// 3차 성공 : end = 2^31 -1 이 되어야 함? 나도 모름

#include <stdio.h>

long long nums_of_lan(long long* lans, long long index, int k) {
    long long buf = 0;
    for (int i = 0; i < k; i++) {
        buf += lans[i] / index;
    }
    return buf;
}

int largest_index(long long* lans, int k)
{
    long long buf = 0;
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        if (buf < lans[i])
        {
            buf = lans[i];
            index = i;
        }
    }
    return index;
}

int main() {
    int k, n;
    scanf("%d %d", &k, &n);
    long long len_of_lan[10000];
    
    for (int i = 0; i < k; i++) {
        scanf("%lld", &len_of_lan[i]);
    }
    
    long long start = 1;
    long long end = len_of_lan[largest_index(len_of_lan, k)]; // 가장 긴 랜선의 길이
    long long buf = 0;
    
    while(start <= end) {
        long long mid = (start + end) / 2;
        long long current_numbers_of_lan = nums_of_lan(len_of_lan, mid, k);
        
        if(current_numbers_of_lan >= n) {
            buf = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    printf("%lld", buf);
    return 0;
}
