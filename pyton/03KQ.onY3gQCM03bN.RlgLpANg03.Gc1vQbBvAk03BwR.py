
        
            # Then we call the sorting method
    sort_blocks()
    
        sys.stdout.write(
        '  [{}] {}% of {:.1f}MB file  \r'.
        format(bar, percents, total / 1024 / 1024)
    )
    sys.stdout.flush()
    if count >= total:
        sys.stdout.write('\n')
    
            # Note: unlike in other places, here we intentionally include all gt
        # rois, even ones marked as crowd. Boxes that overlap with crowds will
        # be filtered out later (see: _filter_crowd_proposals).
        gt_inds = np.where(entry['gt_classes'] > 0)[0]
        if len(gt_inds) > 0:
            gt_boxes = entry['boxes'][gt_inds, :]
            gt_classes = entry['gt_classes'][gt_inds]
            proposal_to_gt_overlaps = box_utils.bbox_overlaps(
                boxes.astype(dtype=np.float32, copy=False),
                gt_boxes.astype(dtype=np.float32, copy=False)
            )
            # Gt box that overlaps each input box the most
            # (ties are broken arbitrarily by class order)
            argmaxes = proposal_to_gt_overlaps.argmax(axis=1)
            # Amount of that overlap
            maxes = proposal_to_gt_overlaps.max(axis=1)
            # Those boxes with non-zero overlap with gt boxes
            I = np.where(maxes > 0)[0]
            # Record max overlaps with the class of the appropriate gt box
            gt_overlaps[I, gt_classes[argmaxes[I]]] = maxes[I]
            box_to_gt_ind_map[I] = gt_inds[argmaxes[I]]
        entry['boxes'] = np.append(
            entry['boxes'],
            boxes.astype(entry['boxes'].dtype, copy=False),
            axis=0
        )
        entry['gt_classes'] = np.append(
            entry['gt_classes'],
            np.zeros((num_boxes), dtype=entry['gt_classes'].dtype)
        )
        entry['seg_areas'] = np.append(
            entry['seg_areas'],
            np.zeros((num_boxes), dtype=entry['seg_areas'].dtype)
        )
        entry['gt_overlaps'] = np.append(
            entry['gt_overlaps'].toarray(), gt_overlaps, axis=0
        )
        entry['gt_overlaps'] = scipy.sparse.csr_matrix(entry['gt_overlaps'])
        entry['is_crowd'] = np.append(
            entry['is_crowd'],
            np.zeros((num_boxes), dtype=entry['is_crowd'].dtype)
        )
        entry['box_to_gt_ind_map'] = np.append(
            entry['box_to_gt_ind_map'],
            box_to_gt_ind_map.astype(
                entry['box_to_gt_ind_map'].dtype, copy=False
            )
        )
    
    
if __name__ == '__main__':
    args = parse_args()
    if args.dataset == 'cityscapes_instance_only':
        convert_cityscapes_instance_only(args.datadir, args.outdir)
    elif args.dataset == 'cocostuff':
        convert_coco_stuff_mat(args.datadir, args.outdir)
    else:
        print('Dataset not supported: %s' % args.dataset)

    
    
def process_in_parallel(
    tag, total_range_size, binary, output_dir, opts=''
):
    '''Run the specified binary cfg.NUM_GPUS times in parallel, each time as a
    subprocess that uses one GPU. The binary must accept the command line
    arguments `--range {start} {end}` that specify a data processing range.
    '''
    # Snapshot the current cfg state in order to pass to the inference
    # subprocesses
    cfg_file = os.path.join(output_dir, '{}_range_config.yaml'.format(tag))
    with open(cfg_file, 'w') as f:
        envu.yaml_dump(cfg, stream=f)
    subprocess_env = os.environ.copy()
    processes = []
    subinds = np.array_split(range(total_range_size), cfg.NUM_GPUS)
    # Determine GPUs to use
    cuda_visible_devices = os.environ.get('CUDA_VISIBLE_DEVICES')
    if cuda_visible_devices:
        gpu_inds = map(int, cuda_visible_devices.split(','))
        assert -1 not in gpu_inds, \
            'Hiding GPU indices using the \'-1\' index is not supported'
    else:
        gpu_inds = range(cfg.NUM_GPUS)
    # Run the binary in cfg.NUM_GPUS subprocesses
    for i, gpu_ind in enumerate(gpu_inds):
        start = subinds[i][0]
        end = subinds[i][-1] + 1
        subprocess_env['CUDA_VISIBLE_DEVICES'] = str(gpu_ind)
        cmd = '{binary} --range {start} {end} --cfg {cfg_file} NUM_GPUS 1 {opts}'
        cmd = cmd.format(
            binary=shlex_quote(binary),
            start=int(start),
            end=int(end),
            cfg_file=shlex_quote(cfg_file),
            opts=' '.join([shlex_quote(opt) for opt in opts])
        )
        logger.info('{} range command {}: {}'.format(tag, i, cmd))
        if i == 0:
            subprocess_stdout = subprocess.PIPE
        else:
            filename = os.path.join(
                output_dir, '%s_range_%s_%s.stdout' % (tag, start, end)
            )
            subprocess_stdout = open(filename, 'w')  # NOQA (close below)
        p = subprocess.Popen(
            cmd,
            shell=True,
            env=subprocess_env,
            stdout=subprocess_stdout,
            stderr=subprocess.STDOUT,
            bufsize=1
        )
        processes.append((i, p, start, end, subprocess_stdout))
    # Log output from inference processes and collate their results
    outputs = []
    for i, p, start, end, subprocess_stdout in processes:
        log_subprocess_output(i, p, output_dir, tag, start, end)
        if i > 0:
            subprocess_stdout.close()
        range_file = os.path.join(
            output_dir, '%s_range_%s_%s.pkl' % (tag, start, end)
        )
        range_data = load_object(range_file)
        outputs.append(range_data)
    return outputs
    
        def test_values_consolidate(self, float_frame):
        float_frame['E'] = 7.0
        assert not float_frame._data.is_consolidated()
        _ = float_frame.values  # noqa
        assert float_frame._data.is_consolidated()
    
            smaller_frame = frame.dropna(how='all')
        # check that original was preserved
        assert_series_equal(frame['foo'], original)
        inplace_frame1.dropna(how='all', inplace=True)
        assert_series_equal(smaller_frame['foo'], expected)
        assert_series_equal(inplace_frame1['foo'], expected)
    
    
def test_from_tuples_iterator():
    # GH 18434
    # input iterator for tuples
    expected = MultiIndex(
        levels=[[1, 3], [2, 4]], codes=[[0, 1], [0, 1]], names=['a', 'b']
    )
    
    
@pytest.mark.parametrize('ind1', [[True], pd.Index([True])])
@pytest.mark.parametrize('ind2', [[False], pd.Index([False])])
def test_getitem_bool_index_single(ind1, ind2):
    # GH#22533
    idx = MultiIndex.from_tuples([(10, 1)])
    tm.assert_index_equal(idx[ind1], idx)
    
            exp5 = (
            'PeriodIndex(['2011', '2012', '2013'], dtype='period[A-DEC]', '
            'freq='A-DEC')'
        )
    
            target = Int64Index(np.arange(10))
        indexer = self.index.get_indexer(target, method='pad')
        expected = np.array([0, 0, 1, 1, 2, 2, 3, 3, 4, 4], dtype=np.intp)
        tm.assert_numpy_array_equal(indexer, expected)
    
            result = rng / 2
        exp = timedelta_range('1 days', periods=5, freq='D', name='x')
        tm.assert_index_equal(result, exp)
        assert result.freq == 'D'
    
            df.f.values[3] = 2
        expected = DataFrame(
            np.zeros((5, 6), dtype='int64'),
            columns=['a', 'b', 'c', 'd', 'e', 'f'],
            index=range(5),
        )
        expected.at[3, 'f'] = 2
        tm.assert_frame_equal(df, expected)
        expected = Series([0, 0, 0, 2, 0], name='f')
        tm.assert_series_equal(df.f, expected)
    
        def test_exponents_without_eng_prefix(self):
        formatter = fmt.EngFormatter(accuracy=4, use_eng_prefix=False)
        f = np.pi
        in_out = [
            (f * 10 ** -24, ' 3.1416E-24'),
            (f * 10 ** -23, ' 31.4159E-24'),
            (f * 10 ** -22, ' 314.1593E-24'),
            (f * 10 ** -21, ' 3.1416E-21'),
            (f * 10 ** -20, ' 31.4159E-21'),
            (f * 10 ** -19, ' 314.1593E-21'),
            (f * 10 ** -18, ' 3.1416E-18'),
            (f * 10 ** -17, ' 31.4159E-18'),
            (f * 10 ** -16, ' 314.1593E-18'),
            (f * 10 ** -15, ' 3.1416E-15'),
            (f * 10 ** -14, ' 31.4159E-15'),
            (f * 10 ** -13, ' 314.1593E-15'),
            (f * 10 ** -12, ' 3.1416E-12'),
            (f * 10 ** -11, ' 31.4159E-12'),
            (f * 10 ** -10, ' 314.1593E-12'),
            (f * 10 ** -9, ' 3.1416E-09'),
            (f * 10 ** -8, ' 31.4159E-09'),
            (f * 10 ** -7, ' 314.1593E-09'),
            (f * 10 ** -6, ' 3.1416E-06'),
            (f * 10 ** -5, ' 31.4159E-06'),
            (f * 10 ** -4, ' 314.1593E-06'),
            (f * 10 ** -3, ' 3.1416E-03'),
            (f * 10 ** -2, ' 31.4159E-03'),
            (f * 10 ** -1, ' 314.1593E-03'),
            (f * 10 ** 0, ' 3.1416E+00'),
            (f * 10 ** 1, ' 31.4159E+00'),
            (f * 10 ** 2, ' 314.1593E+00'),
            (f * 10 ** 3, ' 3.1416E+03'),
            (f * 10 ** 4, ' 31.4159E+03'),
            (f * 10 ** 5, ' 314.1593E+03'),
            (f * 10 ** 6, ' 3.1416E+06'),
            (f * 10 ** 7, ' 31.4159E+06'),
            (f * 10 ** 8, ' 314.1593E+06'),
            (f * 10 ** 9, ' 3.1416E+09'),
            (f * 10 ** 10, ' 31.4159E+09'),
            (f * 10 ** 11, ' 314.1593E+09'),
            (f * 10 ** 12, ' 3.1416E+12'),
            (f * 10 ** 13, ' 31.4159E+12'),
            (f * 10 ** 14, ' 314.1593E+12'),
            (f * 10 ** 15, ' 3.1416E+15'),
            (f * 10 ** 16, ' 31.4159E+15'),
            (f * 10 ** 17, ' 314.1593E+15'),
            (f * 10 ** 18, ' 3.1416E+18'),
            (f * 10 ** 19, ' 31.4159E+18'),
            (f * 10 ** 20, ' 314.1593E+18'),
            (f * 10 ** 21, ' 3.1416E+21'),
            (f * 10 ** 22, ' 31.4159E+21'),
            (f * 10 ** 23, ' 314.1593E+21'),
            (f * 10 ** 24, ' 3.1416E+24'),
            (f * 10 ** 25, ' 31.4159E+24'),
            (f * 10 ** 26, ' 314.1593E+24'),
        ]
        self.compare_all(formatter, in_out)