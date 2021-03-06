/*
This file manages time-related functionality
*/

#ifndef EAE6320_TIME_H
#define EAE6320_TIME_H

// Header Files
//=============

#include <string>

// Interface
//==========

namespace Engine
{
	namespace Time
	{
		// Time
		//-----

		float GetTotalSecondsElapsed();
		float GetSecondsElapsedThisFrame();

		void OnNewFrame();

		// Initialization / Shut Down
		//---------------------------

		bool Initialize(std::string* o_errorMessage = NULL);
	}
}

#endif	// EAE6320_TIME_H
