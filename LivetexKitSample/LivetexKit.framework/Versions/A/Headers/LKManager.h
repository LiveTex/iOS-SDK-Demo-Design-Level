//
//  LKManager.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 28.10.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

@import Foundation;

#import "LTMobileSDK.h"

@interface LKManager : NSObject

+ (LKManager *)sharedManager;

@property(nonatomic, readonly, strong) LTMobileSDK *mobileSDK;

- (void)registerWithParameters:(LTMobileSDKInitializationParams *)parameters;

@end
