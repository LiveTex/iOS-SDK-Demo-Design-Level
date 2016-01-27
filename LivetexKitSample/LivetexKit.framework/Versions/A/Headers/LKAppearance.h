//
//  LKThemeManager.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 17.12.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

/**
 *  `LKAppearance` is a class that provides a means for customize appearance of objects
 */
@interface LKAppearance : NSObject

+ (instancetype)appearance;

/**
 *  Online button background color object for state - UIControlStateNormal. Default value - blue color.
 */
@property(nonatomic, strong) UIColor *onlineButtonStateNormalColor;

/**
 *  Offline button background color object for state - UIControlStateNormal. Default value - blue color.
 */
@property(nonatomic, strong) UIColor *offlineButtonStateNormalColor;

/**
 *  Online button background color object for state - UIControlStateHighlighted. Default value - gray color.
 */
@property(nonatomic, strong) UIColor *onlineButtonStateHighlightedColor;

/**
 *  Offline button background color object for state - UIControlStateHighlighted. Default value - gray color.
 */
@property(nonatomic, strong) UIColor *offlineButtonStateHighlightedColor;

/**
 *  Online button title color object. Default value - white color.
 */
@property(nonatomic, strong) UIColor *onlineButtonTextLabelColor;

/**
 *  Offline button button title color object. Default value - white color.
 */
@property(nonatomic, strong) UIColor *offlineButtonTextLabelColor;

/**
 *  NavigationBar background color object. Default value - nil.
 */
@property(nonatomic, strong) UIColor *navigationBarBarTintColor;

/**
 *  NavigationBar items color object. Default value - nil.
 */
@property(nonatomic, strong) UIColor *navigationBarTintColor;

/**
 *  NavigationBar title color object. Default value - black color.
 */
@property(nonatomic, strong) UIColor *navigationBarTitleColor;

/**
 *  Toolbar items color object. Default value - nil.
 */
@property(nonatomic, strong) UIColor *toolbarTintColor;

/**
 *  Toolbar background color object. Default value - nil.
 */
@property(nonatomic, strong) UIColor *toolbarBarTintColor;

/**
 *  Incoming message bubble background color object. Default value - light gray color.
 */
@property(nonatomic, strong) UIColor *incomingBubbleColor;

/**
 *  Outgoing message bubble background color object. Default value - blue color.
 */
@property(nonatomic, strong) UIColor *outgoingBubbleColor;

/**
 *  Incoming message bubble text color object. Default value - black color.
 */
@property(nonatomic, strong) UIColor *incomingBubbleTextColor;

/**
 *  Outgoing message bubble text color object. Default value - white color.
 */
@property(nonatomic, strong) UIColor *outgoingBubbleTextColor;

@end
