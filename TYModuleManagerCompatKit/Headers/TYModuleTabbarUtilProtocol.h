//
//  TYModuleTabbarUtilProtocol.h
//  Pods
//
//  Created by 房栋 on 2018/5/22.
//

#import <Foundation/Foundation.h>

__deprecated_msg("No longer supported") @protocol TYModuleTabbarUtilProtocol <NSObject>

+ (void)showTabbarWithModuleImpl:(Class)module __deprecated_msg("Use [TYModule.tabService -showTabWithModule] insted");

+ (void)popToRootViewController __deprecated_msg("Maybe use [tp_topMostViewController().navigationController popToRootViewControllerAnimated:NO] insted");

+ (BOOL)isRootViewController:(UIViewController *)controller __deprecated_msg("Use [TYModule.applicationService -currentRootViewController] insted");

@end
