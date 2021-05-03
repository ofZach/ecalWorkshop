
uniform float time;
uniform vec2 mousePos;


// vec2 (x,y)
// vec3 (x,y,z)  / (r,g,b)
// vec4 (x,y,z,w)


void main(){
    
    float x = mousePos.x;
    float y = 800.0 - mousePos.y;
    
    vec2 pixelPos = gl_FragCoord.xy;
    float dist = distance(pixelPos, vec2(x,y));
    gl_FragColor = vec4(vec3(sin(dist*0.04 - time)*0.5 + 0.5), 1.0  );
//    if (dist < 250.0){
//        gl_FragColor = vec4(vec3(sin(time)*0.5 + 0.5), 1.0);
//    } else {
//        gl_FragColor = vec4(0., 0., 0.0, 1.0);
//    }
    

}
