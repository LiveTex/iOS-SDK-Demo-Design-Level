//
//  JSQMessagesEstimationBar.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 09.11.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, JSQEstimationBarButtonType) {
    JSQEstimationBarButtonTypeBad = -1,
    JSQEstimationBarButtonTypeGood = 1
};

@class JSQMessagesEstimationBar;

/**
 *  The `JSQMessagesEstimationBarDelegate` protocol defines methods for interacting with
 *  a `JSQMessagesEstimationBar` object.
 */
@protocol JSQMessagesEstimationBarDelegate <NSObject>

@required

/**
 *  Tells the delegate that the bar's `EstimationBarButton` has been pressed.
 *
 *  @param estimationBar The object representing the estimationBar sending this information.
 *  @param sender  The button that received the touch event.
 */
- (void)messagesEstimationBar:(JSQMessagesEstimationBar *)estimationBar didPressEstimationBarButton:(UIBarButtonItem *)sender;

@end

@interface JSQMessagesEstimationBar : UINavigationBar

/**
 *  The object that acts as the delegate of the bar.
 */
@property(nonatomic, weak) id<JSQMessagesEstimationBarDelegate> estimationDelegate;

@end
