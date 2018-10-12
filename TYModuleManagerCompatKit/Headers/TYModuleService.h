//
//  TYModuleService.h
//  TYModuleManagerCompatKit
//
//  Created by 房栋 on 2018/3/27.
//

#import <Foundation/Foundation.h>

@protocol TYMainViewControllerProtocol;

@interface TYModuleService : NSObject

+ (id _Nullable)moduleServiceForProtocol:(Protocol * _Nonnull)protocol __deprecated_msg("Use [TYModule +serviceForProtocol] insted");

+ (void)moduleServiceResetRoot:(UIViewController * _Nullable)viewController __deprecated_msg("Use [TYModule.applicationService -resetRootViewController] instead");

//+ (id<TYMainViewControllerProtocol> _Nullable )mainViewController __deprecated_msg("deprecated");

+ (void)moduleServiceResetMain __deprecated_msg("Use [TYModule.applicationService -reloadRootViewController] instead");

@end
