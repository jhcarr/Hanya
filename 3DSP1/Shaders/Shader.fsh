//
//  Shader.fsh
//  3DSP1
//
//  Created by Justin Carr on 7/30/12.
//  Copyright (c) 2012 Justin Carr. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
