/*
 * Copyright 2023 LiveKit
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

#import <WebRTCFlutter/RTCMacros.h>

@class RTC_OBJC_TYPE(RTCRtpCodecCapability);

NS_ASSUME_NONNULL_BEGIN

RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE (RTCRtpCapabilities) : NSObject

- (instancetype)init NS_UNAVAILABLE;

@property(nonatomic, readonly) NSArray<RTC_OBJC_TYPE(RTCRtpCodecCapability) *> *codecs;

// Not implemented.
// std::vector<RtpHeaderExtensionCapability> header_extensions;

// Not implemented.
// std::vector<FecMechanism> fec;

@end

NS_ASSUME_NONNULL_END
