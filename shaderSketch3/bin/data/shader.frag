
uniform float time;
uniform vec2 mousePos;
uniform sampler2DRect rock;
uniform sampler2DRect circle;


// vec2 (x,y)
// vec3 (x,y,z)  / (r,g,b)
// vec4 (x,y,z,w)


void main(){
    
    
    
    float x = gl_FragCoord.x;
    float y = 800.0 - gl_FragCoord.y;
    
    vec3 color = texture2DRect(rock, vec2(x,y)).rgb;
    
    
    float x2 = gl_FragCoord.x + (color.x-.5)*100.0;
    float y2 = 800.0 - gl_FragCoord.y  + (color.y-.5)*100.0;
      
    vec3 color2 = texture2DRect(circle, vec2(x2,y2)).rgb;
    gl_FragColor = vec4(color2, 1.0);
//    vec2 pixelPos = gl_FragCoord.xy;
//    float dist = distance(pixelPos, vec2(x,y));
//    gl_FragColor = vec4(vec3(sin(dist*0.04 - time)*0.5 + 0.5), 1.0  );
//    if (dist < 250.0){
//        gl_FragColor = vec4(vec3(sin(time)*0.5 + 0.5), 1.0);
//    } else {
//        gl_FragColor = vec4(0., 0., 0.0, 1.0);
//    }
    

}
