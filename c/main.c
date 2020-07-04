#include <stdio.h>
int cal(int num){
    int sum = 0;
    int i = 1;
    for(;i<=num;i++){
        sum+=i;
    }
    return sum;
}

int cal2(int n ){
    int sum = 0; // 1unit_time
    int i =1;// 1unit_time
    int j =1;// 1unit_time
    for(;i<=n;i++){// nunit_time
        j = 1;// nunit_time
        for(;j<=n;j++){ // n*nunit_time
            sum = sum + i*j; // n*nunit_time
        }
    }
    return sum;
}
int test(int n){
    int y=0;
    while((y+1)*(y+1)<=n){
        printf("1\n");
        y=y+1;
    }

}

//int find( int[] array,int n, int x){
//    int i =0;
//    for(;i<n;i++){
//        if(array[i]==x) pos = i;
//    }
//    return pos;
//}




// n表示数组array的长度
int find(int array[],int n,int x) {
    int i = 0;
    int pos = -1;
    for (; i < n; ++i) {
        if (array[i] == x) {
            pos = i;
            break;
        }
    }
    printf("%d",pos);
    return pos;
}

int array[8];
int count = 0;
void insert(int val){
    if(count == sizeof(array)){
        int sum =0;
        for(int i =0;i<sizeof(array);i++){
            sum = sum+array[i];
        }
        array[0]=sum;
        count = 1;
    }
    array[count] = val;
    count++;
    printf("%d",array[0]);
    printf("%d",array[1]);
}


int main() {

//    printf("Hello, World!\n");
//    int result = cal(5);
//    printf("%d",result);
//    test(81);
//    int arr[5]={1,2,3,4,5};
//    find(arr,5,5);
    insert(1);
    insert(3);




    return 0;

}