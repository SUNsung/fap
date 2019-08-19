
        
            def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
        def append_to_front(self, node):
        ...
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
                    mapping = KBaseMapping(base=int(base))
                sym_to_name = {}
                for no in range(int(size), 0, -1):
                    no_in_base = mapping.mapping(no)
                    val = names[no] if no < len(names) and names[no] else no_in_base
                    sym_to_name[no_in_base] = val
    
        if not info_only:
        download_url_ffmpeg(m3u8_url, title, 'm3u8', None, output_dir=output_dir, merge=merge)
    
    This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.
    
        def build_full_control(self):
        ''' Build the correct control type for the option passed through '''
        logger.debug('Build option control')
        ctl = self.option['control']
        ctltitle = self.option['control_title']
        sysbrowser = self.option['filesystem_browser']
        ctlhelp = self.format_help(ctltitle)
        dflt = self.option.get('default', '')
        if self.option.get('nargs', None) and isinstance(dflt, (list, tuple)):
            dflt = ' '.join(str(val) for val in dflt)
        if ctl == ttk.Checkbutton:
            dflt = self.option.get('default', False)
        choices = self.option['choices'] if ctl in(ttk.Combobox, ttk.Radiobutton) else None
        min_max = self.option['min_max'] if ctl == ttk.Scale else None
    
        def reset(self):
        ''' Reset all config options to default '''
        logger.debug('Resetting config')
        for section, items in self.config.defaults.items():
            logger.debug('Resetting section: '%s'', section)
            lookup = [section.split('.')[0], section] if '.' in section else [section, section]
            for item, def_opt in items.items():
                if item == 'helptext':
                    continue
                default = def_opt['default']
                tk_var = self.config_dict_gui[lookup[0]][lookup[1]][item]['selected']
                logger.debug('Resetting: '%s' to '%s'', item, default)
                tk_var.set(default)
    
    
def my_add_control_inputs(wait_to_do_ops, inputs_to_do_before):
    ''' Add control inputs '''
    for tf_op in wait_to_do_ops:
        ctl_inp = [i for i in inputs_to_do_before
                   if tf_op.control_inputs is None or i not in tf_op.control_inputs]
        ge.add_control_inputs(tf_op, ctl_inp)

    
        def train_tabs(self):
        ''' Build the train tabs '''
        logger.debug('Build train tabs')
        for tab in ('graph', 'preview'):
            if tab == 'graph':
                helptext = 'Graph showing Loss vs Iterations'
                GraphDisplay(self, 'graph', helptext, 5000)
            elif tab == 'preview':
                helptext = 'Training preview. Updated on every save iteration'
                PreviewTrain(self, 'preview', helptext, 1000)
        logger.debug('Built train tabs')
    
    from importlib import import_module
    
        def get_mask(self):
        ''' The box for every face will be identical, so set the mask just once
            As gaussian blur technically blurs both sides of the mask, reduce the mask ratio by
            half to give a more expected box '''
        logger.debug('Building box mask')
        mask_ratio = self.config['distance'] / 200
        facesize = self.dummy.shape[0]
        erode = slice(round(facesize * mask_ratio), -round(facesize * mask_ratio))
        mask = self.dummy[:, :, -1]
        mask[erode, erode] = 1.0
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def check_transparency_format(self):
        ''' Make sure that the output format is correct if draw_transparent is selected '''
        transparent = self.config['draw_transparent']
        if not transparent or (transparent and self.config['format'] in ('png', 'tif')):
            return
        logger.warning('Draw Transparent selected, but the requested format does not support '
                       'transparency. Changing output format to 'png'')
        self.config['format'] = 'png'
    
        def test_throws_on_non_1D_arrays(self):
        X = np.zeros((2, 2), dtype=np.float32)
        with self.assertRaisesRegexp(RuntimeError, 'X\.ndim\(\) == 1'):
            self._run_zero_even_op(X)
    
    '''Minibatch construction for Region Proposal Networks (RPN).'''
    
    
def deserialize(arr):
    '''Unserialize a Python object from an array of float32 values fetched from
    a workspace. See serialize().
    '''
    return pickle.loads(arr.astype(np.uint8).tobytes())

    
    '''Coordinated access to a shared multithreading/processing queue.'''
    
    from detectron.core.config import cfg
from detectron.utils.logging import log_json_stats
from detectron.utils.logging import SmoothedValue
from detectron.utils.timer import Timer
import detectron.utils.net as nu
    
        ds = JsonDataset(dataset_name)
    roidb = ds.get_roidb()
    raw_data = sio.loadmat(file_in)['boxes'].ravel()
    assert raw_data.shape[0] == len(roidb)
    
    '''Given a full set of results (boxes, masks, or keypoints) on the 2017 COCO
test set, this script extracts the results subset that corresponds to 2017
test-dev. The test-dev subset can then be submitted to the COCO evaluation
server.
'''
    
    # OpenCL may be enabled by default in OpenCV3; disable it because it's not
# thread safe and causes unwanted GPU memory allocations.
cv2.ocl.setUseOpenCL(False)
    
        # list of integers
    result = s.iloc[[0, 2, 3, 4, 5]]
    expected = s.reindex(s.index[[0, 2, 3, 4, 5]])
    assert_series_equal(result, expected)
    
            df2 = pd.DataFrame(
            {'value': [0, 80, 120, 125], 'key': [1, 2, 2, 3], 'result': list('xyzw')},
            columns=['value', 'key', 'result'],
        )
        df2.value = dtype(df2.value)
    
        def time_pandas_dtype(self, dtype):
        pandas_dtype(dtype)
    
    
  def _OnCompleteDone_FixIt( self ):
    completions = self._GetCompletionsUserMayHaveCompleted()
    fixit_completions = [ _GetFixItCompletion( c ) for c in completions ]
    fixit_completions = [ f for f in fixit_completions if f ]
    if not fixit_completions:
      return
    
        if 'fixits' in self._response:
      return self._HandleFixitResponse()
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: a diagnostic IsAllowed() ONLY if NO filters match it
    for filterMatches in self._filters:
      if filterMatches( diagnostic ):
        return False
    
        def test_multiple_weak_etag_not_match(self):
        computed_etag = ''xyzzy3''
        etags = 'W/'xyzzy1', W/'xyzzy2''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=200)
    
        def add_handler(
        self, fd: Union[int, _Selectable], handler: Callable[..., None], events: int
    ) -> None:
        fd, fileobj = self.split_fd(fd)
        if fd in self.handlers:
            raise ValueError('fd %s added twice' % fd)
        self.handlers[fd] = (fileobj, handler)
        if events & IOLoop.READ:
            self.asyncio_loop.add_reader(fd, self._handle_events, fd, IOLoop.READ)
            self.readers.add(fd)
        if events & IOLoop.WRITE:
            self.asyncio_loop.add_writer(fd, self._handle_events, fd, IOLoop.WRITE)
            self.writers.add(fd)
    
    
class GoogleOAuth2TokenHandler(RequestHandler):
    def post(self):
        assert self.get_argument('code') == 'fake-authorization-code'
        # issue a fake token
        self.finish(
            {'access_token': 'fake-access-token', 'expires_in': 'never-expires'}
        )