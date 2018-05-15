
        
                def test_spec_name_with_inline_config
          spec = spec('adapter' => 'sqlite3')
          assert_equal 'primary', spec.name, 'should default to primary id'
        end
      end
    end
  end
end

    
      def test_parsing_json_doesnot_rescue_exception
    req = Class.new(ActionDispatch::Request) do
      def params_parsers
        { json: Proc.new { |data| raise Interrupt } }
      end
    
    require 'active_job'
    
          private
    
    class DefaultsDeliveryMethodsTest < ActiveSupport::TestCase
  test 'default smtp settings' do
    settings = { address:              'localhost',
                 port:                 25,
                 domain:               'localhost.localdomain',
                 user_name:            nil,
                 password:             nil,
                 authentication:       nil,
                 enable_starttls_auto: true }
    assert_equal settings, ActionMailer::Base.smtp_settings
  end
    
      def set_logger(logger)
    ActionMailer::Base.logger = logger
  end
    
      def test_getc_extended_file
    [nil, {:textmode=>true}, {:binmode=>true}].each do |mode|
      Tempfile.create('test-extended-file', mode) {|f|
        assert_nil(f.getc)
        f.print 'a'
        f.rewind
        assert_equal(?a, f.getc, 'mode = <#{mode}>')
      }
    end
  end
    
      def test_callcc_iter_level
    bug9105 = '[ruby-dev:47803] [Bug #9105]'
    h = @cls[1=>2, 3=>4]
    c = nil
    f = false
    h.each {callcc {|c2| c = c2}}
    unless f
      f = true
      c.call
    end
    assert_nothing_raised(RuntimeError, bug9105) do
      h.each {|i, j|
        h.delete(i);
        assert_not_equal(false, i, bug9105)
      }
    end
  end
    
      def test_s_new
    assert_nothing_raised {
      Set.new()
      Set.new(nil)
      Set.new([])
      Set.new([1,2])
      Set.new('a'..'c')
    }
    assert_raise(ArgumentError) {
      Set.new(false)
    }
    assert_raise(ArgumentError) {
      Set.new(1)
    }
    assert_raise(ArgumentError) {
      Set.new(1,2)
    }
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['',     [nil, nil, nil]],
      ['abc',  [25185, nil, nil]],
      ['abcd', [25185, 25699, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      it 'does not decode any items for directives exceeding the input string size' do
    '\xc2\x80'.unpack('UUUU').should == [0x80]
  end
    
      class SubclassX
    attr_reader :key
    def initialize(*)
      @key = :value
      super
    end
  end
end

    
      it 'raises an ArgumentError if not passed a block' do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow
  def follow
    f = Follow.last
    NotificationMailer.follow(f.target_account, Notification.find_by(activity: f))
  end
    
        # Returns the CSS for the media query.
    #
    # @return [String]
    def to_css
      css = ''
      css << resolved_modifier
      css << ' ' unless resolved_modifier.empty?
      css << resolved_type
      css << ' and ' unless resolved_type.empty? || expressions.empty?
      css << expressions.map do |e|
        # It's possible for there to be script nodes in Expressions even when
        # we're converting to CSS in the case where we parsed the document as
        # CSS originally (as in css_test.rb).
        e.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.to_sass : c.to_s}.join
      end.join(' and ')
      css
    end
    
      puts '== Installing dependencies =='
  system 'gem install bundler --conservative'
  system 'bundle check || bundle install'