#
# Be sure to run `pod lib lint TYModuleManagerCompatKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TYModuleManagerCompatKit'
  s.version          = '0.1.0'
  s.summary          = 'compatKit for TYModuleManager < 1.0.0'
  s.homepage         = 'https://github.com/pany/TYModuleManagerCompatKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'tuyaios' => 'ios@tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYModuleManagerCompatKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'TYModuleManagerCompatKit/Headers/**/*'
  s.vendored_library = 'TYModuleManagerCompatKit/libTYModuleManagerCompatKit.a'

  s.dependency 'TYModuleServices'
  s.dependency 'TYModuleManager'

end
