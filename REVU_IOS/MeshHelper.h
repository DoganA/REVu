//
//  MeshHelper.h
//  AiTargets
//
//  Created by Frank Fritze on 30.01.13.
//
//

#ifndef AiTargets_MeshHelper_h
#define AiTargets_MeshHelper_h

#include "assimp.h"
#include "aiPostProcess.h"
#include "aiScene.h"
#include "aiMesh.h"


#include <OpenGLES/ES2/gl.h>

//################################### MeshHelper ###########################################################
// useses Assimp : http://assimp.sourceforge.net
//##########################################################################################################
struct MeshHelper{
public:
    
    // pointer to the aiMesh we represent.
    aiMesh* mesh;
    
    //Vertices
    std::vector<unsigned> indexBuffer;
    
    aiVector3D * vertices;
    aiVector3D * texCoords;
    aiVector3D * normals;
    
    GLuint numIndices;
    
    // texture
    GLuint textureIndex;
    bool hasTexture;
    
    // Material
    aiColor4D diffuseColor;
    aiColor4D specularColor;
    aiColor4D ambientColor;
    aiColor4D emissiveColor;
    
    GLfloat opacity;
    GLfloat shininess;
    GLfloat specularStrength;
    
    bool twoSided;
};

//###########################################################################################################

#endif
