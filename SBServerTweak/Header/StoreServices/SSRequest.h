//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "SSXPCCoding.h"
#import "SSRequestDelegate.h"

@class SSXPCConnection;

@interface SSRequest : NSObject <SSXPCCoding>
{
    long long _backgroundTaskIdentifier;
    _Bool _cancelAfterTaskExpiration;
    id <SSRequestDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}

@property(nonatomic) id <SSRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_shutdownRequestWithMessageID:(long long)arg1;
- (void)__endBackgroundTask;
- (void)__beginBackgroundTask;
//- (void)_startWithMessageID:(long long)arg1 messageBlock:(CDUnknownBlockType)arg2;
- (void)_shutdownRequest;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
@property(nonatomic) _Bool shouldCancelAfterTaskExpiration;
//- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)start;
- (void)disconnect;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)_initSSRequest;

@end

