        def test_url_host_no_db
          spec = resolve 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
      test 'authentication request with tab in header' do
    @request.env['HTTP_AUTHORIZATION'] = 'Token\ttoken=\'lifo\''
    get :index
    
      def test_use_json_with_empty_request
    with_test_route_set do
      assert_nothing_raised { post '/', headers: { 'CONTENT_TYPE' => 'application/json' } }
      assert_equal '', @controller.response.body
    end
  end
    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
          module ClassMethods
        def tests(mailer)
          case mailer
          when String, Symbol
            self._mailer_class = mailer.to_s.camelize.constantize
          when Module
            self._mailer_class = mailer
          else
            raise NonInferrableMailerError.new(mailer)
          end
        end
    
      class TestMailer < ActionMailer::Base
    def receive(mail)
      # Do nothing
    end
  end
    
      def expand_deps
    formula.recursive_dependencies do |dependent, dep|
      build = effective_build_options_for(dependent)
      if (dep.optional? || dep.recommended?) && build.without?(dep)
        Dependency.prune
      elsif dep.build? && dependent != formula
        Dependency.prune
      elsif dep.build?
        Dependency.keep_but_prune_recursive_deps
      end
    end
  end
    
      # @private
  def used_options
    @options & @args
  end
    
        def self.cleanup_formula(formula)
      formula.eligible_kegs_for_cleanup.each do |keg|
        cleanup_path(keg) { keg.uninstall }
      end
    end
    
        if ARGV.include?('--pinned') || ARGV.include?('--versions')
      filtered_list
    elsif ARGV.named.empty?
      if ARGV.include? '--full-name'
        full_names = Formula.installed.map(&:full_name).sort do |a, b|
          if a.include?('/') && !b.include?('/')
            1
          elsif !a.include?('/') && b.include?('/')
            -1
          else
            a <=> b
          end
        end
        puts_columns full_names
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif ARGV.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
      def self.bottle_sha1(*)
  end
    
    # See chcase for an example
class ScriptFileFormula < Formula
  def install
    bin.install Dir['*']
  end
end
    
      def test_symbol_hash_random
    assert_hash_random(:-)
    assert_hash_random(:foo)
    assert_hash_random('dsym_#{self.object_id.to_s(16)}_#{Time.now.to_i.to_s(16)}'.to_sym)
  end
    
      it 'ignores NULL bytes between directives' do
    array = '\x9a\x999@33\xb3?'.unpack(unpack_format('\000', 2))
    array.should == [2.9000000953674316, 1.399999976158142]
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['',          [nil, nil, nil]],
      ['abcde',     [1684234849, nil, nil]],
      ['abcdefg',   [1684234849, nil, nil]],
      ['abcdefgh',  [1684234849, 1751606885, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
        10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep1.should == false # t should be blocked on the first sleep
    t.send(@method)
    
            time.sec.should == 60
        time.min.should == 59
        time.hour.should == 23
        time.day.should == 30
        time.month.should == 6
      end
    end
  end
    
    lib_path = root.join('lib').to_path
    
                inp.attributes.keys.each do |ikey|
              if (ikey.downcase == 'value')
                inp[ikey] = ''
                next
              end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 110 and pkt.tcp_dport != 110)
    s = find_session((pkt.tcp_sport == 110) ? get_session_src(pkt) : get_session_dst(pkt))
    
    class Source < Template
  attr_accessor :__CAL
  attr_accessor :__NR_execve
  attr_accessor :__NR_getpeername
  attr_accessor :__NR_accept
  attr_accessor :__NR_listen
  attr_accessor :__NR_bind
  attr_accessor :__NR_socket
  attr_accessor :__NR_connect
  attr_accessor :__NR_close
  attr_accessor :__NR_kfcntl
  attr_accessor :__cal
  attr_accessor :_cal
  attr_accessor :cal
  attr_accessor :ver