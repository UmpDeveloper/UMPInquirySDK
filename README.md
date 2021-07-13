# UMP Inquiry SDK
#### 一.  使用CocoaPods 导入对应版本的 SDK ，名字为:  UMPInquirySDK

```objective-c
pod 'UMPInquirySDK'
```

<img src="https://upload-images.jianshu.io/upload_images/1856215-c8dfc55bfa635244.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200" style="zoom:50%;" />



#### 二.  在Build Settings 中搜索 bitcode 将其设置为No (腾讯的TRTC SDK要求)

<img src="https://upload-images.jianshu.io/upload_images/1856215-3766a7064da1de84.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200" style="zoom:50%;" />



#### 三.  在项目的 Info.plist 文件中添加 相机、麦克风、定位、网络请求、支付的白名单(目前只是微信支付) 和 国际化字段 (6个字段)

<img src="https://upload-images.jianshu.io/upload_images/1856215-7c77393a491bfc84.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200" style="zoom:50%;" />



#### 四. 在Info中添加URL Schemes，用来微信支付返回App操作。格式示例: xxx.eatonclinic.com

<img src="https://upload-images.jianshu.io/upload_images/1856215-c08174f3755a8651.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200" alt="https://upload-images.jianshu.io/upload_images/1856215-c08174f3755a8651.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200" style="zoom:50%;" />



#### 五.  在 AppDelegate.m 中 导入 #import "UMPInquiryAction.h"，然后在方法 didFinishLaunching 设置请求的环境

<img src="https://upload-images.jianshu.io/upload_images/1856215-6a87f2f04e00b6dd.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200" style="zoom:50%;" />



#### 六. 最后就是真正调用SDK中的功能，使用 UMPInquiryAction 类中 loadWKWebViewVCAction 或者 setAuthDataAction 方法，设置代理或者Block回调状态。

