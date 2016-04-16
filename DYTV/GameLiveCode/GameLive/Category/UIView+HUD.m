//
//  UIView+HUD.m
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "UIView+HUD.h"
#define kTimeOut 30
#define kWaringDuration 1.5

@implementation UIView (HUD)

/** 程序线程原则:
 所有用户可见的操作必须放在主线程中执行。
 用户不可见的可以放在子线程中执行，提升程序流畅性。
 */
- (void)showWaring:(NSString *)words {
    /** 防止调用此方法的线程是子线程，导致程序崩溃，强制一下代码在主线程中执行，回到主线程的方法有3种,GCD是纯c的，效率高些 */
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"当前线程:%@",[NSThread currentThread]);
        
        /** 避免重复提示 隐藏前一个提示 */
        [MBProgressHUD hideHUDForView:self animated:NO];
        MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:self animated:YES];
        hud.mode = MBProgressHUDModeText;
        hud.labelText = words;
        [hud hide:YES afterDelay:kWaringDuration];
    });
}

- (void)showBusyHUD
{
    dispatch_async(dispatch_get_main_queue(), ^{
       /** 隐藏前一个提示 */
        [MBProgressHUD hideHUDForView:self animated:NO];
        
        MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:self animated:YES];
        [hud hide:YES afterDelay:kTimeOut];
    });
}
- (void)hideBusyHUD
{
    dispatch_async(dispatch_get_main_queue(), ^{
        [MBProgressHUD hideHUDForView:self animated:YES];
    });
}

@end
