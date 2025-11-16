#include <stdio.h>
#include <string.h>


int main()
{
    char b[] = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext";
    
    int len = strlen(b);
    int count = 0;
    for(int i=0;i<len;i++)
    {
        if(b[i] == '\n')
        {
            count++;
        }
    }
    printf("%d count: %d\n",len,count);
    printf("%s\n",b);
}