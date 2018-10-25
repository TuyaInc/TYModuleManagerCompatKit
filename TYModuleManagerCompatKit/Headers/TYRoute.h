//
//  TYRouteUtil.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/3/23.
//

#import <Foundation/Foundation.h>

__deprecated_msg("Use [TYModule routeService] insted") @interface TYRoute : NSObject

+ (BOOL)openURL:(NSString * _Nonnull)targetURL __deprecated_msg("Use [TYModule.routeService -openURL:withParams:] instead");
+ (BOOL)openURL:(NSString * _Nonnull)targetURL parameters:(nullable NSDictionary *)parameters __deprecated_msg("Use [TYModule.routeService -openURL:withParams:] instead");
@end
