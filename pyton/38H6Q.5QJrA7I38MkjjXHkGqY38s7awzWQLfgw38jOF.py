
        
            # Look for > that is not surrounded by spaces.  Similar to the
    # above, we only trigger if both sides are missing spaces to avoid
    # false positives with shifts.
    match = Match(r'^(.*[^-\s>])>[^\s=>,]', line)
    if match:
      (_, _, start_pos) = ReverseCloseExpression(
          clean_lines, linenum, len(match.group(1)))
      if start_pos <= -1:
        error(filename, linenum, 'whitespace/operators', 3,
              'Missing spaces around >')
    
    import random
    
    *What does this example do?
To understand the implementation of this pattern in Python, it is
important to know that, in Python, instance attributes are stored in a
attribute dictionary called __dict__. Usually, each instance will have
its own dictionary, but the Borg pattern modifies this so that all
instances have the same dictionary.
In this example, the __shared_state attribute will be the dictionary
shared between all instances, and this is ensured by assigining
__shared_state to the __dict__ variable when initializing a new
instance (i.e., in the __init__ method). Other attributes are usually
added to the instance's attribute dictionary, but, since the attribute
dictionary itself is shared (which is __shared_state), all other
attributes will also be shared.
For this reason, when the attribute self.state is modified using
instance rm2, the value of self.state in instance rm1 also changes. The
same happens if self.state is modified using rm3, which is an
instance from a subclass.
Notice that even though they share attributes, the instances are not
the same, as seen by their ids.
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update, patch.object(
            cls.hex_obs, 'update'
        ) as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)