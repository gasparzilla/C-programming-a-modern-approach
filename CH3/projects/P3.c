#include <stdio.h>

int main(){
    int gs1_index, group_id, pub_code, item_n, check_d;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_index, &group_id, &pub_code, &item_n, &check_d);

    printf("GS1 prefix: %d\n", gs1_index);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_n);
    printf("Check digit: %d\n", check_d);
    return 0;
}
