//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SessionModel;

@interface SessionFrameModel : NSObject
{
    double _rowHeight;
    SessionModel *_msg;
    struct CGRect _timeF;
    struct CGRect _iconF;
    struct CGRect _textF;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect iconF; // @synthesize iconF=_iconF;
@property(retain, nonatomic) SessionModel *msg; // @synthesize msg=_msg;
@property(readonly, nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) struct CGRect textF; // @synthesize textF=_textF;
@property(readonly, nonatomic) struct CGRect timeF; // @synthesize timeF=_timeF;

@end
