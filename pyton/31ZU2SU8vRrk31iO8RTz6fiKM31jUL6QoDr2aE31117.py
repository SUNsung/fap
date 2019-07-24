
        
        This is a simple smoke test of a local install of VGGish and its associated
downloaded files. We create a synthetic sound, extract log mel spectrogram
features, run them through VGGish, post-process the embedding ouputs, and
check some simple statistics of the results, allowing for variations that
might occur due to platform/version differences in the libraries we use.
    
      # Run K-means clustering.
  def _get_input_fn():
    '''Helper function to create input function and hook for training.
    
      aggregation_extraction.ExtractAggregatedRepresentationsToFiles(
      image_names=image_list,
      features_dir=cmd_args.features_dir,
      aggregation_config_path=cmd_args.aggregation_config_path,
      mapping_path=cmd_args.index_mapping_path,
      output_aggregation_dir=cmd_args.output_aggregation_dir)
    
    cmd_args = None
    
      Returns:
    Function that receives an image and returns detection results.
  '''
  tf.saved_model.loader.load(
      sess, [tf.saved_model.tag_constants.SERVING],
      model_dir,
      import_scope=import_scope)
  import_scope_prefix = import_scope + '/' if import_scope is not None else ''
  input_images = sess.graph.get_tensor_by_name('%sinput_images:0' %
                                               import_scope_prefix)
  boxes = sess.graph.get_tensor_by_name('%sdetection_boxes:0' %
                                        import_scope_prefix)
  scores = sess.graph.get_tensor_by_name('%sdetection_scores:0' %
                                         import_scope_prefix)
  class_indices = sess.graph.get_tensor_by_name('%sdetection_classes:0' %
                                                import_scope_prefix)
    
            feature_io.WriteToFile(out_desc_fullpath, locations_out,
                               feature_scales_out, descriptors_out,
                               attention_out)
    
      tf.logging.info('Found %d inliers' % sum(inliers))
    
        def test_get_version_error(self, shell, Popen):
        Popen.return_value.stdout.read.side_effect = OSError
        with pytest.raises(OSError):
            shell._get_version()
        assert Popen.call_args[0][0] == ['bash', '-c', 'echo $BASH_VERSION']

    
        def instant_mode_alias(self, alias_name):
        if os.environ.get('THEFUCK_INSTANT_MODE', '').lower() == 'true':
            mark = USER_COMMAND_MARK + '\b' * len(USER_COMMAND_MARK)
            return '''
                export PS1='{user_command_mark}$PS1';
                {app_alias}
            '''.format(user_command_mark=mark,
                       app_alias=self.app_alias(alias_name))
        else:
            log_path = os.path.join(
                gettempdir(), 'thefuck-script-log-{}'.format(uuid4().hex))
            return '''
                export THEFUCK_INSTANT_MODE=True;
                export THEFUCK_OUTPUT_LOG={log};
                thefuck --shell-logger {log};
                rm {log};
                exit
            '''.format(log=log_path)
    
    
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, output', [
    ('vom file.py', 'vom: not found'),
    ('fucck', 'fucck: not found'),
    ('puthon', ''puthon' is not recognized as an internal or external command'),
    ('got commit', 'got: command not found')])
def test_match(mocker, script, output):
    mocker.patch('thefuck.rules.no_command.which', return_value=None)
    
    
@classmethod
def get_args(cls, dist, header=None):
    '''
    Yield write_script() argument tuples for a distribution's
    console_scripts and gui_scripts entry points.
    '''
    if header is None:
        header = cls.get_header()
    spec = str(dist.as_requirement())
    for type_ in 'console', 'gui':
        group = type_ + '_scripts'
        for name, ep in dist.get_entry_map(group).items():
            # ensure_safe_name
            if re.search(r'[\\/]', name):
                raise ValueError('Path separators not allowed in script names')
            script_text = TEMPLATE.format(
                          ep.module_name, ep.attrs[0], '.'.join(ep.attrs),
                          spec, group, name)
            args = cls._get_script_args(type_, name, header, script_text)
            for res in args:
                yield res
    
    misspelled_subcommand = '''\
az provider: 'lis' is not in the 'az provider' command group. See 'az provider --help'.
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
            sfile = sys.modules[spidercls.__module__].__file__
        sfile = sfile.replace('.pyc', '.py')
        self.exitcode = os.system('%s '%s'' % (editor, sfile))

    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
    from scrapy.http import Headers
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.python import to_bytes
from scrapy.responsetypes import responsetypes
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings.getfloat('DOWNLOAD_TIMEOUT'))
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
        def spider_opened(self, spider):
        self.storage.open_spider(spider)
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
            face_encoding_a1 = api.face_encodings(img_a1)[0]
        face_encoding_a2 = api.face_encodings(img_a2)[0]
        face_encoding_a3 = api.face_encodings(img_a3)[0]
        face_encoding_b1 = api.face_encodings(img_b1)[0]
    
        # Display the resulting image
    cv2.imshow('Video', frame)
    
                # Or instead, use the known face with the smallest distance to the new face
            face_distances = face_recognition.face_distance(known_face_encodings, face_encoding)
            best_match_index = np.argmin(face_distances)
            if matches[best_match_index]:
                name = known_face_names[best_match_index]
    
        # Quit
    cv2.destroyAllWindows()

    
    
__all__ = [
    'shell_escape',
    'unnest',
    'dedup',
    'run',
    'load_path',
    'partialclass',
    'to_text',
    'to_bytes',
    'locale_encoding',
    'chunked',
    'take',
    'divide',
    'getpreferredencoding',
    'decode_for_output',
    'get_canonical_encoding_name',
    'get_wrapped_stream',
    'StreamWrapper',
]
    
    # Internal, to tell whether the command line session is interactive.
try:
    SESSION_IS_INTERACTIVE = _isatty(sys.stdout.fileno())
except UnsupportedOperation:
    SESSION_IS_INTERACTIVE = _isatty(sys.stdout)
    
            @cerberus.Validator.schema.setter
        def schema(self, schema):
            if schema is None:
                self._schema = None
            elif self.is_child:
                self._schema = schema
            elif isinstance(schema, cerberus.schema.DefinitionSchema):
                self._schema = schema
            else:
                self._schema = cerberus.schema.UnvalidatedSchema(schema)
    
    __version__ = '0.5.1'
    
        Returns
    -------
    str
        The code to be evaluated by the shell
    '''
    from jinja2 import Environment, FileSystemLoader
    if shell in [None, 'auto']:
        shell = get_auto_shell()
    if not isinstance(shell, Shell):
        shell = Shell[shell]
    prog_name = prog_name or click.get_current_context().find_root().info_name
    env_name = env_name or '_%s_COMPLETE' % prog_name.upper().replace('-', '_')
    extra_env = extra_env if extra_env else {}
    env = Environment(loader=FileSystemLoader(os.path.dirname(__file__)))
    template = env.get_template('%s.j2' % shell.name)
    return template.render(prog_name=prog_name, complete_var=env_name, extra_env=extra_env)
    
        downloadable_extensions = source_extensions + ('.whl',)