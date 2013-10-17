#version 420

layout(location = 0) in vec2 pos;

layout(binding = 0) uniform CameraBlock
{
	mat4 view;
	mat4 projection;
	mat4 viewProjection;
} camera;

void main() {
	gl_Position = camera.viewProjection * vec4(pos, 0, 1);
}