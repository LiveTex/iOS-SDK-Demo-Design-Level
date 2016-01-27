//
//  LKMessagesViewController.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 22.10.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JSQMessages.h"

@interface LKMessagesViewController : JSQMessagesViewController


/**
 *  Specifies whether or not to show the panel for the estimation of consultation
 *
 *  @discussion The default value is `YES`, which allows to show the panel for the estimation of consultation.
 *  Set to `NO` if you want to disallow to show the panel.
 */
@property(nonatomic, assign) BOOL allowEstimation;

/**
 *  Specifies whether or not to show complaint view controller
 *
 *  @discussion The default value is `YES`, which allows to show complaint view controller.
 *  Set to `NO` if you want to disallow to show complaint view controller.
 */
@property(nonatomic, assign) BOOL allowComplaint;

/**
 *  Specifies whether or not to allow upload image
 *
 *  @discussion The default value is `YES`, which allows upload image.
 *  Set to `NO` if you want to disallow upload image.
 */
@property(nonatomic, assign) BOOL allowUploadImage;

@end
