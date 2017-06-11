//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNModelObject.h"

@class BTNBackground, BTNImage, BTNLink, BTNText;

@interface BTNFooter : BTNModelObject
{
    BTNText *_labelText;
    BTNImage *_iconImage;
    BTNBackground *_background;
    BTNLink *_action;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) BTNLink *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) BTNBackground *background; // @synthesize background=_background;
- (id)dictionaryRepresentation;
@property(readonly, copy, nonatomic) BTNImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, copy, nonatomic) BTNText *labelText; // @synthesize labelText=_labelText;
- (void)updateWithRepresentation:(id)arg1;

@end

