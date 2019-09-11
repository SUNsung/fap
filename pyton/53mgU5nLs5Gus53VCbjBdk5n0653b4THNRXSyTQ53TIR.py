
        
            # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
                # Calculate fps
            delay = time.time() - tmp_time
            tmp_time = time.time()
            fps_list.append(delay)
            if len(fps_list) > 5 * worker_num:
                fps_list.pop(0)
            fps = len(fps_list) / numpy.sum(fps_list)
            print('fps: %.2f' % fps)
    
            logger.trace('Blending box')
        mask = np.expand_dims(self.mask, axis=-1)
        new_face = np.clip(np.concatenate((new_face, mask), axis=-1), 0.0, 1.0)
        logger.trace('Blended box')
        return new_face

    
        def process(self, detected_face, predicted_mask=None):
        ''' Return mask and perform processing '''
        mask = self.get_mask(detected_face, predicted_mask)
        raw_mask = mask.copy()
        if not self.skip and self.do_erode:
            mask = self.erode(mask)
        if not self.skip and self.do_blend:
            mask = self.blend(mask)
        raw_mask = np.expand_dims(raw_mask, axis=-1) if raw_mask.ndim != 3 else raw_mask
        mask = np.expand_dims(mask, axis=-1) if mask.ndim != 3 else mask
        logger.trace('mask shape: %s, raw_mask shape: %s', mask.shape, raw_mask.shape)
        return mask, raw_mask
    
    from plugins.convert._config import Config
    
            return blended.astype('float32') / 255.0

    
        @staticmethod
    def box(new_face, kernel_center, amount):
        ''' Sharpen using box filter '''
        kernel_size, center = kernel_center
        kernel = np.zeros(kernel_size, dtype='float32')
        kernel[center, center] = 1.0
        box_filter = np.ones(kernel_size, dtype='float32') / kernel_size[0]**2
        kernel = kernel + (kernel - box_filter) * amount
        new_face = cv2.filter2D(new_face, -1, kernel)  # pylint: disable=no-member
        return new_face
    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
    import pytest
    
        expected = np.array([obj[3:6].mean(), obj[6:].mean()])
    assert_almost_equal(result, expected)
    
                s.to_csv(filename, compression=compression, encoding=encoding, header=True)
            # test the round trip - to_csv -> read_csv
            result = pd.read_csv(
                filename,
                compression=compression,
                encoding=encoding,
                index_col=0,
                squeeze=True,
            )
            assert_series_equal(s, result)
    
        # List additional groups of dependencies here
    extras_require={},
)

    
        def __init__(
        self, model_path, n_substeps, gripper_extra_height, block_gripper,
        has_object, target_in_the_air, target_offset, obj_range, target_range,
        distance_threshold, initial_qpos, reward_type,
    ):
        '''Initializes a new Fetch environment.
    
        def from_jsonable(self, sample_n):
        return np.array(sample_n)
    
      # Input file format:
  # (1) One sentence per line. These should ideally be actual sentences, not
  # entire paragraphs or arbitrary spans of text. (Because we use the
  # sentence boundaries for the 'next sentence prediction' task).
  # (2) Blank lines between documents. Document boundaries are needed so
  # that the 'next sentence prediction' task doesn't span between documents.
  for input_file in input_files:
    with tf.gfile.GFile(input_file, 'r') as reader:
      while True:
        line = tokenization.convert_to_unicode(reader.readline())
        if not line:
          break
        line = line.strip()