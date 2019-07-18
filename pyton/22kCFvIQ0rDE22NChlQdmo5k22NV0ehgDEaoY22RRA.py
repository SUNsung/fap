
        
            # Get the info of users who have more than 20 ratings on items
    grouped = df.groupby(movielens.USER_COLUMN)
    df = grouped.filter(
        lambda x: len(x) >= rconst.MIN_NUM_RATINGS) # type: pd.DataFrame
    
      def test_create_model_train(self):
    model = transformer.create_model(self.params, True)
    inputs, outputs = model.inputs, model.outputs
    self.assertEqual(len(inputs), 2)
    self.assertEqual(len(outputs), 1)
    self.assertEqual(inputs[0].shape.as_list(), [None, None])
    self.assertEqual(inputs[0].dtype, tf.int64)
    self.assertEqual(inputs[1].shape.as_list(), [None, None])
    self.assertEqual(inputs[1].dtype, tf.int64)
    self.assertEqual(outputs[0].shape.as_list(), [None, None, 41])
    self.assertEqual(outputs[0].dtype, tf.float32)
    
        loss_scale_help_text = (
        'The amount to scale the loss by when the model is run. {}. Before '
        'gradients are computed, the loss is multiplied by the loss scale, '
        'making all gradients loss_scale times larger. To adjust for this, '
        'gradients are divided by the loss scale before being applied to '
        'variables. This is mathematically equivalent to training without '
        'a loss scale, but the loss scale helps avoid some intermediate '
        'gradients from underflowing to zero. If not provided the default '
        'for fp16 is 128 and 1 for all other dtypes.{}'
    )
    if dynamic_loss_scale:
      loss_scale_help_text = loss_scale_help_text.format(
          'This can be an int/float or the string 'dynamic'',
          ' The string 'dynamic' can be used to dynamically determine the '
          'optimal loss scale during training, but currently this '
          'significantly slows down performance')
      loss_scale_validation_msg = ('loss_scale should be a positive int/float '
                                   'or the string 'dynamic'.')
    else:
      loss_scale_help_text = loss_scale_help_text.format(
          'This must be an int/float', '')
      loss_scale_validation_msg = 'loss_scale should be a positive int/float.'
    if loss_scale:
      flags.DEFINE_string(
          name='loss_scale', short_name='ls', default=None,
          help=help_wrap(loss_scale_help_text))
    
        if (warmup and 'step_timestamp_log' in stats and
        len(stats['step_timestamp_log']) > warmup):
      # first entry in the time_log is start of step 1. The rest of the
      # entries are the end of each step recorded
      time_log = stats['step_timestamp_log']
      elapsed = time_log[-1].timestamp - time_log[warmup].timestamp
      num_examples = (
          total_batch_size * log_steps * (len(time_log) - warmup - 1))
      examples_per_sec = num_examples / elapsed
      metrics.append({'name': 'exp_per_second',
                      'value': examples_per_sec})
    
    flags.DEFINE_float('learning_power', 0.9,
                   'The power value used in the poly learning policy.')
    
          # Reverse the resizing and padding operations performed in preprocessing.
      # First, we slice the valid regions (i.e., remove padded region) and then
      # we resize the predictions back.
      original_image = tf.squeeze(samples[common.ORIGINAL_IMAGE])
      original_image_shape = tf.shape(original_image)
      predictions = tf.slice(
          predictions,
          [0, 0, 0],
          [1, original_image_shape[0], original_image_shape[1]])
      resized_shape = tf.to_int32([tf.squeeze(samples[common.HEIGHT]),
                                   tf.squeeze(samples[common.WIDTH])])
      predictions = tf.squeeze(
          tf.image.resize_images(tf.expand_dims(predictions, 3),
                                 resized_shape,
                                 method=tf.image.ResizeMethod.NEAREST_NEIGHBOR,
                                 align_corners=True), 3)
    
    # Extensions.
_DELF_EXTENSION = '.delf'
    
            for page_num in itertools.count(1):
            video_list = self._download_json(
                'http://api.vfan.vlive.tv/vproxy/channelplus/getChannelVideoList',
                channel_code, note='Downloading channel list page #%d' % page_num,
                query={
                    'app_id': app_id,
                    'channelSeq': channel_seq,
                    # Large values of maxNumOfRows (~300 or above) may cause
                    # empty responses (see [1]), e.g. this happens for [2] that
                    # has more than 300 videos.
                    # 1. https://github.com/ytdl-org/youtube-dl/issues/13830
                    # 2. http://channels.vlive.tv/EDBF.
                    'maxNumOfRows': 100,
                    '_': int(time.time()),
                    'pageNo': page_num
                }
            )
    
        def _extract_video_info(self, content_id, site='cbs', mpx_acc=2198311517):
        items_data = self._download_xml(
            'http://can.cbs.com/thunder/player/videoPlayerService.php',
            content_id, query={'partner': site, 'contentId': content_id})
        video_data = xpath_element(items_data, './/item')
        title = xpath_text(video_data, 'videoTitle', 'title', True)
        tp_path = 'dJ5BDC/media/guid/%d/%s' % (mpx_acc, content_id)
        tp_release_url = 'http://link.theplatform.com/s/' + tp_path
    
            return {
            'id': video_id,
            'title': title,
            'formats': formats,
            'thumbnails': thumbnails,
            'description': video_data.get('short_description'),
            'like_count': int_or_none(video_data.get('like_count')),
            'timestamp': parse_iso8601(video_data.get('released_at')),
            'series': series,
            'episode': episode,
            'season': season,
            'season_id': season_id,
            'season_number': season_number,
            'episode_number': episode_number,
            'subtitles': subtitles,
            'age_limit': parse_age_limit(video_data.get('rating')),
        }

    
                if count > fragment_retries:
                if not fatal:
                    self.report_skip_fragment(frag_index)
                    continue
                self.report_error('giving up after %s fragment retries' % fragment_retries)
                return False
    
        for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
    new_version = {}
    
        readme = re.sub(r'(?s)^.*?(?=# DESCRIPTION)', '', readme)
    readme = re.sub(r'\s+youtube-dl \[OPTIONS\] URL \[URL\.\.\.\]', '', readme)
    readme = PREFIX + readme
    
    project = 'Flask'
copyright = '2010 Pallets'
author = 'Pallets'
release, version = get_version('Flask')
    
        seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
            explain_template_loading_attempts(self.app, template, attempts)
    
            app.add_url_rule('/hello/<name>', view_func=MyView.as_view('myview'))
    
    
def test_config_missing_json():
    app = flask.Flask(__name__)
    with pytest.raises(IOError) as e:
        app.config.from_json('missing.json')
    msg = str(e.value)
    assert msg.startswith(
        '[Errno 2] Unable to load configuration file (No such file or directory):'
    )
    assert msg.endswith('missing.json'')
    assert not app.config.from_json('missing.json', silent=True)
    
        @property
    def name(self):
        '''Return the device name.'''
        return self._name
    
        assert await async_setup_component(hass, automation.DOMAIN, {
        automation.DOMAIN: {
            'trigger': {
                'platform': 'zone',
                'entity_id': 'test.entity',
                'zone': 'zone.test',
                'event': 'enter',
            },
            'action': {
                'service': 'test.automation',
                'data_template': {
                    'some': '{{ trigger.%s }}' % '}} - {{ trigger.'.join((
                        'platform', 'entity_id',
                        'from_state.state', 'to_state.state',
                        'zone.name'))
                },
    }
    }
    }