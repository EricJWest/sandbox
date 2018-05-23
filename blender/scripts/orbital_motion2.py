import bpy
import mathutils
import numpy as np

## create new scene
bpy.ops.scene.new()
scene = bpy.context.scene

## add cameras to scene
camera_data = bpy.data.cameras.new(name='Camera')
camera1 = bpy.data.objects.new(name='Camera 1', object_data=camera_data)
scene.objects.link(camera1)
camera1.location = (10,10,10)
camera1.rotation_euler = (np.radians(55), np.radians(0), np.radians(135))

## add light sources to scene
lamp_data = bpy.data.lamps.new(name='Area Lamp', type='AREA')
lamp_data.size = 100
lamp_data.distance = 10
lamp_data.use_diffuse = True
lamp_data.energy = 10

lamp1 = bpy.data.objects.new(name='Lamp 1', object_data=lamp_data)
scene.objects.link(lamp1)
lamp1.location = (10,10,10)
lamp1.rotation_euler = (np.radians(55), np.radians(0), np.radians(135))

## add objects to scene
object_file = "/home/ejwest/phy/research/current/sandbox/visualization/blender/objects/beach_ball.obj"
bpy.ops.import_scene.obj(filepath=object_file, axis_forward="X", axis_up="Z")
bpy.ops.import_scene.obj(filepath=object_file, axis_forward="X", axis_up="Z")
body1 = bpy.data.objects[-2]
body2 = bpy.data.objects[-1]

object_file = "/home/ejwest/phy/research/current/sandbox/visualization/blender/objects/plane.obj"
bpy.ops.import_scene.obj(filepath=object_file, axis_forward="X", axis_up="Z")
plane1 = bpy.data.objects[-1]

## time grid
time = np.arange(0,250,0.1)

## position of object 1
def position1(t):
    x = 5*np.sin(t)
    y = 5*np.cos(t)
    z = 0
    return (x,y,z)

## position of object 2
def position2(t):
    x = -5*np.sin(t)
    y = -5*np.cos(t)
    z = 0
    return (x,y,z)

## orientation of object 1
def orientation1(t):
    alphaX = 0
    alphaY = 0
    alphaZ = 3*t
    return (alphaX, alphaY, alphaZ)

## orientation of object 2
def orientation2(t):
    alphaX = 3*t
    alphaY = 0
    alphaZ = 0
    return (alphaX, alphaY, alphaZ)
    
## make frames
frame_num = 0
for t in time:
    bpy.context.scene.frame_set(frame_num)
    body1.location = mathutils.Vector(position1(t))
    body2.location = mathutils.Vector(position2(t))
    body1.rotation_euler = orientation1(t)
    body2.rotation_euler = orientation2(t)
    body1.keyframe_insert(data_path="location")
    body2.keyframe_insert(data_path="location")
    body1.keyframe_insert(data_path="rotation_euler")
    body2.keyframe_insert(data_path="rotation_euler")
    frame_num += 1



