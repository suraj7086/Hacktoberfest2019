/*
*
* @package canvas-boilerplate
* @source https://github.com/ashiishme/canvas-boilerplate
*
* Author Name: Ashish Yadav (Full stack developer)
* Author URI: https://www.ashiish.me
* GitHub: https:github.com/ashiishme
*/

// JavaScript strict mode
"use strict";

/* 
* Define our core object that will hold all our global variables
* Can be extended for more globals properties like game physics or rigid bodies
*/
let Core = {};

/*
* We use globals properties to add all globals
* Later we can add more properties for different reasons
* props: canvas, context, width & height
*/
Core.globals = (function() {
	// Defines your canvas
	const canvas = document.getElementById('canvas');
	// Defines the 2d context
	const context = canvas.getContext('2d');
	// Width & height of canvas according to screen size.
	let width = canvas.width = window.innerWidth;
	let height = canvas.height = window.innerHeight;
	// our global object
	let props = {
		canvas: canvas,
		context: context,
		width: width,
		height: height
	}

	return props;
}());

// updates our global width & height when screen is resized.
window.onresize = function() {
	Core.globals.width = window.innerWidth;
	Core.globals.height = window.innerHeight;
}

/*
* Add your own code below to create something fun using CANVAS
* Best wishes, follow me on GitHub. <-- https://github.com/ashiishme -->
*/
