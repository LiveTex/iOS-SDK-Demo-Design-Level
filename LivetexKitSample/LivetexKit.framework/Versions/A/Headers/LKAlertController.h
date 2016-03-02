//
//  LKAlertController.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 03.11.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

@import UIKit;
@import Foundation;

@class LKAlertAction;
typedef void(^actionHandler)(LKAlertAction *action);

typedef NS_ENUM(NSUInteger, LKAlertActionStyle) {
    LKAlertActionStyleDefault = 0,
    LKAlertActionStyleCancel,
    LKAlertActionStyleDestructive
};

typedef NS_ENUM(NSUInteger, LKAlertControllerStyle) {
    LKAlertControllerStyleActionSheet = 0,
    LKAlertControllerStyleAlert
};

@interface LKAlertAction : NSObject

+ (instancetype)actionWithTitle:(NSString *)title style:(LKAlertActionStyle)style handler:(actionHandler)handler;

@property(nonatomic, readonly) NSString *title;
@property(nonatomic, assign, readonly) LKAlertActionStyle style;
@property(nonatomic, getter=isEnabled) BOOL enabled;

@end

@interface LKAlertController : NSObject

- (instancetype)initWithTitle:(NSString *)title message:(NSString *)message preferredStyle:(LKAlertControllerStyle)preferredStyle actions:(NSArray *)actions;

+ (instancetype)alertControllerWithTitle:(NSString *)title message:(NSString *)message preferredStyle:(LKAlertControllerStyle)preferredStyle actions:(NSArray *)actions;

- (void)presentInViewController:(UIViewController *)owner completion:(void (^)(void))completion;

@end
