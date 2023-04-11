//
//  RXAuthLoginService.h
//  RXAuthLoginKit
//
//  Created by 陈汉 on 2022/5/14.
//

#import <Foundation/Foundation.h>
#import <RXSDK_Pure/RXSDK_Pure.h>
#import "RXAuthLoginConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface RXAuthLoginService : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 一键登录弹窗
 * @param config 配置信息
 */
- (void)authLoginWithConfig:(RXAuthLoginConfig *)config;

@end

NS_ASSUME_NONNULL_END
