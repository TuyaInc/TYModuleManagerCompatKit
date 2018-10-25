//
//  TYModuleTaskProtocol.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/4/9.
//

#import <Foundation/Foundation.h>

#import "TYTaskProtocol.h"

@protocol TYModuleTaskProtocol <NSObject>

@optional
- (NSArray<Class<TYTaskProtocol>> * _Nullable)registerTasksForModule  __deprecated_msg("Use <TYModuleLaunchTaskRegisterProtocol -registLaunchTasks> insted");
@end
