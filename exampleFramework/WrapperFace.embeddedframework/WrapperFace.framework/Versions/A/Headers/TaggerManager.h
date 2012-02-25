//
//  TaggerManager.h
//  faceWrapper
//
//  Created by macpocket1 on 07/12/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FWObject.h"

@protocol TaggerManagerDelegate <NSObject>
@optional

@end

@interface TaggerManager : NSObject

- (void)saveTagWithObject:(FWObject *)object delegate:(id<TaggerManagerDelegate>)delegate;
- (void)addTagWithObject:(FWObject *)object delegate:(id<TaggerManagerDelegate>)delegate;
- (void)getTagsWithObject:(FWObject *)object delegate:(id<TaggerManagerDelegate>)delegate;
- (void)removeTagWithObject:(FWObject *)object delegate:(id<TaggerManagerDelegate>)delegate;

@end
