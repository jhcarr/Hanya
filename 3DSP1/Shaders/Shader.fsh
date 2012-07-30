//
//  Shader.fsh
//  3DSP1
//
//  Created by kuwaharg on 7/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
