
        
          Parameters:
    forest: If true, solve for a spanning forest instead of a spanning tree.
    loss: The loss function for training.  Select from
      softmax: Default unstructured softmax (prediction is still structured).
      m3n: Max-Margin Markov Networks loss.
    crf_max_dynamic_range: Max dynamic range for the log partition function.
    
          # For the first tree, the gold and scores agree on one arc (that index 1
      # is a root), and for the second tree, the gold and scores agree on none
      # of the arcs.  Therefore, we expect +1 and +3 for the first and second
      # trees in the M3N loss.
      gold = tf.constant([0, 1, -1, 0, 0, 1], tf.int32)
      first_gold_score = 0.5 + 2.0
      second_gold_score = 2.5 + 2.5 + 2.5
      first_tree_correct = 1
      second_tree_correct = 0
      first_tree_loss = 2 * 2.0 + 2 - first_tree_correct - first_gold_score
      second_tree_loss = 3 * 4.0 + 3 - second_tree_correct - second_gold_score
    
      Args:
    function: Function to apply using captured variables.  The function should
        take one argument, its enclosing variable scope.
    scope_name: Variable scope in which the |function| is evaluated.  Must match
        the scope passed to capture_variables().
    component: Component from which to extract captured variables.
    
    
if __name__ == '__main__':
  tf.app.run()

    
      # Convert to char-based corpora, if requested.
  if config['convert_to_char_corpora']:
    # NB: Do not convert the |gold_tune_corpus|, which should remain word-based
    # for segmentation evaluation purposes.
    train_corpus = _convert_to_char_corpus(train_corpus)
    tune_corpus = _convert_to_char_corpus(tune_corpus)
    
    from syntaxnet.ops import gen_parser_ops
from syntaxnet.util import check
    
        parts[-1] += 1
    return '.'.join(map(str, parts))
    
    
def test_add_template_filter(app):
    def my_reverse(s):
        return s[::-1]