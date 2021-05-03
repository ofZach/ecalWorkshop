
uniform float time;
uniform vec2 mousePos;
uniform sampler2DRect img;


// vec2 (x,y)
// vec3 (x,y,z)  / (r,g,b)
// vec4 (x,y,z,w)


void main(){
    
    
    
    float x = gl_FragCoord.x + sin(gl_FragCoord.x*0.1 + time)*40.0;
    float y = 800.0 - gl_FragCoord.y;
    
    vec3 color = texture2DRect(img, vec2(x,y)).rgb;
    gl_FragColor = vec4(color, 1.0);
//    vec2 pixelPos = gl_FragCoord.xy;
//    float dist = distance(pixelPos, vec2(x,y));
//    gl_FragColor = vec4(vec3(sin(dist*0.04 - time)*0.5 + 0.5), 1.0  );
//    if (dist < 250.0){
//        gl_FragColor = vec4(vec3(sin(time)*0.5 + 0.5), 1.0);
//    } else {
//        gl_FragColor = vec4(0., 0., 0.0, 1.0);
//    }
    

}
