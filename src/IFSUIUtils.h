#pragma once

#include "ofMain.h"

namespace IFS
{
	class UiUtils {
	public:
		static ofTrueTypeFont font;
		static void DrawDivider(glm::vec2 & p, int width = 100, int height = 20, int paddingTop = 10);
		static void DrawLabel(const std::string & textString, glm::vec2 & p, int height = 20);
		static void DrawLabel(const std::string & textString, glm::vec2 & p, const ofColor & colour, const ofColor & bgColour, int height = 20);
	protected:
	private:
	};
}