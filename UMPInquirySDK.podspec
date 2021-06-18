

#
#  Be sure to run `pod spec lint UMPInquirySDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#




Pod::Spec.new do |spec|

  spec.name         = "InquirySDK"
  spec.version      = "1.0.0"
  spec.summary      = "Video consultation SDK."
  spec.description  = "Start to initialize SDK"

  spec.homepage     = "https://github.com/LengQH/UMPInquirySDK"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Larry.Leng" => "larry.leng@ump.com.hk" }
  spec.platform     = :ios, "9.0" 
  spec.ios.deployment_target = "9.0"
  spec.xcconfig     = { 'VALID_ARCHS' => 'armv7 arm64' }
 


  spec.source       = { :git => "https://github.com/LengQH/UMPInquirySDK.git", :tag => "#{spec.version}" }


  spec.source_files = "**/UMPInquirySDK/*.{h}"
  spec.ios.vendored_libraries = "**/UMPInquirySDK/libUMPInquirySDK.a"
  # spec.vendored_libraries = "**/UMPInquirySDK/*.{a}"
  # spec.vendored_frameworks = "引用自己的动态库"
  spec.resource = ['**/UMPInquirySDK/Library/UMPImageList.bundle','**/UMPInquirySDK/Library/UMPXIBList.bundle','**/UMPInquirySDK/Library/TUIKitResource.bundle']


  spec.static_framework = true
  spec.xcconfig = {'OTHER_LDFLAGS' => '-ObjC'}
  spec.frameworks = "UIKit", 'Foundation'
  spec.requires_arc = true

  spec.dependency "MBProgressHUD", "~> 1.2.0"
  spec.dependency 'AFNetworking', '~> 4.0.1'
  spec.dependency 'MJExtension', '~> 3.2.4'
  spec.dependency 'TXLiteAVSDK_Professional', '~> 8.5.10022'
  spec.dependency 'ReactiveObjC', '3.1.1'
  spec.dependency 'TXIMSDK_iOS', '5.1.60'
  spec.dependency 'SDWebImage', '5.9.0'
  spec.dependency 'MMLayout', '0.2.0'
  spec.dependency 'Toast', '4.0.0'


end
