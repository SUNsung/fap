
        
        from mrjob.job import MRJob
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    # Documents to append as an appendix to all manuals.
#texinfo_appendices = []
    
    # This is a very simple benchmark to give you an idea of how fast each step of face recognition will run on your system.
# Notice that face detection gets very slow at large image sizes. So you might consider running face detection on a
# scaled down version of your image and then running face encodings on the the full size image.
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
    
@click.command()
@click.argument('known_people_folder')
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel (can speed up processing lots of images). -1 means 'use all in system'')
@click.option('--tolerance', default=0.6, help='Tolerance for face comparisons. Default is 0.6. Lower this if you get multiple matches for the same person.')
@click.option('--show-distance', default=False, type=bool, help='Output face distance. Useful for tweaking tolerance setting.')
def main(known_people_folder, image_to_check, cpus, tolerance, show_distance):
    known_names, known_face_encodings = scan_known_people(known_people_folder)
    
    predictor_5_point_model = face_recognition_models.pose_predictor_five_point_model_location()
pose_predictor_5_point = dlib.shape_predictor(predictor_5_point_model)
    
            # If a match was found in known_face_encodings, just use the first one.
        # if True in matches:
        #     first_match_index = matches.index(True)
        #     name = known_face_names[first_match_index]
    
    with open('HISTORY.rst') as history_file:
    history = history_file.read()
    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
        def set_config(self, configfile, config):
        ''' Set the config to either global config or passed in config '''
        section = '.'.join(self.__module__.split('.')[-2:])
        if config is None:
            retval = get_config(section, configfile)
        else:
            config.section = section
            retval = config.config_dict
            config.section = None
        logger.debug('Config: %s', retval)
        return retval
    
        def blend(self, mask):
        ''' Blur mask if requested '''
        logger.trace('Blending mask')
        mask = BlurMask(self.config['type'],
                        mask,
                        self.config['radius'],
                        self.config['passes']).blurred
        return mask

    
                    var_x = K.reshape(var_x, (batch_size, height, width, channels))
                retval = self.gamma * var_x + self.beta
            elif self.data_format == 'channels_first':
                batch_size, channels, height, width = input_shape
                if batch_size is None:
                    batch_size = -1
    
    import numpy as np
import tensorflow as tf
from keras import backend as K
from keras import initializers
from keras.utils.generic_utils import get_custom_objects
    
            dest_format = self.get_dest_format()
        if len(self.args.alignments_file) == 1:
            retval = AlignmentData(self.args.alignments_file[0], dest_format)
        else:
            retval = [AlignmentData(a_file, dest_format) for a_file in self.args.alignments_file]
        logger.debug('Alignments: %s', retval)
        return retval
    
        def add_option_enable(self):
        ''' Add checkbutton to enable/disable page '''
        logger.debug('Adding enable option')
        chkenable = ttk.Checkbutton(self.optsframe,
                                    variable=self.vars['enabled'],
                                    text='Enable {}'.format(self.tabname),
                                    command=self.on_chkenable_change)
        chkenable.pack(side=tk.RIGHT, padx=5, anchor=tk.W)
        Tooltip(chkenable,
                text='Enable or disable {} display'.format(self.tabname),
                wraplength=200)
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise
    
        def test_to_json_float_index(self):
        data = pd.Series(1, index=[1.0, 2.0])
        result = data.to_json(orient='table', date_format='iso')
        result = json.loads(result, object_pairs_hook=OrderedDict)
        result['schema'].pop('pandas_version')
    
        # this uses column selection & renaming
    with tm.assert_produces_warning(FutureWarning, check_stacklevel=False):
        d = OrderedDict(
            [['C', np.mean], ['D', OrderedDict([['foo', np.mean], ['bar', np.std]])]]
        )
        result = grouped.aggregate(d)