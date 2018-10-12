//
//  TYModuleRouterProtocol.h
//  Pods
//
//  Created by 房栋 on 2018/3/20.
//

#import <Foundation/Foundation.h>

@protocol TYModuleRouterProtocol <NSObject>

@optional
- (NSArray<NSString *> * _Nullable)registerUrlForModule __deprecated_msg("Use <TYModuleRouteRegisterProtocol -registModuleRoutes> instead");

- (NSDictionary<NSString *, NSArray<NSString *> *> *_Nullable)registerUrlForSchema __deprecated_msg("Use <TYModuleRouteRegisterProtocol -registModuleRoutes> instead") NS_UNAVAILABLE;

- (BOOL)handleUrl:(NSString * _Nonnull)url host:(NSString * _Nonnull)host path:(NSString *_Nullable)path query:(NSDictionary *_Nullable)query parameters:(NSDictionary * _Nullable)parameters __deprecated_msg("Use <TYModuleRouteRegisterProtocol -handleRouteWithSchema:host:path:params:> instead");

@end
