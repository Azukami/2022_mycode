#include <stdio.h>
/*我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数
输入格式：
两个整数，第一个表示n，第二个表示m
输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数之间所有的素数的和，包括第n个素数和第m个素数*/
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int num = 1;//用以标记当前是第几个素数，开始为1
    int susu = 2;//初始素数为2
    int sum = 0;//素数累加
    int isPrime = 1;//标记是否为素数，如果是素数，则为1，如果不是素数，则为0
    for(int i = 2; i < susu; i++) {
        if (susu % i == 0) {
            isPrime = 0;
            break;
        } else if (susu % i != 0) {
            isPrime = 1;
            sum += susu;
            num++;
            if (num >= n) {
                
            }
        }
    }



    return 0;
}