
        
        import logging
import sys
    
        def get_source(self, environment, template):
        if self.app.config['EXPLAIN_TEMPLATE_LOADING']:
            return self._get_source_explained(environment, template)
        return self._get_source_fast(environment, template)
    
                    if change_info:
                    break
    
        Test that certain behavior of flask can be customized by
    subclasses.
    
    
def test_add_template_test_with_name(app):
    def is_boolean(value):
        return isinstance(value, bool)
    
      Returns:
    Python dictionary holding XML contents.
  '''
  if not xml:
    return {xml.tag: xml.text}
  result = {}
  for child in xml:
    child_result = recursive_parse_xml_to_dict(child)
    if child.tag != 'object':
      result[child.tag] = child_result[child.tag]
    else:
      if child.tag not in result:
        result[child.tag] = []
      result[child.tag].append(child_result[child.tag])
  return {xml.tag: result}
    
        self._kernel_shapes = []
    for i, width in enumerate(self._widths):
      if self._activation == 'glu' and i in self._activation_layers:
        self._kernel_shapes.append(
            [width, width, self._depths[i], 2 * self._depths[i + 1]])
      else:
        self._kernel_shapes.append(
            [width, width, self._depths[i], self._depths[i + 1]])
    
          # Just check a few items for now, hopefully that's sufficient to ensure
      # the permutation is okay.
      self.assertEqual(matrix[0, 0, 0], actual_permuted[0, 0, 0])
      self.assertEqual(matrix[0, 0, 1], actual_permuted[0, 0, 1])
      self.assertEqual(matrix[1, 1, 16], actual_permuted[1, 1, 16])
      self.assertEqual(matrix[2, 0, 4], actual_permuted[2, 0, 8])
      self.assertEqual(matrix[2, 0, 5], actual_permuted[2, 0, 9])
      self.assertEqual(matrix[2, 1, 8], actual_permuted[2, 1, 4])
      self.assertEqual(matrix[2, 1, 8 + 16], actual_permuted[2, 1, 4 + 16])
    
    import os
import tensorflow as tf
    
        Parameters used:
      hidden_layer_sizes: Comma-delimited number of hidden units for each layer.
      input_dropout_rate (-1.0): Input dropout rate for each layer.  If < 0.0,
          use the global |dropout_rate| hyperparameter.
      recurrent_dropout_rate (0.8): Recurrent dropout rate.  If < 0.0, use the
          global |recurrent_dropout_rate| hyperparameter.
      layer_norm (True): Whether or not to use layer norm.
    
    py_binary(
    name = 'segmenter_trainer',
    srcs = ['segmenter_trainer.py'],
    deps = [
        '//dragnn/core:dragnn_bulk_ops',
        '//dragnn/core:dragnn_ops',
        '//dragnn/protos:spec_pb2_py',
        '//dragnn/python:evaluation',
        '//dragnn/python:graph_builder',
        '//dragnn/python:sentence_io',
        '//dragnn/python:spec_builder',
        '//dragnn/python:trainer_lib',
        '//syntaxnet:parser_ops',
        '@absl_py//absl/flags',
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
        def __init__(self):
        Resource.__init__(self)
        self.concurrent = 0
        self.tail = deque(maxlen=100)
        self._reset_stats()
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
        return config

    
                note = None
            buyer = c.user
            if c.user.name.lower() in g.live_config['proxy_gilding_accounts']:
                note = 'proxy-%s' % c.user.name
                if proxying_for:
                    try:
                        buyer = Account._by_name(proxying_for)
                    except NotFound:
                        pass
    
        @require_oauth2_scope('mysubreddits')
    @validate(
        VUser(),
    )
    @api_doc(
        section=api_section.account,
        uri='/api/v1/me/karma',
    )
    def GET_karma(self):
        '''Return a breakdown of subreddit karma.'''
        karmas = c.oauth_user.all_karmas(include_old=False)
        resp = KarmaListJsonTemplate().render(karmas)
        return self.api_wrapper(resp.finalize())