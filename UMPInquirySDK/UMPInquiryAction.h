//
//  UMPInquiryAction.h
//  StartUMPSDK
//
//  Created by Larry.Leng on 2021/5/24.
//
//  Version: 1.0.7


#import <UIKit/UIKit.h>
#import "ThirdAuthModel.h"

// 环境类型
typedef NS_ENUM(NSInteger, UMPURLType) {
    URLType_product   = 0 ,    // 生产
    URLType_stg       = 1 ,    // stg
    URLType_stg2      = 2 ,    // stg2
    URLType_dev       = 3 ,    // dev
};

// 结果的回调
typedef void(^UMPResultBlock) (BOOL result);


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


/** 加载网页控制器，push跳转 */
//  此方法和下面的方法 二选一 (推荐此法)
//  naviga(必传) 导航控制器
//  url(可选) 单独加载网页的URL 为空使用对应环境默认值
//  auth(第三方必传) 第三方授权数据
-(void)loadWKWebViewVCAction:(UINavigationController *)naviga url:(NSString *)url auth:(ThirdAuthModel *)auth;


/** 返回控制器，第三方自己跳转 */
//  此方法和上面的方法 二选一 (若使用Model跳转,要加导航控制器,将本方法返回的控制器设置为根控制器)
//  url(可选) 单独加载网页的URL 为空使用对应环境默认值
//  auth(第三方必传) 第三方授权数据
-(UIViewController *)setAuthDataAction:(NSString *)url auth:(ThirdAuthModel *)auth;

// // Push跳转 示例代码
// UIViewController *loadPageVC = [inquiryAction setAuthDataAction:nil auth:thirdModel];
// [self.navigationController pushViewController:loadPageVC animated:YES];

// // Model跳转 示例代码
// UIViewController *loadPageVC = [inquiryAction setAuthDataAction:nil auth:thirdModel];
// UINavigationController *navigaVC = [[UINavigationController alloc] initWithRootViewController:loadPageVC];
// navigaVC.modalPresentationStyle = UIModalPresentationFullScreen;
// [self presentViewController:navigaVC animated:YES completion:nil];


/** 代理 */
// 代理和Block 二选一
@property (nonatomic, weak)id<UMPInquiryDelegate> delegate;

/** 授权结果回调 */
@property (nonatomic, copy)UMPResultBlock authResult;

/** 关闭控制器 */
@property (nonatomic, copy)UMPResultBlock closeUMPVC;


@end

