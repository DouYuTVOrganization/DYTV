//
//  AppDelegate+Custom.h
//  GameLive
//
//  Created by admin on 16/4/15.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "AppDelegate.h"
#import <AFNetworkReachabilityManager.h>

@interface AppDelegate (Custom)
/*
 存储属性:有set和get方法，用于保存数据，占内存。
 计算属性:只有get方法，用于计算数据然后做返回，不占内存。
 */

/** 当前是否有网络,计算属性 */
@property (nonatomic,readonly,getter=isOnLine) BOOL onLine;
/** 当前网络状态:无网络,未知,wifi,手机网络2G 3G 4G */
@property (nonatomic,readonly) AFNetworkReachabilityStatus netStatus; //4个枚举值

/** 全局的一些配置 */
- (void)setupGlobalConfig;
@end
