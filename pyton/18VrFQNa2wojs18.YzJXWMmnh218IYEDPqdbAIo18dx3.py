
        
        # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title, author, documentclass
# [howto/manual]).
latex_documents = [
    ('index', 'face_recognition.tex',
     u'Face Recognition Documentation',
     u'Adam Geitgey', 'manual'),
]
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    for face_landmarks in face_landmarks_list:
    
    
    # Display the results
    for (top, right, bottom, left), name in zip(face_locations, face_names):
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    
def fnx():
    return np.random.randint(5, 50, 10)
    
    
def test_bin8():
    header = b'\xc4'
    data = b''
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 2
    assert b[0:2] == header + b'\x00'
    assert b[2:] == data
    assert unpackb(b) == data
    
        def rotate_existing_landmarks(self, frame_name, frame):
        ''' Backwards compatability fix. Rotates the landmarks to
            their correct position and deletes r
    
            if self.config.get('mask_type', None):
            var_y = input_
            var_y = self.blocks.upscale(var_y, 512)
            var_y = self.blocks.upscale(var_y, 256)
            var_y = self.blocks.upscale(var_y, 128)
            var_y = self.blocks.upscale(var_y, 64)
            var_y = Conv2D(1, kernel_size=5, padding='same', activation='sigmoid')(var_y)
            outputs.append(var_y)
        return KerasModel([input_], outputs=outputs)

    
            topcontainer = tk.PanedWindow(maincontainer,
                                      sashrelief=tk.RAISED,
                                      orient=tk.HORIZONTAL)
        maincontainer.add(topcontainer)
    
            inputs_to_do_before = [d_checkpoints[r].op for r in ts]
        wait_to_do_ops = list(copied_ops) + [g.op for g in dv if g is not None]
        my_add_control_inputs(wait_to_do_ops, inputs_to_do_before)
    
        def intermediate(self):
        ''' Intermediate Network '''
        input_ = Input(shape=(None, 4 * 4 * 1024))
        var_x = input_
        var_x = Dense(self.encoder_dim)(var_x)
        var_x = Dense(4 * 4 * int(self.encoder_dim/2))(var_x)
        var_x = Reshape((4, 4, int(self.encoder_dim/2)))(var_x)
        return KerasModel(input_, var_x)
    
            if self.data_format == 'channels_first':
            batch_size, c, h, w = input_shape
            if batch_size is None:
                batch_size = -1
            rh, rw = self.size
            oh, ow = h * rh, w * rw
            oc = c // (rh * rw)
    
    
class ImagePatches(plaidml.tile.Operation):
    '''
    Compatible to tensorflow.extract_image_patches.
    Extract patches from images and put them in the 'depth' output dimension.
    Args:
        images: A tensor with a shape of [batch, rows, cols, depth]
        ksizes: The size of the oatches with a shape of [1, patch_rows, patch_cols, 1]
        strides: How far the center of two patches are in the image with a shape
                    of [1, stride_rows, stride_cols, 1]
        rates: How far two consecutive pixel are in the input. Equivalent to dilation.
                Expect shape of [1, rate_rows, rate_cols, 1]
        padding: A string of 'VALID' or 'SAME' defining padding.
    '''
    def __init__(self, images, ksizes, strides, rates=(1, 1, 1, 1), padding='VALID', name=None):
        i_shape = images.shape.dims
        patch_row_eff = ksizes[1] + ((ksizes[1] - 1) * (rates[1] - 1))
        patch_col_eff = ksizes[2] + ((ksizes[2] - 1) * (rates[2] - 1))