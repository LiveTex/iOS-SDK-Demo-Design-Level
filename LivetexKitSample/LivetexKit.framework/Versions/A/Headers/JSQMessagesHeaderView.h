//
//  Created by Jesse Squires
//  http://www.jessesquires.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>

@class JSQMessagesHeaderView;

/**
 *  A constant defining the default height of a `JSQMessagesLoadEarlierHeaderView`.
 */
FOUNDATION_EXPORT const CGFloat kJSQMessagesHeaderViewHeight;

/**
 *  The `JSQMessagesLoadEarlierHeaderViewDelegate` defines methods that allow you to
 *  respond to interactions within the header view.
 */
@protocol JSQMessagesHeaderViewDelegate <NSObject>

@required

/**
 *  Tells the delegate that the loadButton has received a touch event.
 *
 *  @param headerView The header view that contains the sender.
 *  @param sender     The button that received the touch.
 */
- (void)headerView:(JSQMessagesHeaderView *)headerView didPressLoadButton:(UIButton *)sender;

@end


/**
 *  The `JSQMessagesLoadEarlierHeaderView` class implements a reusable view that can be placed
 *  at the top of a `JSQMessagesCollectionView`. This view contains a "load earlier messages" button
 *  and can be used as a way for the user to load previously sent messages.
 */
@interface JSQMessagesHeaderView : UICollectionReusableView

/**
 *  The object that acts as the delegate of the header view.
 */
@property (weak, nonatomic) id<JSQMessagesHeaderViewDelegate> delegate;

/**
 *  Returns the load button of the header view.
 */
@property (strong, nonatomic, readonly) UIButton *loadButton;

#pragma mark - Class methods

/**
 *  Returns the default string used to identify the reusable header view.
 *
 *  @return The string used to identify the reusable header view.
 */
+ (NSString *)headerReuseIdentifier;

@end
