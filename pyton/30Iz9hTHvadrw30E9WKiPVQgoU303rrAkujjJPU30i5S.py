
        
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
    
    The program checks if the aggregated representation for an image already exists,
and skips computation for those.
'''
    
      # Read list of index images from dataset file.
  print('Reading list of index images from dataset file...')
  _, index_list, _ = dataset.ReadDatasetFile(cmd_args.dataset_file_path)
  num_images = len(index_list)
  print('done! Found %d images' % num_images)
    
          # Finalize enqueue threads.
      coord.request_stop()
      coord.join(threads)
    
    
if __name__ == '__main__':
  tf.test.main()

    
        long_description = pypandoc.convert('README.md', 'rst')
else:
    long_description = ''
    
    import pytest
from thefuck.shells import Powershell
    
        def get_aliases(self):
        overridden = self._get_overridden_aliases()
        functions = _get_functions(overridden)
        raw_aliases = _get_aliases(overridden)
        functions.update(raw_aliases)
        return functions
    
    
@pytest.fixture(autouse=True)
def history_without_current(mocker):
    return mocker.patch(
        'thefuck.rules.no_command.get_valid_history_without_current',
        return_value=['git commit'])
    
        # One from history:
    already_used = get_closest(
        old_command, _get_used_executables(command),
        fallback_to_first=False)
    if already_used:
        new_cmds = [already_used]
    else:
        new_cmds = []
    
        def test_process_spider_exception_return_none(self):
    
        def test_return_list(self):
        custom = ['a', 'b', 'c']
        self.assertEqual(build_component_list(None, custom,
                                              convert=lambda x: x),
                         custom)
    
    
def log_scrapy_info(settings):
    logger.info('Scrapy %(version)s started (bot: %(bot)s)',
                {'version': scrapy.__version__, 'bot': settings['BOT_NAME']})
    logger.info('Versions: %(versions)s',
                {'versions': ', '.join('%s %s' % (name, version)
                    for name, version in scrapy_components_versions()
                    if name != 'Scrapy')})
    
        >>> escape_ajax('www.example.com/ajax.html#!key=value')
    'www.example.com/ajax.html?_escaped_fragment_=key%3Dvalue'
    >>> escape_ajax('www.example.com/ajax.html?k1=v1&k2=v2#!key=value')
    'www.example.com/ajax.html?k1=v1&k2=v2&_escaped_fragment_=key%3Dvalue'
    >>> escape_ajax('www.example.com/ajax.html?#!key=value')
    'www.example.com/ajax.html?_escaped_fragment_=key%3Dvalue'
    >>> escape_ajax('www.example.com/ajax.html#!')
    'www.example.com/ajax.html?_escaped_fragment_='
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
            # Broken links can't be fixed and
        # I am not sure what do with the local ones.
        if errortype.lower() in ['broken', 'local']:
            print('Not Fixed: ' + line)
        else:
            # If this is a new file
            if newfilename != _filename:
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
        def run(self, args, opts):
        with _BenchServer():
            self.crawler_process.crawl(_BenchSpider, total=100000)
            self.crawler_process.start()
    
        decoded_masks = [
        np.array(mask_util.decode(rle), dtype=np.float32) for rle in masks
    ]
    
        if ind_range is not None:
        total_num_images = len(roidb)
        start, end = ind_range
        roidb = roidb[start:end]
    else:
        start = 0
        end = len(roidb)
        total_num_images = end
    
    
def bottleneck_transformation(
    model,
    blob_in,
    dim_in,
    dim_out,
    stride,
    prefix,
    dim_inner,
    dilation=1,
    group=1
):
    '''Add a bottleneck transformation to the model.'''
    # In original resnet, stride=2 is on 1x1.
    # In fb.torch resnet, stride=2 is on 3x3.
    (str1x1, str3x3) = (stride, 1) if cfg.RESNETS.STRIDE_1X1 else (1, stride)
    
        def push_images(self):
        tags_to_push = self.get_images_to_push()
        print('Build tags to push {}'.format(tags_to_push))
        for name in tags_to_push:
            print('Pushing {} to Docker Hub'.format(name))
            logstream = self.docker_client.push(name, stream=True, decode=True)
            for chunk in logstream:
                if 'status' in chunk:
                    print(chunk['status'])
                if 'error' in chunk:
                    raise ScriptError(
                        'Error pushing {name}: {err}'.format(name=name, err=chunk['error'])
                    )

    
            if len(parts) > 3:
            raise ConfigurationError(
                'Volume %s has incorrect format, should be '
                'external:internal[:mode]' % volume_config)
    
            digest = 'sha256:abcd'
        events = [
            {'status': '...'},
            {'status': '...'},
            {'status': 'Digest: %s' % digest},
            {'status': '...'},
        ]
        assert progress_stream.get_digest_from_pull(events) == digest

    
    COMPOSEFILE_V1 = ComposeVersion('1')
COMPOSEFILE_V2_0 = ComposeVersion('2.0')
COMPOSEFILE_V2_1 = ComposeVersion('2.1')
COMPOSEFILE_V2_2 = ComposeVersion('2.2')
COMPOSEFILE_V2_3 = ComposeVersion('2.3')
COMPOSEFILE_V2_4 = ComposeVersion('2.4')
    
        def merge_services(base, override):
        all_service_names = set(base) | set(override)
        return {
            name: merge_service_dicts_from_files(
                base.get(name, {}),
                override.get(name, {}),
                config_file.version)
            for name in all_service_names
        }
    
        @classmethod
    def from_config(cls, name, config_data, client):
        config_volumes = config_data.volumes or {}
        volumes = {
            vol_name: Volume(
                client=client,
                project=name,
                name=data.get('name', vol_name),
                driver=data.get('driver'),
                driver_opts=data.get('driver_opts'),
                custom_name=data.get('name') is not None,
                labels=data.get('labels'),
                external=bool(data.get('external', False))
            )
            for vol_name, data in config_volumes.items()
        }
        return cls(volumes)