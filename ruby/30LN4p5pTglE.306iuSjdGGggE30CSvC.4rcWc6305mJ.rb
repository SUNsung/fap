
        
          def test_read_all_extended_file
    [nil, {:textmode=>true}, {:binmode=>true}].each do |mode|
      Tempfile.create('test-extended-file', mode) {|f|
        assert_nil(f.getc)
        f.print 'a'
        f.rewind
        assert_equal('a', f.read, 'mode = <#{mode}>')
      }
    end
  end
    
      def assert_invalid_env(msg = nil)
    all_assertions(msg) do |a|
      INVALID_ENVVARS.each do |v|
        a.for(v) do
          assert_raise(ArgumentError) {yield v}
        end
      end
    end
  end
    
      it 'decodes the remaining floats when passed the '*' modifier after another directive' do
    array = '\x9a\x99\xa9@33\x13A'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.300000190734863, 9.199999809265137]
  end
    
      it 'ignores spaces between directives' do
    'badc'.unpack(unpack_format(' ', 2)).should == [25185, 25699]
  end
end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
      it 'accepts requests with a changing Accept-Encoding header' do
    # this is tested because previously it led to clearing the session
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_ENCODING' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_ENCODING' => 'b'
    expect(session).not_to be_empty
  end