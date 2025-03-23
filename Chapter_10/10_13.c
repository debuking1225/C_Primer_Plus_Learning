#include <stdio.h>
#define ROWS 3
#define COLS 5

/* 输入数据存储到3x5数组 */
void input_array(double arr[ROWS][COLS])
{
    printf("请输入3组数据，每组5个double类型数：\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("第%d组数据（输入5个数，空格分隔）：", i + 1);
        for (int j = 0; j < COLS; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

/* 计算单组平均值 */
double row_average(double arr[])
{
    double sum = 0;
    for (int i = 0; i < COLS; i++)
    {
        sum += arr[i];
    }
    return sum / COLS;
}

/* 计算总平均值 */
double total_average(double arr[ROWS][COLS])
{
    double sum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum / (ROWS * COLS);
}

/* 查找最大值 */
double find_max(double arr[ROWS][COLS])
{
    double max = arr[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

/* 打印结果 */
void print_results(double row_avg[], double total_avg, double max)
{
    printf("\n===== 计算结果 =====\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("第%d组平均值：%.2f\n", i + 1, row_avg[i]);
    }
    printf("总平均值：%.2f\n", total_avg);
    printf("最大值：%.2f\n", max);
}

int main()
{
    double data[ROWS][COLS];
    double row_avg[ROWS];

    input_array(data); // 任务a

    // 任务b：计算每组平均值
    for (int i = 0; i < ROWS; i++)
    {
        row_avg[i] = row_average(data[i]);
    }

    double total_avg = total_average(data); // 任务c
    double max_value = find_max(data);      // 任务d

    print_results(row_avg, total_avg, max_value); // 任务e

    return 0;
}