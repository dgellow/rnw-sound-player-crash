#pragma once

#include "winrt/Windows.Media.Playback.h"
#include "winrt/Windows.Media.Core.h"
#include "NativeModules.h"

namespace winrt {
	using winrt::Windows::Media::Playback::MediaPlayer;
	using winrt::Windows::Media::Core::MediaSource;
}

namespace NativeModuleSample {
	REACT_MODULE(SoundPlayer);
	struct SoundPlayer {
		REACT_INIT(Initialize);
		void Initialize(React::ReactContext const& context) noexcept;


		REACT_METHOD(Play, L"play");
		void Play(int sound) noexcept;

	private:
		React::ReactContext _context;
	};
}
