//
//  ViewController.h
//  RTMPCDemo
//
//  Created by EricTao on 16/7/20.
//  Copyright © 2016年 EricTao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LivingItem:NSObject
@property (nonatomic, strong) NSString *hosterId;    // 主播ID
@property (nonatomic, strong) NSString *rtmp_url;    // rtmp 推流地址
@property (nonatomic, strong) NSString *rtmp;
@property (nonatomic, strong) NSString *hls_url;     // hls 地址
@property (nonatomic, strong) NSString *topic;       // 标题
@property (nonatomic, strong) NSString *andyrtcId;   // anyrtcID
@property (nonatomic, strong) NSString *LiveMembers; // 观看人数
@end

@interface ViewController : UIViewController


@end

