//
//  VideoModel.m
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "VideoModel.h"

@implementation VideoModel

// 返回容器类中的所需要存放的数据类型 (以 Class 或 Class Name 的形式)。
+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"videoSidList" : [VideoVideosidlistModel class],
             @"videoList" : [VideoVideolistModel class]};
}


@end
@implementation VideoVideosidlistModel

@end


@implementation VideoVideolistModel

@end


@implementation VideoVideotopicModel

@end


