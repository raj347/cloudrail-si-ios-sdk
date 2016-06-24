//
//  Refund.h
//  CloudRail_ServiceCode
//
//  Created by Felipe Cesar on 20/06/16.
//  Copyright © 2016 CloudRail. All rights reserved.
//

#import "SandboxObject.h"

@interface Refund : SandboxObject

@property (nonatomic) NSString * identifier;
@property (nonatomic) NSNumber * amount;
@property (nonatomic) NSNumber * created;
@property (nonatomic) NSString * currency;
@property (nonatomic) NSString * chargeID;
@property (nonatomic) NSString * state;

@end
