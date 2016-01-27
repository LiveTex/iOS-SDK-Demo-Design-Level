//
//  LKPopupView.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 17.11.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LKPopupViewShowType) {
    LKPopupViewShowTypeNone = 0,
    LKPopupViewShowTypeFadeIn,
    LKPopupViewShowTypeGrowIn,
    LKPopupViewShowTypeShrinkIn,
    LKPopupViewShowTypeSlideInFromTop,
    LKPopupViewShowTypeSlideInFromBottom,
    LKPopupViewShowTypeSlideInFromLeft,
    LKPopupViewShowTypeSlideInFromRight,
    LKPopupViewShowTypeBounceIn,
    LKPopupViewShowTypeBounceInFromTop,
    LKPopupViewShowTypeBounceInFromBottom,
    LKPopupViewShowTypeBounceInFromLeft,
    LKPopupViewShowTypeBounceInFromRight,
};

typedef NS_ENUM(NSInteger, LKPopupViewDismissType) {
    LKPopupViewDismissTypeNone = 0,
    LKPopupViewDismissTypeFadeOut,
    LKPopupViewDismissTypeGrowOut,
    LKPopupViewDismissTypeShrinkOut,
    LKPopupViewDismissTypeSlideOutToTop,
    LKPopupViewDismissTypeSlideOutToBottom,
    LKPopupViewDismissTypeSlideOutToLeft,
    LKPopupViewDismissTypeSlideOutToRight,
    LKPopupViewDismissTypeBounceOut,
    LKPopupViewDismissTypeBounceOutToTop,
    LKPopupViewDismissTypeBounceOutToBottom,
    LKPopupViewDismissTypeBounceOutToLeft,
    LKPopupViewDismissTypeBounceOutToRight,
};

@interface LKPopupView : UIView

// This is the view that you want to appear in Popup.
@property(nonatomic, strong) UIView *contentView;

// Animation duration. default = 0.0
@property(nonatomic, assign) NSTimeInterval duration;

// Animation transition for presenting contentView. default = FadeIn
@property(nonatomic, assign) LKPopupViewShowType showType;

// Animation transition for dismissing contentView. default = FadeOut
@property(nonatomic, assign) LKPopupViewDismissType dismissType;

// Overrides alpha value for dimmed background mask. default = 0.1
@property(nonatomic, assign) CGFloat dimmedMaskAlpha;

// If YES, then popup will get dismissed when background is touched. default = NO.
@property(nonatomic, assign) BOOL shouldDismissOnBackgroundTouch;

// If YES, then popup will get dismissed when content view is touched. default = NO.
@property(nonatomic, assign) BOOL shouldDismissOnContentTouch;

// Show centered at point in view's coordinate system, then dismiss after duration.
- (void)showInView:(UIView *)superView;

// Convenience method for creating popup with default values.
+ (LKPopupView *)popupWithContentView:(UIView *)contentView;

// Convenience method for creating popup with custom values.
+ (LKPopupView *)popupWithDuration:(NSTimeInterval)duration
                       contentView:(UIView *)contentView
                         showType:(LKPopupViewShowType)showType
                      dismissType:(LKPopupViewDismissType)dismissType
         dismissOnBackgroundTouch:(BOOL)shouldDismissOnBackgroundTouch
            dismissOnContentTouch:(BOOL)shouldDismissOnContentTouch;

@end
