#include<stdio.h>

int FindLRU(int time[], int n)
{
    int i;
    int minimum = time[0];
    int pos[0];

    for(i = 1; i<n; ++i)
    {
        if(time[i] < minimum)
    {
        minimum = time[i];
        pos = i;
    }
}
return pos;
}

int main()
{
    int frame_no, page_no;
    int frames[10], pages[30], time[10];
    int counter = 0, faults = 0;
    int flag1, flag2, i, j, pos;

    prinf("Enter number of frames:\n");
    scanf("%d", &frame_no);


    prinf("Enter number of pages:\n");
    scanf("%d", &page_no);


}
