
        
        
def main(unused_argv):
  # Left-to-right, character-based LSTM.
  char2word = spec_builder.ComponentSpecBuilder('char_lstm')
  char2word.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  char2word.set_transition_system(name='char-shift-only', left_to_right='true')
  char2word.add_fixed_feature(name='chars', fml='char-input.text-char',
                              embedding_dim=16)
    
    tf_proto_library_cc(
    name = 'spec_proto',
    srcs = ['spec.proto'],
)
    
    cc_binary(
    name = 'mst_cc_impl.so',
    linkopts = select({
        '//conditions:default': ['-lm'],
        '@org_tensorflow//tensorflow:darwin': [],
    }),
    linkshared = 1,
    linkstatic = 1,
    deps = ['//dragnn/mst:mst_ops_cc'],
)
    
      Args:
    comp: Component whose fixed features we wish to look up.
    state: live MasterState object for the component.
    stride: Tensor containing current batch * beam size.
    during_training: True if this is being called from a training code path.
      This controls, e.g., the use of feature ID dropout.
    
          saved_model_builder.save()

    
    from syntaxnet import parser_trainer
from syntaxnet import task_spec_pb2
from syntaxnet import test_flags
    
    '''
import hashlib
import requests
    
            super(EncodedStream, self).__init__(**kwargs)
    
      1. Read, validate and process the input (args, `stdin`).
  2. Create and send a request.
  3. Stream, and possibly process and format, the parts
     of the request-response exchange selected by output options.
  4. Simultaneously write to `stdout`
  5. Exit.
    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
    
# Various separators used in args
SEP_HEADERS = ':'
SEP_HEADERS_EMPTY = ';'
SEP_CREDENTIALS = ':'
SEP_PROXY = ':'
SEP_DATA = '='
SEP_DATA_RAW_JSON = ':='
SEP_FILES = '@'
SEP_DATA_EMBED_FILE = '=@'
SEP_DATA_EMBED_RAW_JSON_FILE = ':=@'
SEP_QUERY = '=='
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
    def mixcloud_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url, faker=True)
    title = r1(r'<meta property='og:title' content='([^']*)'', html)
    preview_url = r1(r'm-preview=\'([^\']+)\'', html)
    preview = r1(r'previews(.*)\.mp3$', preview_url)
    
    
def mtv81_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_content(url)
    title = HTMLParser().unescape(
        '|'.join(match1(html, r'<title>(.*?)</title>').split('|')[:-2]))
    
    ATTR_ENERGY_GENERATION = 'energy_generation'
ATTR_POWER_GENERATION = 'power_generation'
ATTR_ENERGY_CONSUMPTION = 'energy_consumption'
ATTR_POWER_CONSUMPTION = 'power_consumption'
ATTR_EFFICIENCY = 'efficiency'
    
        def test_from_event_to_delete_state(self):
        '''Test converting deleting state event to db state.'''
        event = ha.Event(EVENT_STATE_CHANGED, {
            'entity_id': 'sensor.temperature',
            'old_state': ha.State('sensor.temperature', '18'),
            'new_state': None,
        })
        db_state = States.from_event(event)
    
            basename = os.path.splitext(os.path.basename(im_name))[0]
        txtname = os.path.join(output_dir, basename + 'pred.txt')
        with open(txtname, 'w') as fid_txt:
            if i % 10 == 0:
                logger.info('i: {}: {}'.format(i, basename))
            for j in range(1, len(all_segms)):
                clss = json_dataset.classes[j]
                clss_id = cityscapes_eval.name2label[clss].id
                segms = all_segms[j][i]
                boxes = all_boxes[j][i]
                if segms == []:
                    continue
                masks = mask_util.decode(segms)
    
        def _remove_layers(net):
        for i in reversed(range(len(net.layer))):
            if net.layer[i].type in remove_types:
                net.layer.pop(i)
    
        Arguments:
        model (DetectionModelHelper): the detection model to use
        im (ndarray): color image to test (in BGR order)
        boxes (ndarray): R x 4 array of object proposals in 0-indexed
            [x1, y1, x2, y2] format, or None if using RPN
    
    
def test_net_on_dataset(
    weights_file,
    dataset_name,
    proposal_file,
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
        all_boxes, all_segms, all_keyps = multi_gpu_test_net_on_dataset(
            weights_file, dataset_name, proposal_file, num_images, output_dir
        )
    else:
        all_boxes, all_segms, all_keyps = test_net(
            weights_file, dataset_name, proposal_file, output_dir, gpu_id=gpu_id
        )
    test_timer.toc()
    logger.info('Total inference time: {:.3f}s'.format(test_timer.average_time))
    results = task_evaluation.evaluate_all(
        dataset, all_boxes, all_segms, all_keyps, output_dir
    )
    return results
    
    
def _do_keypoint_eval(json_dataset, res_file, output_dir):
    ann_type = 'keypoints'
    imgIds = json_dataset.COCO.getImgIds()
    imgIds.sort()
    coco_dt = json_dataset.COCO.loadRes(res_file)
    coco_eval = COCOeval(json_dataset.COCO, coco_dt, ann_type)
    coco_eval.params.imgIds = imgIds
    coco_eval.evaluate()
    coco_eval.accumulate()
    eval_file = os.path.join(output_dir, 'keypoint_results.pkl')
    save_object(coco_eval, eval_file)
    logger.info('Wrote json eval results to: {}'.format(eval_file))
    coco_eval.summarize()
    return coco_eval

    
    
def _empty_box_results():
    return OrderedDict({
        'box':
        OrderedDict(
            [
                ('AP', -1),
                ('AP50', -1),
                ('AP75', -1),
                ('APs', -1),
                ('APm', -1),
                ('APl', -1),
            ]
        )
    })
    
            outputs[0].reshape(rois.shape)
        outputs[0].data[...] = rois
        if len(outputs) > 1:
            outputs[1].reshape(roi_probs.shape)
            outputs[1].data[...] = roi_probs
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        target=VByName('fullname'),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/gild/{fullname}',
    )
    def POST_gild(self, target):
        if not isinstance(target, (Comment, Link)):
            err = RedditError('NO_THING_ID')
            self.on_validation_error(err)
    
    class AwardsController(RedditController):
    
                if links:
                kw = {}
                if wrapper:
                    links = wrap_links(links, wrapper = wrapper)
                else:
                    links = wrap_links(links)
                links = list(links)
                links = max(links, key = lambda x: x._score) if links else None
            if not links and wrapper:
                return wrapper(None)
            return links
            # note: even if _by_url successed or a link was passed in,
            # it is possible link_listing.things is empty if the
            # link(s) is/are members of a private reddit
            # return the link with the highest score (if more than 1)
        except:
            #we don't want to return 500s in other people's pages.
            import traceback
            g.log.debug('FULLPATH: get_link error in buttons code')
            g.log.debug(traceback.format_exc())
            if wrapper:
                return wrapper(None)
    
    
    def send400(self):
        if 'usable_error_content' in request.environ:
            return request.environ['usable_error_content']
        else:
            res = pages.RedditError(
                title=_('bad request (%(domain)s)') % dict(domain=g.domain),
                message=_('you sent an invalid request'),
                explanation=request.GET.get('explanation'))
            return res.render()