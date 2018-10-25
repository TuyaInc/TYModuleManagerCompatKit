//
//  TYModuleLoginUtil.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/5/7.
//

#import <Foundation/Foundation.h>

@interface TYModuleLoginUtil : NSObject
+ (void)userDidLoginSuccess __deprecated_msg("Use [TYModule.notifyService -triggerNotify:] instead");
+ (void)userDidAutoLoginSuccess __deprecated_msg("Use [TYModule.notifyService -triggerNotify:] instead");
+ (void)userDidLogOut __deprecated_msg("Use [TYModule.notifyService -triggerNotify:] instead");
+ (void)userDidForcedLogOut __deprecated_msg("Use [TYModule.notifyService -triggerNotify:] instead");
@end
