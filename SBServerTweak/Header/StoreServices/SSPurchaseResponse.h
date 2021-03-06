//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSArray, NSError, NSMutableDictionary, SSPurchase, SSURLConnectionResponse;

@interface SSPurchaseResponse : NSObject <SSXPCCoding>
{
    _Bool _cancelsPurchaseBatch;
    NSArray *_downloadIdentifiers;
    NSError *_error;
    SSPurchase *_purchase;
    SSURLConnectionResponse *_response;
    NSMutableDictionary *_transactionIdentifiers;
}

@property(retain, nonatomic) SSURLConnectionResponse *URLResponse; // @synthesize URLResponse=_response;
@property(copy, nonatomic) SSPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *downloadIdentifiers; // @synthesize downloadIdentifiers=_downloadIdentifiers;
@property(nonatomic) _Bool cancelsPurchaseBatch; // @synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;
- (void)dealloc;

@end

