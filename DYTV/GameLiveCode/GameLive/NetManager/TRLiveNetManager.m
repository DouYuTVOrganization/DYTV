//
//  TRLiveNetManager.m
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "TRLiveNetManager.h"


@implementation TRLiveNetManager

+ (id)getTextCompletionHandler:(void (^)(TextModel *, NSError *))completionHandler
{
    return [self GET:@"http://www.quanmin.tv/json/page/ad-slot/info.json" parameters:nil progress:nil completionHandler:^(id responseObj, NSError *error) {
       
        TextModel *model = [TextModel modelWithJSON:responseObj];
        
        !completionHandler ?: completionHandler(model,error);
    }];
}

+ (id)getVideosCompletionHandler:(void (^)(VideoModel *, NSError *))completionHandler
{
    return [self GET:@"http://c.m.163.com/nc/video/home/1-10.html" parameters:nil progress:nil completionHandler:^(id responseObj, NSError *error) {
        
        VideoModel *model = [VideoModel modelWithJSON:responseObj];
        !completionHandler ?: completionHandler(model,error);
    }];
}


+ (id)getCategoriesCompletionHandler:(void (^)(NSArray<CategoryModel *> *, NSError *))completionHandler
{
    return [self GET:@"http://www.quanmin.tv/json/categories/list.json" parameters:nil progress:nil completionHandler:^(id responseObj, NSError *error) {
//        if (completionHandler) {
//            completionHandler(responseObj,error);
//        } else {
//            NSLog(@"传入的block为空");
//        }
        
        /** modelArrayWithClass 这个方法是YYModel提供的  */
        NSArray<CategoryModel *> *tmpArr = [NSArray modelArrayWithClass:[CategoryModel class] json:responseObj];
        
        /** 空和运算符 前方表达式为空 执行后面的语句 */
        !completionHandler ?: completionHandler(tmpArr,error);
    }];
}
@end
