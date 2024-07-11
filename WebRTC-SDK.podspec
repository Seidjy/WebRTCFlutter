Pod::Spec.new do |spec|

    spec.name         = "WebRTC-SDK"
    spec.version      = "1.0.1"
    spec.summary      = "WebRTC pre-compiled library for Darwin. "
    spec.description  = <<-DESC
    WebRTC pre-compiled library for Darwin.
    The binary files in this repository are compiled using Google WebRTC source code M version, 
    and a series of optimization patches from the webrtc-sdk community have been added.
    DESC
  
    spec.homepage     = "https://github.com/webrtc-sdk/Specs"
    spec.license      = { :type => 'BSD', :file => 'WebRTCFlutter.xcframework/LICENSE' }
    spec.author       = "webrtc-sdk"
    spec.ios.deployment_target = '12.0'

    spec.source           = { :git => 'https://github.com/Seidjy/WebRTCFlutter.git', :tag => "1.0.1" }
    spec.vendored_frameworks = "WebRTCFlutter.xcframework"
    
  end
