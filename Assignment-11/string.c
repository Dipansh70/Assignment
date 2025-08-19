#include <stdio.h>
#include <string.h>
// 1. strncpy method
//void main(){
//	char dest[20];
//	char src[] ="hello";
//	strncpy(dest,src,3);
//	dest[3] = '\0'; //null terminate 
//	printf("copied string =%s\n",dest);
//	return 0;
//}

// 2. length method 
//void main(){
//	char dest[20];
//	char src[]="Hey my name is Dipanshu";
//	printf("length of src = %lu\n",strlen(src));
//}

// 3. cat method join multiple string in ones 
//void main(){
//	char dest[20];
//	char src[] = "Hello";
//	char src1[] = "First-bit-solution";
//	printf("After cat method use %s",strcat(src,src1));
//}

// 4. n method use to cat 
//void main(){
//	char dest[20];
//	char src[] = "Hello";
//	char src1[] = "First-bit-solution";
//	printf("After cat n method use %s",strncat(src,src1,9));
//}

// 5. str cmp method  = camparison method
//void main(){
//	char dest[20];
//	 if (strcmp("Apple", "Banana") < 0)
//     printf("Apple comes before Banana\n");
//}

// 6. First  occurrence
//void main(){
//	char dest[20];
//	char src[] = "Hello";
//	char *p = strchr(src,'l');
//    if (p) printf("First occurrence of 'l' = %s\n", p);
//}

// 7. strtok method 
//void main(){
//    char text[] = "one,two,three";
//    char *tok = strtok(text,",");
//    while(tok){
//        printf("Token: %s\n", tok);
//        tok = strtok(NULL,",");
//	}
//}

// 8. copy method
//void main(){
// 	char *copy = strdup("boy");
//    printf("Duplicate = %s\n", copy);
//}

// 9. memcoy method
//void main(){
//	char src[] = "ABCDE";
//    char dest[10];
//    memcpy(dest, src, 4);
//    dest[5] = '\0';
//    printf("After memcpy = %s\n", dest);
//}

// 10. memmove method
//void main(){
//	 char buffer[] = "12345";
//    memmove(buffer+2, buffer, 4);
//    buffer[5]='\0';
//    printf("After memmove = %s\n", buffer);
//}

// 11. memset method
//void main(){
//	char arr[10];
//    memset(arr,'*',6);
//    arr[6]='\0';
//    printf("After memset: %s\n", arr);
//}

// 12.  strtok_r (reentrant) method 
//void main(){
//	 char text2[] = "dog,cat,bird";
//    char *saveptr;
//    char *tok2 = strtok_r(text2, ",", &saveptr);
//    while(tok2){
//    printf("Token (strtok_r) : %s\n", tok2);
//     tok2 = strtok_r(NULL, ",", &saveptr);
//	}
//}