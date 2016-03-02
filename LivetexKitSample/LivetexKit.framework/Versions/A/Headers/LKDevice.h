//
//  LKDevice.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 16.11.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LKDevice : UIDevice

+ (LKDevice *)currentDevice;

@property(nonatomic, readonly, copy) NSString *carrierName;
@property(nonatomic, readonly, copy) NSString *deviceModel;

- (double)capacityMemory;
- (double)availableMemory;

- (NSString *)capacityDiskSpace;
- (NSString *)availableDiskSpace;

- (NSString *)networkConnectionInfo;

@end
