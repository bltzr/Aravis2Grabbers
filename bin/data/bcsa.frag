#extension GL_ARB_texture_rectangle : enable
#define PI_2 6.2831

const vec3 LumCoeff = vec3 (0.2125, 0.7154, 0.0721);

varying vec2 texcoord;
uniform sampler2DRect image;

uniform vec2 dim; // width and height of incoming texture
uniform vec2 anchor; // normalized position of center
uniform float radius;
uniform vec3 avgluma;
uniform float saturation;
uniform float contrast;
uniform float brightness;
uniform float alpha;

void main (void)
{
    vec2 uv = (texcoord / dim);
    vec2 polarCoord = vec2((sin(uv.x*PI_2)*uv.y*radius*dim.y/dim.x + anchor.x )*dim.x , (cos(uv.x*PI_2)*uv.y*radius + anchor.y)*dim.y );
    vec3 texColor = texture2DRect(image, polarCoord).rgb;
    vec3 intensity     = vec3 (dot(texColor, LumCoeff));
    vec3 color         = mix(intensity, texColor, saturation);
    color              = mix(avgluma, color, contrast);
    color            *= brightness;
    gl_FragColor       = vec4 (color, alpha);
}
