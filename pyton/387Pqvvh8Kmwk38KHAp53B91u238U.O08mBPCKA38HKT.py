
        
        from thefuck.utils import replace_command
from thefuck.specific.archlinux import get_pkgfile, archlinux_env
    
        def test_or_(self, shell):
        assert shell.or_('ls', 'cd') == 'ls || cd'
    
        def test_get_aliases(self, shell):
        assert shell.get_aliases() == {'fuck': 'eval $(thefuck $(fc -ln -1))',
                                       'l': 'ls -CF',
                                       'la': 'ls -A',
                                       'll': 'ls -alF'}
    
        def app_alias(self, alias_name):
        if settings.alter_history:
            alter_history = ('    builtin history delete --exact'
                             ' --case-sensitive -- $fucked_up_command\n'
                             '    builtin history merge ^ /dev/null\n')
        else:
            alter_history = ''
        # It is VERY important to have the variables declared WITHIN the alias
        return ('function {0} -d 'Correct your previous console command'\n'
                '  set -l fucked_up_command $history[1]\n'
                '  env TF_SHELL=fish TF_ALIAS={0} PYTHONIOENCODING=utf-8'
                ' thefuck $fucked_up_command {2} $argv | read -l unfucked_command\n'
                '  if [ '$unfucked_command' != '' ]\n'
                '    eval $unfucked_command\n{1}'
                '  end\n'
                'end').format(alias_name, alter_history, ARGUMENT_PLACEHOLDER)
    
        def _parse_alias(self, alias):
        name, value = alias.split('=', 1)
        if value[0] == value[-1] == ''' or value[0] == value[-1] == ''':
            value = value[1:-1]
        return name, value
    
    
@for_app('pyenv')
def get_new_command(command):
    broken = re.findall(r'pyenv: no such command `([^']*)'', command.output)[0]
    matched = [replace_argument(command.script, broken, common_typo)
               for common_typo in COMMON_TYPOS.get(broken, [])]
    matched.extend(replace_command(command, broken, get_pyenv_commands()))
    return matched

    
        def test_valid_items(self):
        items = input.parse_items([
            self.key_value('string=value'),
            self.key_value('Header:value'),
            self.key_value('Unset-Header:'),
            self.key_value('Empty-Header;'),
            self.key_value('list:=['a', 1, {}, false]'),
            self.key_value('obj:={'a': 'b'}'),
            self.key_value('ed='),
            self.key_value('bool:=true'),
            self.key_value('file@' + FILE_PATH_ARG),
            self.key_value('query==value'),
            self.key_value('string-embed=@' + FILE_PATH_ARG),
            self.key_value('raw-json-embed:=@' + JSON_FILE_PATH_ARG),
        ])
    
    
def parse_items(items,
                headers_class=CaseInsensitiveDict,
                data_class=OrderedDict,
                files_class=DataDict,
                params_class=ParamsDict):
    '''Parse `KeyValue` `items` into `data`, `headers`, `files`,
    and `params`.
    
            for line, lf in self.msg.iter_lines(self.CHUNK_SIZE):
    
        # Optional short description. Will be be shown in the help
    # under --auth-type.
    description = None
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
    UNICODE = FILE_CONTENT

    
        def test_implicit_POST_json(self, httpbin):
        r = http(httpbin.url + '/post', 'hello=world')
        assert HTTP_OK in r
        assert r.json['json'] == {'hello': 'world'}
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        return ret
    
    
def softsign(x):
    '''
    o = x / (1 + abs(x))
    '''
    return tf.nn.softsign(x)
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()
    
    When working with a new dataset, we strongly suggest to convert the dataset into
the COCO json format and use the existing code; it is not recommended to write
code to support new dataset formats.
'''
    
                                if object_cls not in category_dict:
                                category_dict[object_cls] = cat_id
                                cat_id += 1
                            ann['category_id'] = category_dict[object_cls]
                            ann['iscrowd'] = 0
                            ann['area'] = obj['pixelCount']
                            ann['bbox'] = bboxs_util.xyxy_to_xywh(
                                segms_util.polys_to_boxes(
                                    [ann['segmentation']])).tolist()[0]
    
    
def get_roidb(dataset_name, ind_range):
    '''Get the roidb for the dataset specified in the global cfg. Optionally
    restrict it to a range of indices if ind_range is a pair of integers.
    '''
    dataset = JsonDataset(dataset_name)
    roidb = dataset.get_roidb()
    
    from detectron.core.config import assert_and_infer_cfg
from detectron.core.config import cfg
from detectron.core.config import load_cfg
from detectron.core.config import merge_cfg_from_cfg
from detectron.core.config import merge_cfg_from_file
from detectron.utils.io import cache_url
from detectron.utils.logging import setup_logging
import detectron.core.rpn_generator as rpn_engine
import detectron.core.test_engine as model_engine
import detectron.datasets.dummy_datasets as dummy_datasets
import detectron.utils.c2 as c2_utils
import detectron.utils.env as envu
import detectron.utils.vis as vis_utils
    
    
def voc_eval(detpath,
             annopath,
             imagesetfile,
             classname,
             cachedir,
             ovthresh=0.5,
             use_07_metric=False):
    '''rec, prec, ap = voc_eval(detpath,
                                annopath,
                                imagesetfile,
                                classname,
                                [ovthresh],
                                [use_07_metric])
    
        def enqueue_blobs(self, gpu_id, blob_names, blobs):
        '''Put a mini-batch on a BlobsQueue.'''
        assert len(blob_names) == len(blobs)
        t = time.time()
        dev = c2_utils.CudaDevice(gpu_id)
        queue_name = 'gpu_{}/{}'.format(gpu_id, self._blobs_queue_name)
        blob_names = ['gpu_{}/{}'.format(gpu_id, b) for b in blob_names]
        for (blob_name, blob) in zip(blob_names, blobs):
            workspace.FeedBlob(blob_name, blob, device_option=dev)
        logger.debug(
            'enqueue_blobs {}: workspace.FeedBlob: {}'.
            format(gpu_id, time.time() - t)
        )
        t = time.time()
        op = core.CreateOperator(
            'SafeEnqueueBlobs', [queue_name] + blob_names,
            blob_names + [queue_name + '_enqueue_status'],
            device_option=dev
        )
        workspace.RunOperatorOnce(op)
        logger.debug(
            'enqueue_blobs {}: workspace.RunOperatorOnce: {}'.
            format(gpu_id, time.time() - t)
        )
    
    '''Helpful utilities for working with Caffe2.'''
    
        bn_tensors = []
    for (bn, scl) in zip(bn_layers[0::2], bn_layers[1::2]):
        assert bn.name[len('bn'):] == scl.name[len('scale'):], 'Pair mismatch'
        blob_out = 'res' + bn.name[len('bn'):] + '_bn'
        bn_mean = np.asarray(bn.blobs[0].data)
        bn_var = np.asarray(bn.blobs[1].data)
        scale = np.asarray(scl.blobs[0].data)
        bias = np.asarray(scl.blobs[1].data)
        std = np.sqrt(bn_var + 1e-5)
        new_scale = scale / std
        new_bias = bias - bn_mean * scale / std
        new_scale_tensor = _create_tensor(
            new_scale, bn.blobs[0].shape, blob_out + '_s'
        )
        new_bias_tensor = _create_tensor(
            new_bias, bn.blobs[0].shape, blob_out + '_b'
        )
        bn_tensors.extend([new_scale_tensor, new_bias_tensor])
    return bn_tensors