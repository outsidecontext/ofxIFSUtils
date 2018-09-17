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
		ofPushStyle();
		ofSetColor(bgColour);
		auto bounds = font.getStringBoundingBox(textString, p.x, p.y);
		int padding = 12;
		bounds.width += padding;
		bounds.height += padding;
		bounds.position -= glm::vec3(padding*0.5, padding*0.5, 0);
		ofDrawRectangle(bounds);
		ofSetColor(colour);
		font.drawString(textString, p.x, p.y);
		ofPopStyle();
	}
	else
	{
		ofDrawBitmapString(textString, p);
		ofDrawBitmapStringHighlight(textString, p, bgColour, colour);
	}
	p.y += height;
}
