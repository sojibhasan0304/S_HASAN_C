#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void copyNeedle( char haystack[], char replacement[], int haystackIndex){
    for(int i = 0; replacement[i] != 0; i++){
        haystack[haystackIndex + i] = replacement[i];
    }
}
int stringReplace(char haystack[], char needle[], char replacement[])
{
    bool different = true;
    for (int i = 0; haystack[i]!=0; ++i) {
        different = false;
        int j;
        for (j = 0; haystack[i]!=0 && needle[j]!=0; ++j) {
  //          printf_s("i=%d, %c, j=%d, %c \n", i, haystack[i],j,needle[j]);
            if(haystack[i] != needle[j]){
                different = true;
                break;
            }else {
                i++;
            }
 
        }
        if(different == false && needle[j]==0){
    //        printf("we found it \n");
            copyNeedle(haystack,replacement,i - j);
            return i-j;
        }
    }
    return -1;
}
 
int stringReplaceLast(char haystack[], char needle[], char replacement[]) {
    bool different = true;
    for (int i = strlen(haystack) - strlen(needle); i>=0; --i) {
        different = false;
        int j;
        for (j = 0; haystack[i+j]!=0 && needle[j]!=0; ++j) {
//            printf_s("i=%d, %c, j=%d, %c \n", i+j, haystack[i+j],j,needle[j]);
            if(haystack[i+j] != needle[j]){
                different = true;
                break;
            }else {
            }
        }
        if(different == false && needle[j]==0){
      //      printf("we found it \n");
            copyNeedle(haystack,replacement,i);
            return i;
        }
    }
    return -1;
}
int stringReplaceAll(char haystack[], char needle[], char replacement[]) {
    {
        bool different = true;
        bool succes = false;
        int index = -1;
        for (int i = 0; haystack[i]!=0; ++i) {
            different = false;
            int j;
            for (j = 0; haystack[i]!=0 && needle[j]!=0; ++j) {
             //   printf_s("i=%d, %c, j=%d, %c \n", i, haystack[i],j,needle[j]);
                if(haystack[i] != needle[j]){
                    different = true;
                    break;
                }else {
                    i++;
                }
 
            }
            if(different == false && needle[j]==0){
        //        printf("we found it \n");
                succes = true;
                index = i - j;
                copyNeedle(haystack,replacement,i - j);
            }
        }
        return index;
    }
}
int main() {
    puts("String replace demo!\n");
    char str2[]="Here comes the sun.. sun, sun, sun, here it comes.";
 
    char str[]="This is a hard task, harder than the last one.";
    int index= stringReplace(str, "hard", "cool");
    printf("Replaced at index %d:\n%s\n", index, str);
    int index3= stringReplaceAll(str2, "sun","SUN");
    printf("Replaced at index %d:\n%s\n", index3, str2);
 
    int index2= stringReplaceLast(str2, "SUN","man");
    printf("Replaced at index %d:\n%s\n", index2, str2);
    return 0;
}
