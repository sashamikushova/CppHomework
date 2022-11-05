#include <stdio.h>
#include <stdint.h>
#define __STDC_FORMAT_MACROS
#include <inttypes.h>

void task6_1(){
    unsigned char n;
    printf("n=");
    scanf("%hhu",&n);
    long long unsigned m=1UL<<n;
    printf("m = %llu %llx\n",m,m);
}
void task6_2(){
    int n;
    unsigned m;
    printf("n m=");
    scanf("%d",&n);
    scanf("%u",&m);
    int res=n|(1<<m);
    printf("r=%d\n",res);
}
void task6_3(){
    uint64_t m;
    uint8_t j;
    printf("m=");
    scanf("%llu", &m);
    printf("j=");
    scanf("%hhu",&j);
    m=m&-(1<<j);
    printf("m=%llu",m);
}
void task6_4(){
    uint32_t n;
    printf("n:\n");
    int r=scanf("%u", &n);
    if (r!=1){
        printf("can not input");
        return;
    }
    printf("%x\n",n);
    uint32_t first8bit=n & 0xFF;
    uint32_t last8bit=n >> 24;
    uint32_t m=((n<<8)>>16)<<8;
    m|=(first8bit<<24);
    m|=last8bit;
    printf("m=%u %x\n ", m,(uint16_t)m);

}
void task6_5(){
    int n, max1=1, tempmax=1;
    printf("n=");
    scanf("%d", &n);
    for(int i=0;i<sizeof(n)*8-1;i++){
        int bit=(n>>i) & 1;
        int next_bit=(n>>(i+1)) &1;
        if (bit==next_bit && bit==1){
            tempmax+=1;
            if(tempmax>max1){
                max1=tempmax;
            }
        }
        else tempmax=1;
        printf("%d",max1);
    }
}
void task6_6(){
    uint8_t mas[]={0,1,2,3,4,5,6,7,8};
    int i=0;
    for(;i<sizeof(mas)/sizeof((mas)[0])-1;i++){
        unsigned tmp=mas[i];
        printf("%u %x\n", (tmp & (-tmp)),(tmp & (-tmp)));
    }
    i=0;
    uint8_t r=1;
    for(int i=1; i<((sizeof(uint8_t)<<8));i++){
        unsigned tmp=i;
        uint8_t y=(tmp & (tmp-1));
        int k=1, j=0;
        while (tmp%k==0){
            k<<1;
            j++;
        }
        if (y!=j){
            printf("we are wrong! %d %d %d", i, y, j);

        }
    }
}
void task6_7(){
    uint32_t A=0x01020304;
    uint32_t A0=A & 0xFF;
    uint32_t A3=A>>24;
    if (A0==0x04 && A3==0x01){
        printf("little endien");
    }
    if (A0==0x01 && A3==0x04){
        printf("big endien");
    }

}
void task6_8(){
    uint64_t m;
    uint8_t j;
    printf("m=");
    scanf("%llu", &m);
    printf("j=");
    scanf("%hhu",&j);
    m&=~(1<<(j-1));
    char buf[20];
    sprintf(buf, "%" PRIu64 "\n",m);
    printf("%s",buf);
}


    int main(){

        task6_1();
        task6_2();
        task6_3();
        task6_4();
        task6_5();
        task6_6();
        task6_7();
        task6_8();
}