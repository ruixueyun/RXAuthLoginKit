//
//  RXAuthLoginService.h
//  RXAuthLoginKit
//
//  Created by 陈汉 on 2022/5/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RXAuthLoginService : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 一键登录弹窗
 * @param privacy1 用户协议url
 * @param privacy2 隐私协议url
 * @param callback 登录回调
 * @param atauth_appkey 一键登录appkey
 * success为YES，将accessToken返回值传入登录接口的extDic中
 * success为NO视为授权失败
 */
- (void)setAuthLoginViewWithPrivacy1:(NSString *)privacy1
                            privacy2:(NSString *)privacy2
                       atauth_appkey:(NSString *)atauth_appkey
                            callBack:(void(^)(NSString *accessToken, BOOL success))callBack;

@end

NS_ASSUME_NONNULL_END
