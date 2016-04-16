//
//  TRLiveNetManager.h
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CategoryModel.h"
#import "VideoModel.h"
#import "TextModel.h"

@interface TRLiveNetManager : NSObject


/* 解析练习
 http://www.quanmin.tv/json/page/ad-slot/info.json
 http://app.api.autohome.com.cn/autov5.0.0/news/fastnewslist-pm1-b0-l0-s20-lastid0.json
 */
+ (id)getTextCompletionHandler:(void(^)(TextModel *model,NSError *error))completionHandler;

/* 
 获取直播列表 解析出来的最表层是一个字典 直接就是一个model
 */
+ (id)getVideosCompletionHandler:(void(^)(VideoModel *model,NSError *error))completionHandler;

/*
 获取栏目列表 网络请求一定放在多线程中执行，因为会卡，要 回调回主线程
 一个栏目就是一个categoryModel ,解析出来的最表层是一个array 所以这里是array
 */
+ (id)getCategoriesCompletionHandler:(void(^)(NSArray<CategoryModel *> *model,NSError *error))completionHandler;

@end
