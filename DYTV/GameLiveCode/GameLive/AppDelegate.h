//
//  AppDelegate.h
//  GameLive
//
//  Created by jiyingxin on 16/4/5.
//  Copyright © 2016年 Tarena. All rights reserved.
//


// http://c.m.163/nc/video/home/1-10.html

/*
 项目的本质:
 服务器人员(JAVA,PHP)提供接口
 美工人员提供效果图和切图
 客户端:
 1.根据美工提供的效果图，用iOS代码把切图拼装成效果图的样子在iOS设备上呈现
 2.通过网络（AFN）代码，从接口中获取数据
 3.网络传输的数据一定是二进制的  二进制——> 字符串（字符串有一定的拼接规则 XML JSON(常用)）
 4.JSON字符串进行序列化之后是由字典和数组拼装起来的
 5.解析:字典用起来的时候很麻烦，要使用key去取值，所以为了解决key难记写错，所以把字典类型转化为类（把一部分有关联的东西合并在一起变成新的类型） 。
 3种类型:
 字典：只能存OC的对象，不能存方法
 结构体:一些c的变量组合在一起的类型，只能存放c的数据类型，不能存方法
 类:能存c能存OC 可以写方法
    为了弥补字典的缺陷，把字典转化成类，这就叫解析。
 6.把数据放到界面上，成功~
 */



@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;



@end

#import "AppDelegate+Custom.h"