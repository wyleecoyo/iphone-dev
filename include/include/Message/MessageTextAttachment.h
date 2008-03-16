/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class MessageFileWrapper;

@interface MessageTextAttachment : NSObject
{
    MessageFileWrapper *_fileWrapper;
}

- (BOOL)allowDownload;	// IMP=0x30b70c21
- (unsigned int)approximateSize;	// IMP=0x30b7090d
- (void)dealloc;	// IMP=0x30b708d1
- (id)fileWrapper;	// IMP=0x30b70b61
- (id)fileWrapperForcingDownload:(BOOL)fp8;	// IMP=0x30b70b65
- (BOOL)hasBeenDownloaded;	// IMP=0x30b70ae9
- (id)initWithWrapper:(id)fp8;	// IMP=0x30b7088d
- (void)inlineDisplayData:(id *)fp8 mimeType:(id *)fp12;	// IMP=0x30b70b79
- (BOOL)isPlaceholder;	// IMP=0x30b70b09
- (id)mimePart;	// IMP=0x30b70ae5
- (void)setFileWrapper:(id)fp8;	// IMP=0x30b70b31
- (BOOL)shouldDownloadAttachmentOnDisplay;	// IMP=0x30b70b2d

@end
