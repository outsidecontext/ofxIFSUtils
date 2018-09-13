#include "IFSUIUtils.h"
using namespace std;
using namespace IFS;

ofTrueTypeFont UiUtils::font;


void UiUtils::DrawDivider(glm::vec2 & p, int width, int height, int paddingTop) {
	p.y += paddingTop;
	ofDrawRectangle(p, width, height);
	p.y += height * 2;
}

void UiUtils::DrawLabel(const string & textString, glm::vec2 & p, int height) {
	if (font.isLoaded())
	{
		font.drawString(textString, p.x, p.y);
	}
	else
	{
		ofDrawBitmapString(textString, p);
	}
	p.y += height;
}

void UiUtils::DrawLabel(const string & textString, glm::vec2 & p, const ofColor & colour, const ofColor & bgColour, int height) {
	if (font.isLoaded())
	{
		font.drawString(textString, p.x, p.y);
	}
	else
	{
		ofDrawBitmapString(textString, p);
		ofDrawBitmapStringHighlight(textString, p, bgColour, colour);
	}
	p.y += height;
}
