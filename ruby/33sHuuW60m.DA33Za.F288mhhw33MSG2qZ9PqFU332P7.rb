
        
                assert_predicate(x, :autoclose?)
        assert_equal Encoding::ASCII_8BIT, x.external_encoding
        x.write 'hello'
    
      # Classifies the set by the return value of the given block and
  # returns a hash of {value => set of elements} pairs.  The block is
  # called once for each element of the set, passing the element as
  # parameter.
  #
  #   require 'set'
  #   files = Set.new(Dir.glob('*.rb'))
  #   hash = files.classify { |f| File.mtime(f).year }
  #   hash       #=> {2000=>#<Set: {'a.rb', 'b.rb'}>,
  #              #    2001=>#<Set: {'c.rb', 'd.rb', 'e.rb'}>,
  #              #    2002=>#<Set: {'f.rb'}>}
  #
  # Returns an enumerator if no block is given.
  def classify # :yields: o
    block_given? or return enum_for(__method__) { size }
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['\xff\x00\xff\x00\xff\x00\xff',  [nil, nil, nil]],
      ['\xb8\x1e\x85\xebQ\xb8\xf6?abc', [1.42, nil, nil]],
      ['333333\x07@ffffff\xf6?abcd',    [2.9, 1.4, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
      context 'with redirect reaction' do
    before(:each) do
      mock_app do
        use Rack::Protection::CookieTossing, :reaction => :redirect
        run DummyApp
      end
    end
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('ALLOW-FROM foo')
  end
    
      it 'denies requests with a changing Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'b'
    expect(session).to be_empty
  end
    
        expect(get('/').headers['X-Content-Type-Options']).to be_nil
  end
    
            def expected_attachment
          'Expected #{@attachment_name}:\n'
        end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'margin-top: 11px; ' +
                'margin-right: 12px; ' +
                'margin-left: 13px;'
      bad_rule = 'margin-bottom: null;'
    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      rule = 'padding: 7px 8px 9px 10px'
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'