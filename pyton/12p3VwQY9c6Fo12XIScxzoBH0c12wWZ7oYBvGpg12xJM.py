
        
            '''
    def cache_decorator(fn):
        @memoize
        @wraps(fn)
        def wrapper(*args, **kwargs):
            if cache.disabled:
                return fn(*args, **kwargs)
            else:
                return _cache.get_value(fn, depends_on, args, kwargs)
    
        def test_app_alias(self, shell):
        assert 'setenv TF_SHELL tcsh' in shell.app_alias('fuck')
        assert 'alias fuck' in shell.app_alias('fuck')
        assert 'alias FUCK' in shell.app_alias('FUCK')
        assert 'thefuck' in shell.app_alias('fuck')
    
        def _parse_alias(self, alias):
        name, value = alias.split('\t', 1)
        return name, value
    
        def _parse_alias(self, alias):
        name, value = alias.split('=', 1)
        if value[0] == value[-1] == ''' or value[0] == value[-1] == ''':
            value = value[1:-1]
        return name, value
    
    
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, output, which', [
    ('qweqwe', 'qweqwe: not found', None),
    ('vom file.py', 'some text', None),
    ('vim file.py', 'vim: not found', 'vim')])
def test_not_match(mocker, script, output, which):
    mocker.patch('thefuck.rules.no_command.which', return_value=which)
    
                yield line.split()[0]
        elif line.startswith('Commands:'):
            is_commands_list = True
    
        Catching this error will catch both
    :exc:`~requests.exceptions.ConnectTimeout` and
    :exc:`~requests.exceptions.ReadTimeout` errors.
    '''
    
    
        return Server(text_response_handler, **kwargs)
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
        def getheaders(self, name):
        self._headers.getheaders(name)
    
    import idna
import urllib3
import chardet
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
    from requests.help import info
    
            except (_SSLError, _HTTPError) as e:
            if isinstance(e, _SSLError):
                # This branch is for urllib3 versions earlier than v1.22
                raise SSLError(e, request=request)
            elif isinstance(e, ReadTimeoutError):
                raise ReadTimeout(e, request=request)
            else:
                raise
    
            Will successfully encode parameters when passed as a dict or a list of
        2-tuples. Order is retained if data is a list of 2-tuples but arbitrary
        if parameters are supplied as a dict.
        '''
    
    # Set default logging handler to avoid 'No handler found' warnings.
import logging
from logging import NullHandler
    
    :copyright: (c) 2012 by Kenneth Reitz.
:license: Apache2, see LICENSE for more details.
'''
    
    import time
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    pipeline = Pipeline([
        ('vect', TfidfVectorizer(min_df=3, max_df=0.95)),
        ('clf', LinearSVC(C=1000)),
    ])
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    # histogram
plt.figure(4, figsize=(3, 2.2))
plt.clf()
plt.axes([.01, .01, .98, .98])
plt.hist(X, bins=256, color='.5', edgecolor='.5')
plt.yticks(())
plt.xticks(regular_values)
values = np.sort(values)
for center_1, center_2 in zip(values[:-1], values[1:]):
    plt.axvline(.5 * (center_1 + center_2), color='b')
    
        #Required strings to create intermediate HTML files
    header = '<html><head><link rel=stylesheet type=text/css href=' + colorscheme + '.css></head><body>\n'
    footer = '</body></html>'
    title_content = '<h1 class=titlemain>tldr pages</h1><h4 class=titlesub>Simplified and community driven man pages</h4></body></html>'
    
        def forward(self, inputs, outputs):
        '''See modeling.detector.GenerateProposals for inputs/outputs
        documentation.
        '''
        # 1. for each location i in a (H, W) grid:
        #      generate A anchor boxes centered on cell i
        #      apply predicted bbox deltas to each of the A anchors at cell i
        # 2. clip predicted boxes to image
        # 3. remove predicted boxes with either height or width < threshold
        # 4. sort all (proposal, score) pairs by score from highest to lowest
        # 5. take the top pre_nms_topN proposals before NMS
        # 6. apply NMS with a loose threshold (0.7) to the remaining proposals
        # 7. take after_nms_topN proposals after NMS
        # 8. return the top proposals
    
    
def generate_rpn_on_dataset(
    weights_file,
    dataset_name,
    _proposal_file_ignored,
    output_dir,
    multi_gpu=False,
    gpu_id=0
):
    '''Run inference on a dataset.'''
    dataset = JsonDataset(dataset_name)
    test_timer = Timer()
    test_timer.tic()
    if multi_gpu:
        num_images = len(dataset.get_roidb())
        _boxes, _scores, _ids, rpn_file = multi_gpu_generate_rpn_on_dataset(
            weights_file, dataset_name, _proposal_file_ignored, num_images,
            output_dir
        )
    else:
        # Processes entire dataset range by default
        _boxes, _scores, _ids, rpn_file = generate_rpn_on_range(
            weights_file,
            dataset_name,
            _proposal_file_ignored,
            output_dir,
            gpu_id=gpu_id
        )
    test_timer.toc()
    logger.info('Total inference time: {:.3f}s'.format(test_timer.average_time))
    return evaluate_proposal_file(dataset, rpn_file, output_dir)
    
                return all_results
        else:
            # Subprocess child case:
            # In this case test_net was called via subprocess.Popen to execute on a
            # range of inputs on a single dataset
            dataset_name, proposal_file = get_inference_dataset(0, is_parent=False)
            output_dir = get_output_dir(dataset_name, training=False)
            return child_func(
                weights_file,
                dataset_name,
                proposal_file,
                output_dir,
                ind_range=ind_range,
                gpu_id=gpu_id
            )
    
        def test_renamed_key_from_list(self):
        # You should see logger messages like:
        #  'Key EXAMPLE.RENAMED.KEY was renamed to EXAMPLE.KEY;
        #  please update your config'
        opts = ['EXAMPLE.RENAMED.KEY', 'foobar']
        with self.assertRaises(AttributeError):
            _ = cfg.EXAMPLE.RENAMED.KEY  # noqa
        with self.assertRaises(KeyError):
            core_config.merge_cfg_from_list(opts)
    
        assert dim_per_gp == -1 or num_groups == -1, \
        'GroupNorm: can only specify G or C/G.'
    
        Returns:
        blob (ndarray): a data blob holding an image pyramid
        im_scale (float): image scale (target size) / (original size)
        im_info (ndarray)
    '''
    processed_im, im_scale = prep_im_for_blob(
        im, cfg.PIXEL_MEANS, target_scale, target_max_size
    )
    blob = im_list_to_blob(processed_im)
    # NOTE: this height and width may be larger than actual scaled input image
    # due to the FPN.COARSEST_STRIDE related padding in im_list_to_blob. We are
    # maintaining this behavior for now to make existing results exactly
    # reproducible (in practice using the true input image height and width
    # yields nearly the same results, but they are sometimes slightly different
    # because predictions near the edge of the image will be pruned more
    # aggressively).
    height, width = blob.shape[2], blob.shape[3]
    im_info = np.hstack((height, width, im_scale))[np.newaxis, :]
    return blob, im_scale, im_info.astype(np.float32)
    
    import argparse
import json
import os
import sys
    
    from detectron.core.config import cfg
from detectron.datasets import task_evaluation
from detectron.datasets.json_dataset import JsonDataset
from detectron.utils.io import load_object
from detectron.utils.logging import setup_logging
import detectron.core.config as core_config
    
    # OpenCL may be enabled by default in OpenCV3; disable it because it's not
# thread safe and causes unwanted GPU memory allocations.
cv2.ocl.setUseOpenCL(False)