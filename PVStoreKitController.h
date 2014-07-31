//
//  PVStoreKitController.h
//
//  Created by Pradip Vanparia on 27/12/13.
//
//

#import <Foundation/Foundation.h>

typedef void (^completionHandler)(BOOL success, NSArray *PurchasedProducts ,NSArray *FailedProducts);

#define ErrorTrasactionNotification  @"TrasactionErrorNotification"

@interface PVStoreKitController : NSObject

+(PVStoreKitController *)SharedInstance;

-(void)doBuyProductWithIdentifiers:(NSSet *)productIdentifiers withCompletionHandler:(completionHandler)handler1;

-(void)restoreProductWithCompletionHandler:(completionHandler) restoreHandler;

@end
