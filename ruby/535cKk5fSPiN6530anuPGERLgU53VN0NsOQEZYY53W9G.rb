
        
        class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
      def test_file_share_delete
    Dir.mktmpdir(__method__.to_s) do |tmpdir|
      tmp = File.join(tmpdir, 'x')
      File.open(tmp, mode: IO::WRONLY | IO::CREAT | IO::BINARY | IO::SHARE_DELETE) do |f|
        assert_file.exist?(tmp)
        assert_nothing_raised do
          File.unlink(tmp)
        end
      end
      assert_file.not_exist?(tmp)
    end
  end
    
      def test_filter
    ENV['test'] = 'foo'
    h = ENV.filter {|k| IGNORE_CASE ? k.upcase == 'TEST' : k == 'test' }
    assert_equal(1, h.size)
    k = h.keys.first
    v = h.values.first
    if IGNORE_CASE
      assert_equal('TEST', k.upcase)
      assert_equal('FOO', v.upcase)
    else
      assert_equal('test', k)
      assert_equal('foo', v)
    end
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['',          [nil, nil, nil]],
      ['abcde',     [1684234849, nil, nil]],
      ['abcdefg',   [1684234849, nil, nil]],
      ['abcdefgh',  [1684234849, 1751606885, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      def self.critical_is_reset
    # Create another thread to verify that it can call Thread.critical=
    t = Thread.new do
      initial_critical = Thread.critical
      Thread.critical = true
      Thread.critical = false
      initial_critical == false && Thread.critical == false
    end
    v = t.value
    t.join
    v
  end
    
        t.join
  end
    
        10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
            def type_allowed?(type)
          @subject.send('#{@attachment_name}_content_type=', type)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_content_type'].blank?
        end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          lower_than_low? && higher_than_low? && lower_than_high? && higher_than_high?
        end
    
    module Paperclip
  require 'rails'
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end