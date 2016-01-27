//
//  LKMessage.h
//  LivetexKit
//
//  Created by Эмиль Абдуселимов on 10.11.15.
//  Copyright © 2015 Livetex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "JSQMessage.h"

@interface LKMessage : NSManagedObject

@property (nullable, nonatomic, retain) JSQMessage *jsqMessage;

@end