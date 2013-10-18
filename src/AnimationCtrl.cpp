/*
 * AnimationCtrl.cpp
 *
 *  Created on: Oct 7, 2013
 *      Author: owner
 */


#include "AnimationCtrl.h"
#include "Texture.h"
#include "App.h"
#include "Define.h"


AnimationCtrl::AnimationCtrl()
{
}


AnimationCtrl::~AnimationCtrl()
{
}


void AnimationCtrl::update()
{

}


void AnimationCtrl::draw(EntityType id, Direction dir,
		unsigned int curFrame, int posX, int posY)
{
	switch (id) {
	case ET_PM:
		switch (dir) {
		case D_STOP:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 210, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 210, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_LEFT:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 30, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 210, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_RIGHT:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 60, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 90, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 210, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_UP:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 120, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 150, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 210, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_DOWN:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 180, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 210, 0, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 210, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		default:
			Texture::draw(App::theApp().tex, App::theApp().ren,
				posX, posY, 0, 210, UNIT_SIZE, UNIT_SIZE);
		}
		break;
	case ET_PW:
		switch (dir) {
		case D_STOP:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 120, 240, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 120, 240, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_LEFT:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 30, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 120, 240, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_RIGHT:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 60, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 90, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 150, 240, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_UP:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 120, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 150, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 180, 240, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		case D_DOWN:
			switch (curFrame) {
			case 0:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 180, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 210, 30, UNIT_SIZE, UNIT_SIZE);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 210, 240, UNIT_SIZE, UNIT_SIZE);
			}
			break;
		default:
			Texture::draw(App::theApp().tex, App::theApp().ren,
				posX, posY, 120, 240, UNIT_SIZE, UNIT_SIZE);
		}
		break;
	case ET_PG:
		switch (dir) {
		case D_STOP:
			switch (curFrame) {
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			}
			break;
		case D_LEFT:
			switch (curFrame) {
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
				break;
			case 2:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
				break;
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			}
			break;
		default:
			Texture::draw(App::theApp().tex, App::theApp().ren,
				posX, posY, 0, 0, 30, 30);
		}
		break;
	default:
		Texture::draw(App::theApp().tex, App::theApp().ren,
			posX, posY, 0, 0, 30, 30);
	}
}
