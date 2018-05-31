
        
        def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
          def key?(key)
        super(convert_key(key))
      end
    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
      class << self
    def [](*ary)        # :nodoc:
      new(ary)
    end
    
      def test_strftime
    t2000 = get_t2000
    t = Time.at(946684800).getlocal
    assert_equal('Sat', t2000.strftime('%a'))
    assert_equal('Saturday', t2000.strftime('%A'))
    assert_equal('Jan', t2000.strftime('%b'))
    assert_equal('January', t2000.strftime('%B'))
    assert_kind_of(String, t2000.strftime('%c'))
    assert_equal('01', t2000.strftime('%d'))
    assert_equal('00', t2000.strftime('%H'))
    assert_equal('12', t2000.strftime('%I'))
    assert_equal('001', t2000.strftime('%j'))
    assert_equal('01', t2000.strftime('%m'))
    assert_equal('00', t2000.strftime('%M'))
    assert_equal('AM', t2000.strftime('%p'))
    assert_equal('00', t2000.strftime('%S'))
    assert_equal('00', t2000.strftime('%U'))
    assert_equal('00', t2000.strftime('%W'))
    assert_equal('6', t2000.strftime('%w'))
    assert_equal('01/01/00', t2000.strftime('%x'))
    assert_equal('00:00:00', t2000.strftime('%X'))
    assert_equal('00', t2000.strftime('%y'))
    assert_equal('2000', t2000.strftime('%Y'))
    assert_equal('UTC', t2000.strftime('%Z'))
    assert_equal('%', t2000.strftime('%%'))
    assert_equal('0', t2000.strftime('%-S'))
    assert_equal('12:00:00 AM', t2000.strftime('%r'))
    assert_equal('Sat 2000-01-01T00:00:00', t2000.strftime('%3a %FT%T'))
    
      it 'decodes past whitespace bytes when passed the '*' modifier' do
    [ ['a b c',    ['a b c']],
      ['a\fb c',   ['a\fb c']],
      ['a\nb c',   ['a\nb c']],
      ['a\rb c',   ['a\rb c']],
      ['a\tb c',   ['a\tb c']],
      ['a\vb c',   ['a\vb c']],
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
        run.should be_true
  end
    
    def usage
  <<-EOS
Usage: list_login_items_for_app <path.app>
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
      it 'should not override the header if already set X-Content-Type-Options' do
    mock_app with_headers('X-Content-Type-Options' => 'sniff')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Content-Type-Options']).to eq('sniff')
  end
end

    
            def operator
          assignment_node = meta_assignment_node || @node
          assignment_node.loc.operator.source
        end
    
                  add_offense(condition)
            end
    
            # Construct annotated source string (like what we parse)
        #
        # Reconstruct a deterministic annotated source string. This is
        # useful for eliminating semantically irrelevant annotation
        # ordering differences.
        #
        # @example standardization
        #
        #     source1 = AnnotatedSource.parse(<<-RUBY)
        #     line1
        #     ^ Annotation 1
        #      ^^ Annotation 2
        #     RUBY
        #
        #     source2 = AnnotatedSource.parse(<<-RUBY)
        #     line1
        #      ^^ Annotation 2
        #     ^ Annotation 1
        #     RUBY
        #
        #     source1.to_s == source2.to_s # => true
        #
        # @return [String]
        def to_s
          reconstructed = lines.dup