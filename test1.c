#include <stdio.h>
#include<assert.h>

// int my_strlen(const char* str){
//     int count = 0;
//     //assert(str);
//     while(*str != '\0'){
//         count++;
//         str++;
//     }
//     return count;
// }

// int main()
// {
//     int len=0;
//     char arr[]="hello";  //1. const char* 字符串 以 “\0”结尾。
//                          //2. char[] 字符串 以 “\0”结尾。
//                         //3.string 字符串 不以 “\0”结尾。
//     len = my_strlen(arr);
//     printf("%d\n",len);
//     return 0;
// }

int main(){
    if(strlen("abc")-strlen("abcdef")>0)
    return 1;
    return 0;

}