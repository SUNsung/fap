
        
                key.revoke!
      end
    end
  end
end

    
          it 'prefers a custom version number over a boring version bump' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3', bump_type: 'major')
        end').runner.execute(:test)
    
      def test_cmd_symbol_after_keyword
    bug6347 = '[ruby-dev:45563]'
    assert_not_label(:foo, 'if true then not_label:foo end', bug6347)
    assert_not_label(:foo, 'if false; else not_label:foo end', bug6347)
    assert_not_label(:foo, 'begin not_label:foo end', bug6347)
    assert_not_label(:foo, 'begin ensure not_label:foo end', bug6347)
  end
    
      def do_with_enum(enum, &block) # :nodoc:
    if enum.respond_to?(:each_entry)
      enum.each_entry(&block) if block
    elsif enum.respond_to?(:each)
      enum.each(&block) if block
    else
      raise ArgumentError, 'value must be enumerable'
    end
  end
  private :do_with_enum
    
      def test_to_s
    t2000 = get_t2000
    assert_equal('2000-01-01 00:00:00 UTC', t2000.to_s)
    assert_equal(Encoding::US_ASCII, t2000.to_s.encoding)
    assert_kind_of(String, Time.at(946684800).getlocal.to_s)
    assert_equal(Time.at(946684800).getlocal.to_s, Time.at(946684800).to_s)
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['abc',                  [nil, nil, nil]],
      ['\x8f\xc2\xb5?abc',     [1.4199999570846558, nil, nil]],
      ['\x9a\x999@33\xb3?abc', [2.9000000953674316, 1.399999976158142, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
    describe :string_unpack_Aa, shared: true do
  it 'decodes the number of bytes specified by the count modifier including NULL bytes' do
    'a\x00bc'.unpack(unpack_format(3)+unpack_format).should == ['a\x00b', 'c']
  end
    
        if test_conf['database']&.present?
      ActiveRecord::Base.establish_connection(:test)
      yield
      ActiveRecord::Base.establish_connection(Rails.env.to_sym)
    end
  end
    
    def codepoints_to_unicode(codepoints)
  if codepoints.include?(' ')
    codepoints.split(' ').map(&:hex).pack('U*')
  else
    [codepoints.hex].pack('U')
  end
end
    
            sign_in user, scope: :user
      end
    
    if (/cygwin|mswin|mingw|bccwin|wince|emx/ =~ RUBY_PLATFORM) != nil
  puts '## Set the codepage to 65001 for Windows machines'
  `chcp 65001`
end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
      class ImageTag < Liquid::Tag
    @img = nil
    
          super
    end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end