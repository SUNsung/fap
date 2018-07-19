
        
        
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    # (c) 2015, Marc Abramowitz <marca@surveymonkey.com>
#
# This file is part of Ansible.
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible. If not, see <http://www.gnu.org/licenses/>.
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
            return contracts
    
        def __init__(self, crawler):
        self._crawler = crawler
        self._schemes = {}  # stores acceptable schemes on instancing
        self._handlers = {}  # stores instanced handlers for schemes
        self._notconfigured = {}  # remembers failed handlers
        handlers = without_none_values(
            crawler.settings.getwithbase('DOWNLOAD_HANDLERS'))
        for scheme, clspath in six.iteritems(handlers):
            self._schemes[scheme] = clspath
    
            def process_spider_exception(_failure):
            exception = _failure.value
            for method in self.methods['process_spider_exception']:
                result = method(response=response, exception=exception, spider=spider)
                assert result is None or _isiterable(result), \
                    'Middleware %s must returns None, or an iterable object, got %s ' % \
                    (fname(method), type(result))
                if result is not None:
                    return result
            return _failure
    
        def request_seen(self, request):
        return False
    
            total_count = 0
        translated_count = 0
        with open(fn) as f:
            catalog = read_po(f)
            for msg in catalog:
                total_count += 1
                if is_translated(msg):
                    translated_count += 1
        pct = translated_count / float(total_count) * 100
        click.echo('% -7s % 2d%%' % (
            locale,
            pct,
        ), err=True)
        if pct >= MINIMUM and locale not in rv:
            rv.append(locale)
    with open(catalog_file, 'w') as f:
        json.dump({
            'supported_locales': sorted(rv)
        }, f, indent=2)
        f.write('\n')
    
    '''Functions for evaluating results computed for a json dataset.'''
    
                # union
            uni = ((bb[2] - bb[0] + 1.) * (bb[3] - bb[1] + 1.) +
                   (BBGT[:, 2] - BBGT[:, 0] + 1.) *
                   (BBGT[:, 3] - BBGT[:, 1] + 1.) - inters)
    
    logger = logging.getLogger(__name__)
    
        # ==========================================================================
    # classification tower with logits and prob prediction
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
        # classification tower stack convolution starts
        for nconv in range(cfg.RETINANET.NUM_CONVS):
            suffix = 'n{}_fpn{}'.format(nconv, lvl)
            dim_in, dim_out = dim_in, dim_in
            if lvl == k_min:
                bl_out = model.Conv(
                    bl_in,
                    'retnet_cls_conv_' + suffix,
                    dim_in,
                    dim_out,
                    3,
                    stride=1,
                    pad=1,
                    weight_init=('GaussianFill', {
                        'std': 0.01
                    }),
                    bias_init=('ConstantFill', {
                        'value': 0.
                    })
                )
            else:
                bl_out = model.ConvShared(
                    bl_in,
                    'retnet_cls_conv_' + suffix,
                    dim_in,
                    dim_out,
                    3,
                    stride=1,
                    pad=1,
                    weight='retnet_cls_conv_n{}_fpn{}_w'.format(nconv, k_min),
                    bias='retnet_cls_conv_n{}_fpn{}_b'.format(nconv, k_min)
                )
            bl_in = model.Relu(bl_out, bl_out)
            bl_feat = bl_in
        # cls tower stack convolution ends. Add the logits layer now
        if lvl == k_min:
            retnet_cls_pred = model.Conv(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight_init=('GaussianFill', {
                    'std': 0.01
                }),
                bias_init=bias_init
            )
        else:
            retnet_cls_pred = model.ConvShared(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight='retnet_cls_pred_fpn{}_w'.format(k_min),
                bias='retnet_cls_pred_fpn{}_b'.format(k_min)
            )
        if not model.train:
            if cfg.RETINANET.SOFTMAX:
                model.net.GroupSpatialSoftmax(
                    retnet_cls_pred,
                    'retnet_cls_prob_fpn{}'.format(lvl),
                    num_classes=cls_pred_dim
                )
            else:
                model.net.Sigmoid(
                    retnet_cls_pred, 'retnet_cls_prob_fpn{}'.format(lvl)
                )
        if cfg.RETINANET.SHARE_CLS_BBOX_TOWER:
            bbox_feat_list.append(bl_feat)
    
        def _run_speed_test(self, iters=5, N=1024):
        '''This function provides an example of how to benchmark custom
        operators using the Caffe2 'prof_dag' network execution type. Please
        note that for 'prof_dag' to work, Caffe2 must be compiled with profiling
        support using the `-DUSE_PROF=ON` option passed to `cmake` when building
        Caffe2.
        '''
        net = core.Net('test')
        net.Proto().type = 'prof_dag'
        net.Proto().num_workers = 2
        Y = net.BatchPermutation(['X', 'I'], 'Y')
        Y_flat = net.FlattenToVec([Y], 'Y_flat')
        loss = net.AveragedLoss([Y_flat], 'loss')
        net.AddGradientOperators([loss])
        workspace.CreateNet(net)