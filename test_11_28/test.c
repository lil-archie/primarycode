#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//struct student
//{
//	int num;
//	char name[32];
//	float score;
//} stu;
//stu 是结构体变量的

//typedef struct Student
//{
//	int num;
//	char name[32];
//	float score;
//} Stu;
////Stu 是类型
//
//int main()
//{
//	Stu s1;
//	return 0;
//}

//
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, *p = &a;
//
//	//struct S a;
//	//struct S* p = &a;
//
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//题目内容：
//A.a.a//ok
//B.*p.a//err
//C.p->a//ok
//D .(*p).a//ok
//
#include <stdio.h>
//
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}   


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	//total += money;//买
//	//empty = money;
//	////置换
//	//while (empty >= 2)
//	//{
//	//	total += (empty / 2);
//	//	empty = empty / 2 + empty%2;
//	//}
//
//	if(money > 0)
//		total = 2 * money - 1;
//
//	printf("%d\n", total);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    //int arr[n][n];//C99 变长数组
//    int arr[10][10];
//    int i = 0;
//    //输入
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //判断
//    int flag = 1;//默认是上三角矩阵
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                flag = 0;
//                goto end;
//            }
//        }
//    }
//
//end:
//    if (flag == 1)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}
//
//


#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n][m];
//    int arr2[n][m];
//    //输入数据
//    //第一个数组
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //第二个数组
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //比较
//    int flag = 1;//默认2个矩阵相等
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 0;
//                goto end;
//            }
//        }
//    }
//end:
//    if (flag == 1)
//        printf("Yes\n");
//    else
//        printf("No\n");
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n][m];
//    int arr2[n][m];
//    //输入数据
//    //第一个数组
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //第二个数组
//    int flag = 1;//默认2个矩阵相等
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 0;
//                goto end;
//            }
//        }
//    }
//end:
//    if (flag == 1)
//        printf("Yes\n");
//    else
//        printf("No\n");
//
//    return 0;
//}
//


//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//找偶数的过程
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//找奇数的过程
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//调整
//	move(arr, sz);
//	
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
//
//
//int main() {
//    //   int arr1[1000];
//    //   int arr2[1000];
//    //   int arr3[2000];
//    int n = 0;
//    int m = 0;
//    //输入
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    int arr3[n + m];
//    //arr1的输入
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //arr2的输入
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并数组
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k] = arr1[i];
//            i++;
//            k++;
//        }
//        else
//        {
//            arr3[k] = arr2[j];
//            j++;
//            k++;
//        }
//    }
//    if (i == n)
//    {
//        //把arr2中剩余的元素放在arr3中
//        while (j < m)
//        {
//            arr3[k] = arr2[j];
//            j++;
//            k++;
//        }
//    }
//    else
//    {
//        //把arr1中剩余的元素放在arr3中
//        while (i < n)
//        {
//            arr3[k] = arr1[i];
//            i++;
//            k++;
//        }
//    }
//    //输出
//    for (k = 0; k < n + m; k++)
//    {
//        printf("%d ", arr3[k]);
//    }
//    return 0;
//}

//
//int main() {
//    //   int arr1[1000];
//    //   int arr2[1000];
//    //   int arr3[2000];
//    int n = 0;
//    int m = 0;
//    //输入
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    int arr3[n + m];
//    //arr1的输入
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //arr2的输入
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并数组
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n)
//    {
//        //把arr2中剩余的元素放在arr3中
//        while (j < m)
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    else
//    {
//        //把arr1中剩余的元素放在arr3中
//        while (i < n)
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//    }
//    return 0;
//}
//

#include <stdio.h>
/*
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag1 = 0;//标记升序
    int flag2 = 0;//标记降序
    for(i=1; i<n; i++)
    {
        if(arr[i-1] < arr[i] )
        {
            flag1 = 1;
        }
        else
        {
            flag2 = 1;
        }
    }
    if(flag1+flag2 == 2)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");
    }
    return 0;
}
*/

//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int flag1 = 0;//标记升序
//    int flag2 = 0;//标记降序
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i - 1] < arr[i])
//            {
//                flag1 = 1;
//            }
//            else
//            {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 + flag2 == 2)
//    {
//        printf("unsorted\n");
//    }
//    else
//    {
//        printf("sorted\n");
//    }
//    return 0;
//}
//
//



//这个正确的写法，前面的写法都是有一定的漏洞的
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10];
    int i = 0;
    int flag1 = 0;//标记升序
    int flag2 = 0;//标记降序

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i - 1] < arr[i])
            {
                flag1 = 1;
            }
            else if (arr[i - 1] > arr[i])
            {
                flag2 = 1;
            }
        }

    }
    if (flag1 + flag2 < 2)
        printf("sorted\n");
    else
        printf("unsorted\n");
    //
    //1 2 3 4 4
    //2 2 2 2 2
    //1 2 3 4 5
    //5 4 3 2 1
    //1 3 2 4 4
    //1 2 3 3 2 1
    //
    return 0;
}