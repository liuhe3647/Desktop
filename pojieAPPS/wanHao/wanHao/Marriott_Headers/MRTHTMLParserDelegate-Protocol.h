//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MRTHTMLParser, NSDictionary, NSError, NSString;

@protocol MRTHTMLParserDelegate
- (void)HTMLParser:(MRTHTMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)HTMLParser:(MRTHTMLParser *)arg1 foundCharacters:(NSString *)arg2;
- (void)HTMLParser:(MRTHTMLParser *)arg1 didEndElement:(NSString *)arg2;
- (void)HTMLParser:(MRTHTMLParser *)arg1 didStartElement:(NSString *)arg2 attributes:(NSDictionary *)arg3;
@end

