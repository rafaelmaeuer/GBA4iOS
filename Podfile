source 'https://cdn.cocoapods.org/'

platform :ios, '9.0'

use_frameworks!


def all_pods
	pod 'NJKWebViewProgress', :git => 'https://github.com/rafaelmaeuer/NJKWebViewProgress.git'
	pod 'RSTWebViewController', :git => 'https://github.com/rafaelmaeuer/RSTWebViewController-Legacy.git'
	pod 'AFNetworking', '~> 4.0'
	pod 'PSPDFTextView', :git => 'https://github.com/steipete/PSPDFTextView.git'
	pod 'ObjectiveDropboxOfficial', '~> 3.10.0'
	# pod 'CrashlyticsFramework'
end

target 'GBA4iOS' do
	all_pods
end

target 'GBA4iOS-Simulator' do
	all_pods
end
