//
//  VideoModel.h
//  GameLive
//
//  Created by tarena012 on 16/4/16.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 ESJsonFormat使用注意:
 1.要确保录入插件的内容是JSON类型的第一个字典
 2.类名要有层次感，可以有效的防止类名重复
 */


@class VideoVideosidlistModel,VideoVideolistModel,VideoVideotopicModel;
@interface VideoModel : NSObject


@property (nonatomic, copy) NSString *videoHomeSid;

@property (nonatomic, strong) NSArray<VideoVideosidlistModel *> *videoSidList;

@property (nonatomic, strong) NSArray<VideoVideolistModel *> *videoList;


@end
@interface VideoVideosidlistModel : NSObject

@property (nonatomic, copy) NSString *sid;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *imgsrc;

@end

@interface VideoVideolistModel : NSObject

@property (nonatomic, copy) NSString *ptime;

@property (nonatomic, copy) NSString *videosource;

@property (nonatomic, copy) NSString *topicImg;

@property (nonatomic, copy) NSString *topicSid;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *sectiontitle;

@property (nonatomic, copy) NSString *vid;

@property (nonatomic, copy) NSString *m3u8_url;

@property (nonatomic, assign) NSInteger playersize;

@property (nonatomic, copy) NSString *topicName;

@property (nonatomic, assign) NSInteger replyCount;

@property (nonatomic, copy) NSString *cover;

@property (nonatomic, copy) NSString *replyBoard;

@property (nonatomic, assign) NSInteger playCount;

@property (nonatomic, assign) NSInteger length;

@property (nonatomic, copy) NSString *topicDesc;

@property (nonatomic, copy) NSString *mp4Hd_url;

@property (nonatomic, copy) NSString *replyid;

@property (nonatomic, strong) VideoVideotopicModel *videoTopic;

@property (nonatomic, copy) NSString *m3u8Hd_url;

@property (nonatomic, copy) NSString *mp4_url;

@property (nonatomic, copy) NSString *description;

@end

@interface VideoVideotopicModel : NSObject

@property (nonatomic, copy) NSString *tname;

@property (nonatomic, copy) NSString *alias;

@property (nonatomic, copy) NSString *tid;

@property (nonatomic, copy) NSString *ename;

@end

