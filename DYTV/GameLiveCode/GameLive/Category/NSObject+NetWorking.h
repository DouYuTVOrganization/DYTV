//
//  NSObject+NetWorking.h
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>

/*
 网络请求的方式
 GET  专门从服务器往下获取数据
 POST 专门往服务器传数据
 PUT  专门往服务器的数据库存数据
 DELETE 专门往服务器的数据库删数据
 网络请求效果上都是一样的:
 调用接口，传递了一些参数，服务器根据接口选定的功能，根据参数选择此功能要做的详细事件，然后服务器吧处理结果返回给我们。
 GET:传递给服务器的数据长度有限制
 POST:可以传递大数据，图片、zip...
 */

@interface NSObject (NetWorking)

+ (id)GET:(NSString *)path parameters:(NSDictionary *)parameters progress:(void(^)(NSProgress *downloadProgress))downloadProgress completionHandler:(void(^)(id responseObj,NSError *error))completionHandler;

+ (id)POST:(NSString *)path parameters:(NSDictionary *)parameters progress:(void(^)(NSProgress *downloadProgress))downloadProgress completionHandler:(void(^)(id responseObj,NSError *error))completionHandler;
@end
