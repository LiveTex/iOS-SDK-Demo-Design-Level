//
//  LKDatabaseController.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 10.11.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LKMessage.h"

@interface LKDatabaseController : NSObject

+ (LKDatabaseController *)defaultController;

- (void)insertMessage:(JSQMessage *)message;
- (void)deleteMessage:(LKMessage *)message;
- (NSArray *)messages;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
