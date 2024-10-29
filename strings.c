// string 
// ASCII table
// char ---> ''
/*
- array of characters
- enclosed by ``` "" ```

## DataType

- drived data type
- store in char array
- ``` var[size] ```

## IO Statements
### Formatted 
- ``` scanf() ```,``` printf() ```
### Unformatted
- gets (dereciated)
- puts()
- fgets(name, size, filename)
ex : fgets(name, size, stdin) read tnput from consol

*/

// let"s gooo !..

// #include<stdio.h>
// #include<stdlib.h>
// int main(){

//     // char a[100];

//     // // formatted
//     // printf("here we gooo...\n");//op: here we gooo...(we use this to print the op in new line '\n')
//     // scanf("%[^\n]",a);//ip: wooowww!!!...
//     // printf("%s",a);//op: wooowww!!!...
//     // int count = 0;
//     // for( int i=0; a[i]!='\0'; i++){
//     //     count++;
//     // }
//     // printf("\n%d",count);//op: 13


//     // //unformatted
//     // puts(" \nhere we gooo...");//op: here we gooo...
//     // // fgetc(a,10,stdin);
//     // puts(a);// op: wooowww!!!... (using puts the op print in a new line)


//     // using dy.mem alloc
//     // char *lol= (char *) malloc(1000);
//     // scanf("%s",lol);//op: hello

//     // printf("%s",lol);//op: hello
//     // puts(lol);//op: hello

//     // string 2d array
//     // char veriableName[str each][character]; ---> char a[10][20] 10 line of string and 20 charaters of each line
//     char a[3][10];

//     for(int i=0;i<3; i++){
//         scanf("%s",a[i]);//ip :na (new line) ni (new line) nam(new line)

//     }
//     for(int i=0;i<3; i++){
//         puts(a[i]);//op: na (new line) ni (new line) nam(new line)
//     }

//     // string and function
//     ddd(a);
    
// }

// void ddd(char a[]){
//     for(int i=0;i<3; i++){
//         puts(a+i);//op: na (new line) ni (new line) nam(new line)
//     }
// }

int main()
{
    char *str = "hello", *str1="hello";
    if(strcmp(str,str1))
        printf("Equal");
    else
        printf("Unequal");
    return 0;
}