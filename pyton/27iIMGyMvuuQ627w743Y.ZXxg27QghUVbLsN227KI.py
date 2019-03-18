
        
          print(header)
    
      Args:
    in_size: The integer size of the non-batc input dimension. [(x),y]
    out_size: The integer size of non-batch output dimension. [x,(y)]
    do_bias (optional): Add a (learnable) bias vector to the operation,
      if false, b will be None
    mat_init_value (optional): numpy constant for matrix initialization, if None
      , do random, with additional parameters.
    alpha (optional): A multiplicative scaling for the weight initialization
      of the matrix, in the form \alpha * 1/\sqrt{x.shape[1]}.
    identity_if_possible (optional): just return identity,
      if x.shape[1] == out_size.
    normalized (optional): Option to divide out by the norms of the rows of W.
    name (optional): The name prefix to add to variables.
    collections (optional): List of additional collections. (Placed in
      tf.GraphKeys.GLOBAL_VARIABLES already, so no need for that.)
    
      elif FLAGS.baseline_method is None:
    num_missing = tf.reduce_sum(missing)
    final_gen_objective += tf.reduce_sum(rewards) / (num_missing + eps)
    baselines = tf.zeros_like(rewards)
    critic_loss = None
    maintain_averages_op = None
    advantages = cumulative_rewards
    
      Returns:
    variable_mapping:  Dictionary with Key: ckpt_name, Value: model_varself.
  '''
  assert (FLAGS.discriminator_model == 'bidirectional_zaremba' or
          FLAGS.discriminator_model == 'bidirectional_vd')
  assert hparams.dis_num_layers == 2
    
    '''Simple bidirectional model definitions.'''
    
    for test in gettestcases():
    if METHOD == 'EURISTIC':
        try:
            webpage = compat_urllib_request.urlopen(test['url'], timeout=10).read()
        except Exception:
            print('\nFail: {0}'.format(test['name']))
            continue
    
    
if __name__ == '__main__':
    unittest.main()

    
        def _get_ip(self, protocol):
        if self._SKIP_SOCKS_TEST:
            return '127.0.0.1'
    
        :param id: id of post to get
    :param check_author: require the current user to be the author
    :return: the post with author information
    :raise 404: if a post with the given id doesn't exist
    :raise 403: if the current user isn't the author
    '''
    post = get_db().execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' WHERE p.id = ?',
        (id,)
    ).fetchone()
    
    
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
            #: as blueprints can be registered multiple times with the
        #: application and not everything wants to be registered
        #: multiple times on it, this attribute can be used to figure
        #: out if the blueprint was registered in the past already.
        self.first_registration = first_registration
    
        Implements signals based on blinker if available, otherwise
    falls silently back to a noop.
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
            assert meth is not None, 'Unimplemented method %r' % request.method
        return meth(*args, **kwargs)

    
    # Optional dataset entry keys
_IM_PREFIX = 'image_prefix'
_DEVKIT_DIR = 'devkit_directory'
_RAW_DIR = 'raw_dir'
    
    
# ---------------------------------------------------------------------------- #
# RPN and Faster R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
    import numpy as np
    
    
def _get_retinanet_blobs(
        foas, all_anchors, gt_boxes, gt_classes, im_width, im_height):
    total_anchors = all_anchors.shape[0]
    logger.debug('Getting mad blobs: im_height {} im_width: {}'.format(
        im_height, im_width))