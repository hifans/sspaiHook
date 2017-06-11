//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@interface NSMutableDictionary (SSDKShare)
- (void)SSDKEnableUseClientShare;
- (void)SSDKSetShareFlags:(id)arg1;
- (void)SSDKSetupAliPaySocialParamsByText:(id)arg1 image:(id)arg2 title:(id)arg3 url:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupCopyParamsByText:(id)arg1 images:(id)arg2 url:(id)arg3 type:(unsigned long long)arg4;
- (void)SSDKSetupDouBanParamsByText:(id)arg1 image:(id)arg2 title:(id)arg3 url:(id)arg4 urlDesc:(id)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupDropboxParamsByAttachment:(id)arg1;
- (void)SSDKSetupEvernoteParamsByText:(id)arg1 images:(id)arg2 title:(id)arg3 notebook:(id)arg4 tags:(id)arg5 platformType:(unsigned long long)arg6;
- (void)SSDKSetupFacebookMessengerParamsByImage:(id)arg1 gif:(id)arg2 audio:(id)arg3 video:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupFacebookParamsByText:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3;
- (void)SSDKSetupFlickrParamsByText:(id)arg1 image:(id)arg2 title:(id)arg3 tags:(id)arg4 isPublic:(_Bool)arg5 isFriend:(_Bool)arg6 isFamily:(_Bool)arg7 safetyLevel:(long long)arg8 contentType:(long long)arg9 hidden:(long long)arg10;
- (void)SSDKSetupGooglePlusParamsByText:(id)arg1 url:(id)arg2 type:(unsigned long long)arg3;
- (void)SSDKSetupInstagramByImage:(id)arg1 menuDisplayPoint:(struct CGPoint)arg2;
- (void)SSDKSetupInstapaperParamsByUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 content:(id)arg4 isPrivateFromSource:(_Bool)arg5 folderId:(long long)arg6 resolveFinalUrl:(_Bool)arg7;
- (void)SSDKSetupKaKaoParamsByText:(id)arg1 images:(id)arg2 title:(id)arg3 url:(id)arg4 permission:(id)arg5 enableShare:(_Bool)arg6 imageSize:(struct CGSize)arg7 appButtonTitle:(id)arg8 androidExecParam:(id)arg9 androidMarkParam:(id)arg10 iphoneExecParams:(id)arg11 iphoneMarkParam:(id)arg12 ipadExecParams:(id)arg13 ipadMarkParam:(id)arg14 type:(unsigned long long)arg15 forPlatformSubType:(unsigned long long)arg16;
- (void)SSDKSetupKaiXinParamsByText:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3;
- (void)SSDKSetupLineParamsByText:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3;
- (void)SSDKSetupLinkedInParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 title:(id)arg4 urlDesc:(id)arg5 visibility:(id)arg6 type:(unsigned long long)arg7;
- (void)SSDKSetupMailParamsByText:(id)arg1 title:(id)arg2 images:(id)arg3 attachments:(id)arg4 recipients:(id)arg5 ccRecipients:(id)arg6 bccRecipients:(id)arg7 type:(unsigned long long)arg8;
- (void)SSDKSetupMingDaoParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 title:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupPinterestParamsByImage:(id)arg1 desc:(id)arg2 url:(id)arg3 boardId:(id)arg4;
- (void)SSDKSetupPocketParamsByUrl:(id)arg1 title:(id)arg2 tags:(id)arg3 tweetId:(id)arg4;
- (void)SSDKSetupQQParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 audioFlashURL:(id)arg4 videoFlashURL:(id)arg5 thumbImage:(id)arg6 image:(id)arg7 type:(unsigned long long)arg8 forPlatformSubType:(unsigned long long)arg9;
- (void)SSDKSetupQQParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 thumbImage:(id)arg4 image:(id)arg5 type:(unsigned long long)arg6 forPlatformSubType:(unsigned long long)arg7;
- (void)SSDKSetupRenRenParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 albumId:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupSMSParamsByText:(id)arg1 title:(id)arg2 images:(id)arg3 attachments:(id)arg4 recipients:(id)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupShareParamsByText:(id)arg1 images:(id)arg2 url:(id)arg3 title:(id)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupSinaWeiboShareParamsByText:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 objectID:(id)arg7 type:(unsigned long long)arg8;
- (void)SSDKSetupTencentWeiboShareParamsByText:(id)arg1 images:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupTumblrParamsByText:(id)arg1 image:(id)arg2 url:(id)arg3 title:(id)arg4 blogName:(id)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupTwitterParamsByText:(id)arg1 images:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 type:(unsigned long long)arg5;
- (void)SSDKSetupVKontakteParamsByText:(id)arg1 images:(id)arg2 url:(id)arg3 groupId:(id)arg4 friendsOnly:(_Bool)arg5 latitude:(double)arg6 longitude:(double)arg7 type:(unsigned long long)arg8;
- (void)SSDKSetupWeChatParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 thumbImage:(id)arg4 image:(id)arg5 musicFileURL:(id)arg6 extInfo:(id)arg7 fileData:(id)arg8 emoticonData:(id)arg9 sourceFileExtension:(id)arg10 sourceFileData:(id)arg11 type:(unsigned long long)arg12 forPlatformSubType:(unsigned long long)arg13;
- (void)SSDKSetupWeChatParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 thumbImage:(id)arg4 image:(id)arg5 musicFileURL:(id)arg6 extInfo:(id)arg7 fileData:(id)arg8 emoticonData:(id)arg9 type:(unsigned long long)arg10 forPlatformSubType:(unsigned long long)arg11;
- (void)SSDKSetupWhatsAppParamsByText:(id)arg1 image:(id)arg2 audio:(id)arg3 video:(id)arg4 menuDisplayPoint:(struct CGPoint)arg5 type:(unsigned long long)arg6;
- (void)SSDKSetupYiXinParamsByText:(id)arg1 title:(id)arg2 url:(id)arg3 thumbImage:(id)arg4 image:(id)arg5 musicFileURL:(id)arg6 extInfo:(id)arg7 fileData:(id)arg8 comment:(id)arg9 toUserId:(id)arg10 type:(unsigned long long)arg11 forPlatformSubType:(unsigned long long)arg12;
- (void)SSDKSetupYouDaoNoteParamsByText:(id)arg1 images:(id)arg2 title:(id)arg3 source:(id)arg4 author:(id)arg5 notebook:(id)arg6;
- (id)convertToImages:(id)arg1;
@end

