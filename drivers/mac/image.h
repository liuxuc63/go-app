#ifndef image_h
#define image_h

#import <Cocoa/Cocoa.h>
#import "retro.h"
 
@interface NSImage (ImageCategory)
+ (NSImage *)resizedImage:(NSImage *)sourceImage
        toPixelDimensions:(NSSize)newSize;
@end

#endif /* image_h */