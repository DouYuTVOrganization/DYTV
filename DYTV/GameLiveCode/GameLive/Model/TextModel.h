//
//  TextModel.h
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>



@class TextPlayerGuanggaoModel,TextPcBannerModel,TextListModel,TextPcBanner2Model;
@interface TextModel : NSObject

//player-guanggao playerGuangGao
@property (nonatomic, strong) NSArray<TextPlayerGuanggaoModel *> *playerGuangGao;
//app-ad appAd
@property (nonatomic, strong) NSArray *appAd;
//pc-banner pcBanner
@property (nonatomic, strong) NSArray<TextPcBannerModel *> *pcBanner;

@property (nonatomic, strong) NSArray<TextListModel *> *list;
//pc-banner2 pcBanner2
@property (nonatomic, strong) NSArray<TextPcBanner2Model *> *pcBanner2;



@end
@interface TextPlayerGuanggaoModel : NSObject

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, copy) NSString *subtitle;
//id ID
@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, copy) NSString *ext;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *fk;

@property (nonatomic, copy) NSString *thumb;

@property (nonatomic, copy) NSString *link;

@property (nonatomic, copy) NSString *create_at;

@property (nonatomic, assign) NSInteger slot_id;

@property (nonatomic, assign) NSInteger priority;

@end

@interface TextPcBannerModel : NSObject

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, copy) NSString *subtitle;

//id - ID
@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, copy) NSString *ext;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *fk;

@property (nonatomic, copy) NSString *thumb;

@property (nonatomic, copy) NSString *link;

@property (nonatomic, copy) NSString *create_at;

@property (nonatomic, assign) NSInteger slot_id;

@property (nonatomic, assign) NSInteger priority;

@end

@interface TextListModel : NSObject

@property (nonatomic, copy) NSString *slug;

@property (nonatomic, copy) NSString *name;

@end

@interface TextPcBanner2Model : NSObject

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, copy) NSString *subtitle;

//id - ID
@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, copy) NSString *ext;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *fk;

@property (nonatomic, copy) NSString *thumb;

@property (nonatomic, copy) NSString *link;

@property (nonatomic, copy) NSString *create_at;

@property (nonatomic, assign) NSInteger slot_id;

@property (nonatomic, assign) NSInteger priority;

@end

