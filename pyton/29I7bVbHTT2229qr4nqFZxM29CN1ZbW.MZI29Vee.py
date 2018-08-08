
        
        
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
        model = Sequential()
    model.add(layers.GRU(8,
                         input_shape=(x_train.shape[1], x_train.shape[2])))
    model.add(layers.Dense(y_train.shape[-1], activation='softmax'))
    model.compile(loss='categorical_crossentropy',
                  optimizer='rmsprop',
                  metrics=['accuracy'])
    model.summary()
    history = model.fit(x_train, y_train, epochs=4, batch_size=10,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['acc'][-1] >= 0.8)
    config = model.get_config()
    model = Sequential.from_config(config)
    
                # check dropout
            layer_test(convolutional_recurrent.ConvLSTM2D,
                       kwargs={'data_format': data_format,
                               'return_sequences': return_sequences,
                               'filters': filters,
                               'kernel_size': (num_row, num_col),
                               'padding': 'same',
                               'dropout': 0.1,
                               'recurrent_dropout': 0.1},
                       input_shape=inputs.shape)
    
    from ..utils.data_utils import get_file
import numpy as np
    
        for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
    
if __name__ == '__main__':
    
    # This is a demo of running face recognition on a video file and saving the results to a new video file.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Save each frame of the video to a list
    frame_count += 1
    frames.append(frame)
    
                # If a match was found in known_face_encodings, just use the first one.
            if True in matches:
                first_match_index = matches.index(True)
                name = known_face_names[first_match_index]
    
        :param train_dir: directory that contains a sub-directory for each known person, with its name.