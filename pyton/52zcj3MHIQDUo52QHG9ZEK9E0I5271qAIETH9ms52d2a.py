
        
            def add_user(self, user_id, name, pass_hash):
        pass
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
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
    
        def get(self, query):
        '''Get the stored query result from the cache.
    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
    # Documents to append as an appendix to all manuals.
#texinfo_appendices = []
    
    AUGEAS_LENS_DIR = pkg_resources.resource_filename(
    'certbot_apache', 'augeas_lens')
'''Path to the Augeas lens directory'''
    
        @classmethod
    def _call(cls, vhosts):
        from certbot_apache.display_ops import select_vhost
        return select_vhost('example.com', vhosts)
    
    import configobj
import josepy as jose
import mock
import six
    
    .. note::
   This configuration limits the scope of the TSIG key to just be able to
   add and remove TXT records for one specific host for the purpose of
   completing the ``dns-01`` challenge. If your version of BIND doesn't
   support the
   `update-policy <http://www.zytrax.com/books/dns/ch7/xfer.html#update-policy>`_
   directive then you can use the less-secure
   `allow-update <http://www.zytrax.com/books/dns/ch7/xfer.html#allow-update>`_
   directive instead.
    
        await common.async_turn_off(hass)
    await hass.async_block_till_done()
    
            self.hass.start()
        self.hass.block_till_done()
        moldind = self.hass.states.get('sensor.mold_indicator')
        assert moldind
        assert moldind.state == 'unavailable'
        assert moldind.attributes.get(ATTR_DEWPOINT) is None
        assert moldind.attributes.get(ATTR_CRITICAL_TEMP) is None
    
    
# ---------------------------------------------------------------------------- #
# Mask heads
# ---------------------------------------------------------------------------- #
    
    
def log_subprocess_output(i, p, output_dir, tag, start, end):
    '''Capture the output of each subprocess and log it in the parent process.
    The first subprocess's output is logged in realtime. The output from the
    other subprocesses is buffered and then printed all at once (in order) when
    subprocesses finish.
    '''
    outfile = os.path.join(
        output_dir, '%s_range_%s_%s.stdout' % (tag, start, end)
    )
    logger.info('# ' + '-' * 76 + ' #')
    logger.info(
        'stdout of subprocess %s with range [%s, %s]' % (i, start + 1, end)
    )
    logger.info('# ' + '-' * 76 + ' #')
    if i == 0:
        # Stream the piped stdout from the first subprocess in realtime
        with open(outfile, 'wb') as f:
            for line in iter(p.stdout.readline, b''):
                print(line.rstrip().decode('utf8'))
                f.write(line)
        p.stdout.close()
        ret = p.wait()
    else:
        # For subprocesses >= 1, wait and dump their log file
        ret = p.wait()
        with open(outfile, 'r') as f:
            print(''.join(f.readlines()))
    assert ret == 0, 'Range subprocess failed (exit code: {})'.format(ret)

    
        `scores` has shape (#detection, #classes), where each row represents a list
    of object detection confidence scores for each of the object classes in the
    dataset (including the background class). `scores[i, j]`` corresponds to the
    box at `boxes[i, j * 4:(j + 1) * 4]`.
    '''
    num_classes = cfg.MODEL.NUM_CLASSES
    cls_boxes = [[] for _ in range(num_classes)]
    # Apply threshold on detection probabilities and apply NMS
    # Skip j = 0, because it's the background class
    for j in range(1, num_classes):
        inds = np.where(scores[:, j] > cfg.TEST.SCORE_THRESH)[0]
        scores_j = scores[inds, j]
        boxes_j = boxes[inds, j * 4:(j + 1) * 4]
        dets_j = np.hstack((boxes_j, scores_j[:, np.newaxis])).astype(
            np.float32, copy=False
        )
        if cfg.TEST.SOFT_NMS.ENABLED:
            nms_dets, _ = box_utils.soft_nms(
                dets_j,
                sigma=cfg.TEST.SOFT_NMS.SIGMA,
                overlap_thresh=cfg.TEST.NMS,
                score_thresh=0.0001,
                method=cfg.TEST.SOFT_NMS.METHOD
            )
        else:
            keep = box_utils.nms(dets_j, cfg.TEST.NMS)
            nms_dets = dets_j[keep, :]
        # Refine the post-NMS boxes using bounding-box voting
        if cfg.TEST.BBOX_VOTE.ENABLED:
            nms_dets = box_utils.box_voting(
                nms_dets,
                dets_j,
                cfg.TEST.BBOX_VOTE.VOTE_TH,
                scoring_method=cfg.TEST.BBOX_VOTE.SCORING_METHOD
            )
        cls_boxes[j] = nms_dets
    
    
def cityscapes_to_coco_all_random(cityscapes_id):
    lookup = {
        0: -1,  # ... background
        1: -1,  # bicycle
        2: -1,  # car
        3: -1,  # person (ignore)
        4: -1,  # train
        5: -1,  # truck
        6: -1,  # motorcycle
        7: -1,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]

    
        # Find which gt ROI each ex ROI has max overlap with:
    # this will be the ex ROI's gt target
    gt_assignment = ex_gt_overlaps.argmax(axis=1)
    gt_rois = rois[gt_inds[gt_assignment], :]
    ex_rois = rois[ex_inds, :]
    # Use class '1' for all boxes if using class_agnostic_bbox_reg
    targets[ex_inds, 0] = (
        1 if cfg.MODEL.CLS_AGNOSTIC_BBOX_REG else labels[ex_inds])
    targets[ex_inds, 1:] = box_utils.bbox_transform_inv(
        ex_rois, gt_rois, cfg.MODEL.BBOX_REG_WEIGHTS)
    return targets
    
        # conv 1x1 -> GN (no ReLU)
    cur = model.ConvGN(
        cur,
        prefix + '_branch2c',
        dim_inner,
        dim_out,
        kernel=1,
        group_gn=get_group_gn(dim_out),
        stride=1,
        pad=0,
    )
    return cur

    
            try:
            config_hash = self.config_hash
        except NoSuchImageError as e:
            log.debug(
                'Service %s has diverged: %s',
                self.name, six.text_type(e),
            )
            return True
    
        tls = options.get('--tls', False)
    ca_cert = unquote_path(options.get('--tlscacert'))
    cert = unquote_path(options.get('--tlscert'))
    key = unquote_path(options.get('--tlskey'))
    # verify is a special case - with docopt `--tlsverify` = False means it
    # wasn't used, so we set it if either the environment or the flag is True
    # see https://github.com/docker/compose/issues/5632
    verify = options.get('--tlsverify') or environment.get_boolean('DOCKER_TLS_VERIFY')
    
        return (candidates, path)
    
    
class NetworkTest(unittest.TestCase):
    def test_check_remote_network_config_success(self):
        options = {'com.docker.network.driver.foo': 'bar'}
        ipam_config = {
            'driver': 'default',
            'config': [
                {'subnet': '172.0.0.1/16', },
                {
                    'subnet': '156.0.0.1/25',
                    'gateway': '156.0.0.1',
                    'aux_addresses': ['11.0.0.1', '24.25.26.27'],
                    'ip_range': '156.0.0.1-254'
                }
            ],
            'options': {
                'iface': 'eth0',
            }
        }
        labels = {
            'com.project.tests.istest': 'true',
            'com.project.sound.track': 'way out of here',
        }
        remote_labels = labels.copy()
        remote_labels.update({
            'com.docker.compose.project': 'compose_test',
            'com.docker.compose.network': 'net1',
        })
        net = Network(
            None, 'compose_test', 'net1', 'bridge',
            options, enable_ipv6=True, ipam=ipam_config,
            labels=labels
        )
        check_remote_network_config(
            {
                'Driver': 'bridge',
                'Options': options,
                'EnableIPv6': True,
                'Internal': False,
                'Attachable': True,
                'IPAM': {
                    'Driver': 'default',
                    'Config': [{
                        'Subnet': '156.0.0.1/25',
                        'Gateway': '156.0.0.1',
                        'AuxiliaryAddresses': ['24.25.26.27', '11.0.0.1'],
                        'IPRange': '156.0.0.1-254'
                    }, {
                        'Subnet': '172.0.0.1/16',
                        'Gateway': '172.0.0.1'
                    }],
                    'Options': {
                        'iface': 'eth0',
                    },
                },
                'Labels': remote_labels
            },
            net
        )
    
            command = TopLevelCommand(project)
        command.run({
            'SERVICE': 'service',
            'COMMAND': None,
            '-e': [],
            '--label': [],
            '--user': None,
            '--no-deps': None,
            '--detach': True,
            '-T': None,
            '--entrypoint': None,
            '--service-ports': None,
            '--use-aliases': None,
            '--publish': [],
            '--volume': [],
            '--rm': None,
            '--name': None,
            '--workdir': None,
        })
    
    from .utils import ScriptError
    
                            if not isNumPosStrValue(count):
                            if Backend.isDbms(DBMS.MSSQL):
                                fallback = True
                                count = inject.getValue(query.replace('master.dbo.fn_varbintohexstr', 'sys.fn_sqlvarbasetostr'), union=False, error=False, expected=EXPECTED.INT, charsetType=CHARSET_TYPE.DIGITS)
                            elif Backend.isDbms(DBMS.MYSQL):
                                fallback = True
                                count = inject.getValue(query.replace('authentication_string', 'password'), union=False, error=False, expected=EXPECTED.INT, charsetType=CHARSET_TYPE.DIGITS)
    
                        return kb.data.cachedColumns
    
            self.checkDbmsOs()