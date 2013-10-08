/*
 * AnimationCtrl.cpp
 *
 *  Created on: Oct 7, 2013
 *      Author: owner
 */


#include "AnimationCtrl.h"
#include "Texture.h"
#include "App.h"


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
		case D_RIGHT:
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
		case D_UP:
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
		case D_DOWN:
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
	case ET_PW:
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
		case D_RIGHT:
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
		case D_UP:
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
		case D_DOWN:
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
		case D_RIGHT:
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
		case D_UP:
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
		case D_DOWN:
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
