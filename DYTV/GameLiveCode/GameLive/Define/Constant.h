//
//  Constant.h
//  GameLive
//
//  Created by admin on 16/4/15.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#ifndef Constant_h
#define Constant_h

/** 宏定义必须以小k开头 这是一个代码规范 表示自己定义的宏 */
#define kAppDelegate ((AppDelegate *)([UIApplication sharedApplication].delegate))

/** 假如传入的R 是 160 + 60 需要加（） */
#define kRGBColor(R,G,B,Alpha) [UIColor colorWithRed:(R)/255.0 green:(G)/255.0 blue:(B)/255.0 alpha:Alpha]

#define kScreenW [UIScreen mainScreen].bounds.size.width
#define kScreenH [UIScreen mainScreen].bounds.size.height



#endif /* Constant_h */

#define equalTo(...)                     mas_equalTo(__VA_ARGS__)
#define greaterThanOrEqualTo(...)        mas_greaterThanOrEqualTo(__VA_ARGS__)
#define lessThanOrEqualTo(...)           mas_lessThanOrEqualTo(__VA_ARGS__)

#define offset(...)

