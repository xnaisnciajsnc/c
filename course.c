// 实现课程信息的增删改查功能。
// 读取和保存课程信息到文件。

#include <stdio.h>
#include "utils.h"
#include "course.h"

typedef struct Course{
    char courseID[10];//课程号
    char courseName[50];//课程名称
    char credit[10];//学分
    char courseType[20];//课程类型
}Course;
