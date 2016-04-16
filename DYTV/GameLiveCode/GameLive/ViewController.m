//
//  ViewController.m
//  GameLive
//
//  Created by jiyingxin on 16/4/5.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import "ViewController.h"
#import <MBProgressHUD.h>
#import "TRLiveNetManager.h"

@interface ViewController ()

@property (nonatomic) UIButton *button;

@end

@implementation ViewController
#pragma mark - 方法

#pragma mark - 懒加载
/** button用于保存按钮的指针,存储属性 */
- (UIButton *)button
{
    if (!_button) {
        _button = [UIButton buttonWithType:UIButtonTypeSystem];
        /** 添加 */
        [self.view addSubview:_button];
        /** 布局 */
        [_button mas_makeConstraints:^(MASConstraintMaker *make) {
            make.size.equalTo(CGSizeMake(100, 60));
            make.center.equalTo(0);
        }];
        _button.backgroundColor = [UIColor yellowColor];
        [_button bk_addEventHandler:^(id sender) {
            NSLog(@"...");
            [self.view showWaring:kAppDelegate.isOnLine?@"当前有网络":@"当前无网络"];
            [self.view showBusyHUD];
            [NSTimer bk_scheduledTimerWithTimeInterval:3 block:^(NSTimer *timer) {
                [self.view hideBusyHUD];
            } repeats:NO];
            
        } forControlEvents:UIControlEventTouchUpInside];
    }
    return _button;
}

#pragma mark - 生命周期
- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self button];
    
    /** 获知当前网络状态 */
    BOOL onLine = kAppDelegate.isOnLine;
    NSLog(@"当前%@",onLine?@"有网络":@"离线状态");
    
    self.view.backgroundColor = kRGBColor(160, 120,100,1);
 
    [TRLiveNetManager getCategoriesCompletionHandler:nil];
    [TRLiveNetManager getVideosCompletionHandler:nil];
    [TRLiveNetManager getTextCompletionHandler:nil];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
