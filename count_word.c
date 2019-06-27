    //program to count words and handle white spaces too.
    //white spaces are the extra spaces in a sentence like How are  u mister
        #include<stdio.h>
    int main()
    {  int i;
        int word=1;
        char sent[10];  //character pointer
        printf("Enter the sentence\n");
    gets(sent);
        for(i=0;sent[i]!='\0';i++)
        {
           if(sent[i]==' ' && sent[i-1]!=' ' && sent[i]!='.')
                word++;
        }
        printf("There are %d words in the sentence\n", word);  //words are always 1 more than the no. of spaces.
    return 0;
    }                                                          //or word=1;

