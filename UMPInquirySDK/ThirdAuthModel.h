//
//  ThirdAuthModel.h
//  StartUMPSDK
//
//  Created by Larry.Leng on 2021/5/26.
//

#import <Foundation/Foundation.h>

@class TRTCConfigModel;
@interface ThirdAuthModel : NSObject

/** 授权的Code(必传) */
@property (nonatomic, copy)NSString *code;

/** App的URL Schemes(必传) */
// 格式示例: xxx.eatonclinic.com
@property (nonatomic, copy)NSString *appSchemesValue;

// 第三方来源(可选)
@property (nonatomic, copy)NSString *thirdSource;

// TRTC中的配置(可选)
@property (nonatomic, strong)TRTCConfigModel *trtcConfig;

@end

@interface TRTCConfigModel : NSObject

/** 是否关闭IM(图文交流) */
// 默认不关闭
@property (nonatomic, assign)BOOL isCleanIM;

@end


