//
//  LCYCommon.h
//  YouBaoOC
//
//  Created by Licy on 14-7-24.
//  Copyright (c) 2014年 Duostec. All rights reserved.
//

#import "LCYNetworking.h"

FOUNDATION_EXPORT NSString *const UserDefaultUserName;
FOUNDATION_EXPORT NSString *const UserDefaultIsUserLogin;

@interface LCYCommon : NSObject

/**
 * gets singleton object.
 * @return singleton
 */
+ (LCYCommon*)sharedInstance;

/**
 *  判断用户是否已经登录
 *
 *  @return YES or NO
 */
- (BOOL)isUserLogin;

/**
 *  保存密码，通过加密
 *
 *  @param password 原始密码
 */
- (void)savePassword:(NSString *)password;

/**
 *  解密获得保存的用户密码
 *
 *  @return 解密获得的原始密码
 */
- (NSString *)takePassword;

- (void)showTips:(NSString *)message
          inView:(UIView *)view;

- (void)hideTipsInView:(UIView *)view;
@end
