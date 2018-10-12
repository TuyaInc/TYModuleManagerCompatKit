//
//  TYModuleProtocol.h
//  Pods
//
//  Created by 房栋 on 2018/3/20.
//

#import <Foundation/Foundation.h>

#import "TYModuleCommonConstant.h"

#import "TYModuleRouterProtocol.h"
#import "TYModuleServiceProtocol.h"
#import "TYModuleTabProtocol.h"
#import "TYModuleTaskProtocol.h"
#import "TYModuleLoginLifeCycleProtocol.h"

@protocol TYModuleProtocol <TYModuleRouterProtocol, TYModuleServiceProtocol, TYModuleTabProtocol, TYModuleTaskProtocol, TYModuleLoginLifeCycleProtocol>

@optional
//模块初始化,可以做一些业务初始化
//该方法 使用init方法代替效果一样
- (void)moduleInit __deprecated_msg("Use [NSObject -init] insted");

//模块注销时,比如登出后,很多模块都可以销毁,暂缓无实现, 实现destory 方法效果一样
- (void)moduleDestory __deprecated_msg("Use [NSObject -dealloc] insted");

@end
