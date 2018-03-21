
        
        # puts '\nDone.'

    
        s = SortedSet.new(['one', 'two', 'three', 'four'])
    a = []
    ret = s.reject! { |o| a << o; false }
    assert_same(nil, ret)
    assert_equal(['four', 'one', 'three', 'two'], s.to_a)
    assert_equal(['four', 'one', 'three', 'two'], a)
  end
    
      it 'ignores NULL bytes between directives' do
    array = 'hgfedcbadcfehgba'.unpack(unpack_format('\000', 2))
    array.should == [7523094288207667809, 7233738012216484449]
  end
    
    describe :string_unpack_Aa, shared: true do
  it 'decodes the number of bytes specified by the count modifier including NULL bytes' do
    'a\x00bc'.unpack(unpack_format(3)+unpack_format).should == ['a\x00b', 'c']
  end
    
        it 'sets $! in outer ensure clause if inner ensure clause raises exception' do
      ThreadSpecs.join_dying_thread_with_outer_ensure(@method) { ScratchPad.record $! }
      ScratchPad.recorded.to_s.should == 'In dying thread'
    end
  end
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)