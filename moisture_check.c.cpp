#include <stdio.h>

int main() 
{
    int moisture[5] = {45, 32, 28, 50, 25};
    for(int i = 0; i < 5; i++) {
        if(moisture[i] < 30) {
            printf("第%d次测试,湿度为%d,缺水\n", i+1, moisture[i]);
        }
        else {
            printf("第%d次测试,湿度为%d,水分充足\n", i+1, moisture[i]);
        }
    }
    return 0;
}