#include "IFSUIUtils.h"
using namespace std;
using namespace IFS;

void UiUtils::DrawLabel(const string & textString, glm::vec2 & p, int height) {
	ofDrawBitmapString(textString, p);
	p.y += height;
}

void UiUtils::DrawLabel(const string & textString, glm::vec2 & p, const ofColor & colour, const ofColor & bgColour, int height) {
	ofDrawBitmapString(textString, p);
	ofDrawBitmapStringHighlight(textString, p, bgColour, colour);
	p.y += height;
}
