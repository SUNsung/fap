
        
        
def get_serializer_from_ext(ext):
    ''' Get the sertializer from filename extension '''
    if ext == '.json':
        return JSONSerializer
    if ext == '.p':
        return PickleSerializer
    if ext in ('.yaml', '.yml') and yaml is not None:
        return YAMLSerializer
    if ext in ('.yaml', '.yml') and yaml is None:
        logger.warning('You must have PyYAML installed to use YAML as the serializer.\n'
                       'Switching to JSON as the serializer.')
    return JSONSerializer

    
        def __init__(self, image, alignments, original_roi=None):
        logger.debug('Initializing %s: (alignments: %s, original_roi: %s)',
                     self.__class__.__name__, alignments, original_roi)
        self.image = image
        self.alignments = alignments
        self.roi = original_roi
        self.colors = {1: (255, 0, 0),
                       2: (0, 255, 0),
                       3: (0, 0, 255),
                       4: (255, 255, 0),
                       5: (255, 0, 255),
                       6: (0, 255, 255)}
        logger.debug('Initialized %s', self.__class__.__name__)
    
        def get_full_frame_name(self, frame):
        ''' Return a frame with extension for when the extension is
            not known '''
        retval = next(key for key in self.data.keys()
                      if key.startswith(frame))
        logger.trace('Requested: '%s', Returning: '%s'', frame, retval)
        return retval
    
        def add_options_info(self):
        ''' Add the info bar '''
        logger.debug('Adding options info')
        lblinfo = ttk.Label(self.optsframe,
                            textvariable=self.vars['info'],
                            anchor=tk.W,
                            width=70)
        lblinfo.pack(side=tk.LEFT, padx=5, pady=5, anchor=tk.W)