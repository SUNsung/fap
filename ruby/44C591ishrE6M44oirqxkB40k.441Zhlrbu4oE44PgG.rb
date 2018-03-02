
        
              {
          author: last_git_commit_formatted_with('%an'),
          message: last_git_commit_formatted_with('%B'),
          commit_hash: last_git_commit_formatted_with('%H'),
          abbreviated_commit_hash: last_git_commit_formatted_with('%h')
      }
    end
    
          context('when the tag exists') do
        before do
          allow(Fastlane::Actions).to receive(:sh).with('git rev-parse -q --verify refs/tags/1.2.0 || true', { log: nil }).and_return('41215512353215321')
        end
    
          it 'prefers a custom version number over a boring version bump' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3', bump_type: 'major')
        end').runner.execute(:test)
    
    
    {      delta = 1
      stat = File.stat(path)
      assert_in_delta tb,   stat.birthtime.to_f, delta
      assert_in_delta t0+2, stat.mtime.to_f, delta
      if stat.birthtime != stat.ctime
        assert_in_delta t0+4, stat.ctime.to_f, delta
      end
      if /mswin|mingw/ !~ RUBY_PLATFORM && !Bug::File::Fs.noatime?(path)
        # Windows delays updating atime
        assert_in_delta t0+6, stat.atime.to_f, delta
      end
    }
  rescue NotImplementedError
  end
    
      before :each do
    @object = { 1 => 2, 3 => 4, 5 => 6 }
  end
  it_should_behave_like :enumeratorized_with_origin_size
end
    
      def test_each_pair
    ENV.each_pair do |k, v|
      assert_kind_of(String, k)
      assert_kind_of(String, v)
    end
  end
    
        ('z' * 24).to_i(36).should == 22452257707354557240087211123792674815
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
          def html?(headers)
        return false unless header = headers.detect { |k,v| k.downcase == 'content-type' }
        options[:html_types].include? header.last[/^\w+\/\w+/]
      end
    end
  end
end

    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
      public
  def close; end;
    
      def fifty_percent
    [1, (maximum * 0.5)].max.floor
  end