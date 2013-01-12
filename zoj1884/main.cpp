#include<stdio.h>
//定义字符与键盘映射
char keymap[][20]=
{"`1234567890-=",
 "QWERTYUIOP[]\\",
 "ASDFGHJKL;'",
 "ZXCVBNM,./"};

int main()
{
    char str[500];//题目没有说字符串长度，尽量开大些
    int i = -1, j, k;
    while(gets(str))
    {
        if(i!=-1) printf("\n");//不要打印多余的换行符，特别是读入最后一组数据，虽然题目没有要求
        i = -1;
        while(str[++i]!='\0')
        {
            for(j=0; j<4; j++)
            {
                k = 0;
                while(keymap[j][++k]!='\0') //第一列无视掉
                {
                    if(str[i]==keymap[j][k])
                        str[i] = keymap[j][k-1];//找到对应字符，直接用左边字符替换
                }
            }
        }
        printf("%s",str);//打印结果
    }

    return 0;
}