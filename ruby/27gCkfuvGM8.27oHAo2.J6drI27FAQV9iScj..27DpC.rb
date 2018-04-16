
        
                # Require the adapter itself and give useful feedback about
        #   1. Missing adapter gems and
        #   2. Adapter gems' missing dependencies.
        path_to_adapter = 'action_cable/subscription_adapter/#{adapter}'
        begin
          require path_to_adapter
        rescue LoadError => e
          # We couldn't require the adapter itself. Raise an exception that
          # points out config typos and missing gems.
          if e.path == path_to_adapter
            # We can assume that a non-builtin adapter was specified, so it's
            # either misspelled or missing from Gemfile.
            raise e.class, 'Could not load the '#{adapter}' Action Cable pubsub adapter. Ensure that the adapter is spelled correctly in config/cable.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
        test 'middleware that is 'use'd is called as part of the Rack application' do
      result = @app.call(env_for('/'))
      assert_equal ['Hello World'], [].tap { |a| result[2].each { |x| a << x } }
      assert_equal 'Success', result[1]['Middleware-Test']
    end
    
      def test_parsing_json_doesnot_rescue_exception
    req = Class.new(ActionDispatch::Request) do
      def params_parsers
        { json: Proc.new { |data| raise Interrupt } }
      end
    
        # Helpers for creating and wrapping delivery behavior, used by DeliveryMethods.
    module ClassMethods
      # Provides a list of emails that have been delivered by Mail::TestMailer
      delegate :deliveries, :deliveries=, to: Mail::TestMailer
    
          private
        def file_name # :doc:
          @_file_name ||= super.gsub(/_mailer/i, '')
        end
    
              if %w(Events Sync).include?(type)
            name.prepend 'Backbone.'
          elsif type == 'History'
            name.prepend 'Backbone.history.'
          elsif name == 'extend'
            name.prepend '#{type}.'
          elsif name.start_with? 'constructor'
            name = type
          elsif type != 'Utility'
            name.prepend '#{type.downcase}.'
          end
    
            css('.function').each do |node|
          name = '#{node.at_css('.descname').content}()'
          id = node.at_css('dt[id]')['id']
          entries << [name, id]
        end
    
            css('.method-signature', 'pre').each do |node|
          node.name = 'pre'
          node.content = node.content.strip
          node['data-language'] = 'php'
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
    
    class TestEnv < Test::Unit::TestCase
  IGNORE_CASE = /bccwin|mswin|mingw/ =~ RUBY_PLATFORM
  PATH_ENV = 'PATH'
  INVALID_ENVVARS = [
    'foo\0bar',
    '\xa1\xa1'.force_encoding(Encoding::UTF_16LE),
    'foo'.force_encoding(Encoding::ISO_2022_JP),
  ]
    
    describe :string_unpack_Aa, shared: true do
  it 'decodes the number of bytes specified by the count modifier including NULL bytes' do
    'a\x00bc'.unpack(unpack_format(3)+unpack_format).should == ['a\x00b', 'c']
  end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
        export LANG=en_US.UTF-8
    DOC
  else
    STDERR.puts <<-DOC
    \e[33mWARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
            # Clones the template from the remote in the working directory using
        # the name of the Pod.
        #
        # @return [void]
        #
        def clone_template
          UI.section('Cloning `#{template_repo_url}` into `#{@name}`.') do
            git! ['clone', template_repo_url, @name]
          end
        end
    
          private
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
        # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end
    
      desc 'Published'
  task :published do
  end