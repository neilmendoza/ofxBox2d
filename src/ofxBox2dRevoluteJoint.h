#pragma once
#include "ofMain.h"
#include "Box2D.h"
#include "ofxBox2dUtils.h"

#define BOX2D_DEFAULT_FREQ      4.0
#define BOX2D_DEFAULT_DAMPING   0.5

class ofxBox2dRevoluteJoint {
	
public:
	b2World			*	world;
	b2RevoluteJoint *	joint;
	int					jointType;
	bool				alive;
	
	//----------------------------------------
	ofxBox2dRevoluteJoint();
	ofxBox2dRevoluteJoint(b2World* b2world, b2Body* body1, b2Body* body2, float lowerAngle=-HALF_PI, float upperAngle=HALF_PI, bool bCollideConnected=true);
	ofxBox2dRevoluteJoint(b2World* b2world, b2Body* body1, b2Body* body2, b2Vec2 anchor, float lowerAngle=-HALF_PI, float upperAngle=HALF_PI, bool bCollideConnected=true);
    ofxBox2dRevoluteJoint(b2World* b2world, b2RevoluteJointDef jointDef);
	
	//----------------------------------------
	void setWorld(b2World * w);
	void setup(b2World* b2world, b2Body* body1, b2Body* body2, float lowerAngle=-HALF_PI, float upperAngle=HALF_PI, bool bCollideConnected=true);
	void setup(b2World* b2world, b2Body* body1, b2Body* body2, b2Vec2 anchor, float lowerAngle=-HALF_PI, float upperAngle=HALF_PI, bool bCollideConnected=true);
    void setup(b2World* b2world, b2RevoluteJointDef jointDef);
	
	//----------------------------------------
	bool isSetup();
	void draw();
	void destroy();
    
    void setLowerAngle(float lowerAngle);
    float getLowerAngle() const;
    
    void setUpperAngle(float upperAngle);
    float getUpperAngle() const;
	
	//----------------------------------------
	ofVec2f getReactionForce(float inv_dt) const;
	b2Vec2  getReactionForceB2D(float inv_dt) const;
	float   getReactionTorque(float inv_dt) const;
};












