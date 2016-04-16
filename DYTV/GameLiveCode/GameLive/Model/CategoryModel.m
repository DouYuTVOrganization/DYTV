//
//  CategoryModel.m
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "CategoryModel.h"

@implementation CategoryModel

/** 重写方法来配置修改的属性名和key的对应关系 */
//返回一个 Dict，将 Model 属性名对映射到 JSON 的 Key。
+ (NSDictionary *)modelCustomPropertyMapper {
return @{@"ID":@"id",
         @"firstLetter":@"first_letter",
         @"属性名":@"key"};
    
}

@end
