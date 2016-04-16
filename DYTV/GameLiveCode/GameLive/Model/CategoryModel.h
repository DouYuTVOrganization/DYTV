//
//  CategoryModel.h
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 解析规则:
 1.遇到字典则新建类型
 2.把不规则的命名进行修改 （驼峰 关键字）
 */
/** 栏目类别 */
@interface CategoryModel : NSObject

@property (nonatomic, copy) NSString *firstLetter;

@property (nonatomic, assign) NSInteger prompt;

@property (nonatomic, copy) NSString *slug;

@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, copy) NSString *image;

@property (nonatomic, copy) NSString *thumb;

@property (nonatomic, copy) NSString *name;


@end
