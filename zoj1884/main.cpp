#include<stdio.h>//fewfqefqw
//�����ַ�������ӳ��
char keymap[][20]=
{"`1234567890-=",
 "QWERTYUIOP[]\\",
 "ASDFGHJKL;'",
 "ZXCVBNM,./"};

int main()
{
    char str[500];//��Ŀû��˵�ַ������ȣ���������Щ
    int i = -1, j, k;
    while(gets(str))
    {
        if(i!=-1) printf("\n");//��Ҫ��ӡ�����Ļ��з����ر��Ƕ�������һ�����ݣ���Ȼ��Ŀû��Ҫ��
        i = -1;
        while(str[++i]!='\0')
        {
            for(j=0; j<4; j++)
            {
                k = 0;
                while(keymap[j][++k]!='\0') //��һ�����ӵ�
                {
                    if(str[i]==keymap[j][k])
                        str[i] = keymap[j][k-1];//�ҵ���Ӧ�ַ���ֱ���������ַ��滻
                }
            }
        }
        printf("%s",str);//��ӡ����
    }

    return 0;
}
