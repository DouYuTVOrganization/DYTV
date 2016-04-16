//
//  UIView+HUD.h
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <UIKit/UIKit.h>
/** 考虑要把本文件可能分享给别人用，所以要把必要的引用写了 */
#import <MBProgressHUD.h>

@interface UIView (HUD)


- (void)showWaring:(NSString *)words;
/** 显示繁忙 */
- (void)showBusyHUD;
/** 隐藏繁忙 */
- (void)hideBusyHUD;

@end
