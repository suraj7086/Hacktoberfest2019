/*
 * Particles
 * @globals Core.globals -> canvas | context | width | height
 *
 * Author Name: Ashish Yadav (Full stack developer)
 * Author URI: https://www.ashiish.me
 * GitHub: https:github.com/ashiishme
 */

let particles = [];

function Particle(x, y, dx, dy, radius) {
	this.x = x;
	this.y = y;
	this.dx = dx;
	this.dy = dy;
	this.radius = radius;

	this.draw = function(ctx) {
		ctx.beginPath();
		ctx.arc(this.x, this.y, this.radius, Math.PI * 2, false);
		ctx.fill();
		ctx.fillStyle = "black";
	}

	this.update = function() {

		if(this.x + this.radius > Core.globals.width || this.x - this.radius < 0) {
			this.dx = -this.dx;
		}

		if(this.y + this.radius > Core.globals.height || this.y - this.radius < 0) {
			this.dy = -this.dy;
		}

		this.x += this.dx;
		this.y += this.dy;

		this.draw(Core.globals.context);

	}
}

function generate_particles() {
	for(let i = 0; i < 100; i++) {
		let radius = Math.random() * 5;
		let x = Math.random() * (Core.globals.width - radius * 2) + radius;
		let y = Math.random() * (Core.globals.height - radius * 2) + radius;
		let dx = (Math.random() - 0.5);
		let dy = (Math.random() - 0.5);
		particles.push(new Particle(x, y, dx, dy, radius));
	}
}

generate_particles();

function render() {
	requestAnimationFrame(render);
	Core.globals.context.clearRect(0, 0, Core.globals.width, Core.globals.height);
	for(let i = 0; i < particles.length; i++) {
		particles[i].update();
	}
}

render();
