//
//  AppDelegate+Custom.m
//  GameLive
//
//  Created by admin on 16/4/15.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "AppDelegate+Custom.h"
@implementation AppDelegate (Custom)

- (void)setupGlobalConfig
{
    /** 监听当前网络状态 */
    [[AFNetworkReachabilityManager sharedManager]setReachabilityStatusChangeBlock:^(AFNetworkReachabilityStatus status) {
        NSLog(@"Reachability:%@",AFStringFromNetworkReachabilityStatus(status));
    }];
    /** 启动监听 */
    [[AFNetworkReachabilityManager sharedManager] startMonitoring];
    
}
- (AFNetworkReachabilityStatus)netStatus
{
    return [AFNetworkReachabilityManager sharedManager].networkReachabilityStatus;
}

- (BOOL)isOnLine
{
    switch (self.netStatus) {
        case AFNetworkReachabilityStatusUnknown:
        case AFNetworkReachabilityStatusNotReachable:
            return NO;
            break;
        case AFNetworkReachabilityStatusReachableViaWiFi:
        case AFNetworkReachabilityStatusReachableViaWWAN:
            return YES;
    }
}


@end
