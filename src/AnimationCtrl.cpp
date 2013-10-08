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


void AnimationCtrl::draw()
{
	switch (id) {
	case pm:
		switch (dir) {
		case ED_STOP:
			switch (curFrame) {
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			}
			break;
		case ED_LEFT:
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
		case ED_RIGHT:
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
		case ED_UP:
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
		case ED_DOWN:
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
	case pw:
		switch (dir) {
		case ED_STOP:
			switch (curFrame) {
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			}
			break;
		case ED_LEFT:
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
		case ED_RIGHT:
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
		case ED_UP:
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
		case ED_DOWN:
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
	case pc:
		switch (dir) {
		case ED_STOP:
			switch (curFrame) {
			case 1:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			default:
				Texture::draw(App::theApp().tex, App::theApp().ren,
					posX, posY, 0, 0, 30, 30);
			}
			break;
		case ED_LEFT:
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
		case ED_RIGHT:
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
		case ED_UP:
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
		case ED_DOWN:
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
