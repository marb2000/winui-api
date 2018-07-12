﻿//
// App.xaml.h
// Declaration of the App class.
//

#pragma once

#include "App.g.h"
#include "WebViewPage.xaml.h"
#include "GlobalPage.xaml.h"
#include "SnippetsPage.xaml.h"

namespace AppBarSample
{
	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	ref class App sealed
	{
	public:
		App();
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ pArgs) override;

	private:
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
	};
}
