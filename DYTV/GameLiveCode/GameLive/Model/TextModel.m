//
//  TextModel.m
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "TextModel.h"

@implementation TextModel

+ (NSDictionary *)modelContainerPropertyGenericClass {
    return @{@"playerGuangGao":[TextPlayerGuanggaoModel class],
             @"pcBanner":[TextPcBannerModel class],
             @"list":[TextListModel class],
             @"pcBanner2":[TextPcBanner2Model class]};
}

+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"playerGuangGao": @"player-guanggao",
             @"pcBanner": @"pc-banner",
             @"pcBanner2": @"pc-banner2",
             @"appAd":@"app-ad"};
}
@end
@implementation TextPlayerGuanggaoModel
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"ID":@"id"};
}

@end


@implementation TextPcBannerModel
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"ID":@"id"};
}
@end


@implementation TextListModel
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"ID":@"id"};
}
@end


@implementation TextPcBanner2Model
+ (NSDictionary *)modelCustomPropertyMapper {
    return @{@"ID":@"id"};
}
@end


