//
//  UMPInquiryAction.h
//  StartUMPSDK
//
//  Created by Larry.Leng on 2021/5/24.
//
//  Version: 1.0.0


#import <UIKit/UIKit.h>
#import "ThirdAuthModel.h"


// 环境类型
typedef NS_ENUM(NSInteger, UMPURLType) {
    URLType_product   = 0 ,    // 生产
    URLType_stg       = 1 ,    // stg
    URLType_stg2      = 2 ,    // stg2
    URLType_dev       = 3 ,    // dev
};


@protocol UMPInquiryDelegate <NSObject>

@optional

/** 授权结果回调 */
-(void)authResult:(BOOL)isSucceed;

/** 关闭控制器操作 */
-(void)closeUMPVCAction:(BOOL)isBack;

@end


@interface UMPInquiryAction : NSObject


/** 单例初始化本类 */
+(instancetype)shareAction;


/** 设置环境类型和加载的URL操作 */
-(void)setURLTypeAction:(UMPURLType)type;


/** 加载网页控制器 */
//  naviga(必传) 导航控制器
//  url(可选) 单独加载网页的URL 为空使用对应环境默认值
//  auth(第三方必传) 第三方授权数据
-(void)loadWKWebViewVCAction:(UINavigationController *)naviga url:(NSString *)url auth:(ThirdAuthModel *)auth;


/** 代理 */
@property (nonatomic, weak)id<UMPInquiryDelegate> delegate;



@end

