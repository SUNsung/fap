
        
            it 'mimics a sed conditional by comparing an exclusive-end range with $.' do
      ruby_exe(nil, args: (@script % '2...3')).should == '2\n3\n'
      ruby_exe(nil, args: (@script % '2...2')).should == '2\n3\n4\n5\n'
    end
  end
end

    
      it 'returns nil if then-body is empty, expression is true and else part is present' do
    if true
    else
      456
    end.should == nil
  end
    
      it 'throws an exception for a wrong type' do
    a = @s.typed_wrap_struct(1024)
    lambda { @s.typed_get_struct_other(a) }.should raise_error(TypeError)
  end
    
      it 'adds the directory at the front of $LOAD_PATH' do
    dir = tmp('rubylib/incl_front')
    ENV['RUBYLIB'] = @pre + dir
    paths = ruby_exe('puts $LOAD_PATH').lines.map(&:chomp)
    if PlatformGuard.implementation? :ruby
      # In a MRI checkout, $PWD and some extra -I entries end up as
      # the first entries in $LOAD_PATH. So just assert that it's not last.
      idx = paths.index(dir)
      idx.should < paths.size-1
    else
      paths[0].should == dir
    end
  end
    
      ##
  # Adds +name+ with permissions +mode+ to the tar, yielding +io+ for writing
  # the file.  The +digest_algorithm+ is written to a read-only +name+.sum
  # file following the given file contents containing the digest name and
  # hexdigest separated by a tab.
  #
  # The created digest object is returned.
    
        dir = File.join Gem.user_home, '.gem', 'trust'
    
        fetcher = util_fuck_with_fetcher a1_data
    
      def test_initialize_proxy
    proxy_uri = 'http://proxy.example.com'
    
    class TestFile < Test::Unit::TestCase
    
        assert_equal([1,2,3], ary.sort)
  end
    
      it 'decodes the number of floats requested by the count modifier' do
    array = '@9\x99\x9a?\xb333A\x0333'.unpack(unpack_format(3))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
      def weekly_user_stats
    @created_users_by_week = Hash.new{ |h,k| h[k] = [] }
    @created_users = User.where('username IS NOT NULL and created_at IS NOT NULL')
    @created_users.find_each do |u|
      week = u.created_at.beginning_of_week.strftime('%Y-%m-%d')
      @created_users_by_week[week] << u.username
    end