//
//  crossRoad.h
//  learnC
//
//  Created by Zhifeng Wu on 2018/10/18.
//  Copyright © 2018年 Zhifeng Wu. All rights reserved.
//

#ifndef crossRoad_h
#define crossRoad_h
#include <time.h>

void cur_time()
{
    time_t t;
    struct tm * lt;
    time (&t);//获取Unix时间戳。
    lt = localtime (&t);//转为时间结构。
    printf ( "%d/%d/%d %d:%d:%d\n",lt->tm_year+1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);//输出结果
    
}

#endif /* crossRoad_h */
