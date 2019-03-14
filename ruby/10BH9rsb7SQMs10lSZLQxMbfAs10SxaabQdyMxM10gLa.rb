
        
              it 'works with single quote in rule name' do
        rule = 'CoveredSwitchStatementsDon'tNeedDefault'
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              enable_rules: [\'#{rule}\'],
              disable_rules: [\'#{rule}\']
            )
          end').runner.execute(:test)
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
      <form method='post' action='/msg'>
    <input type='text' name='msg'>
    <input type='submit' value='Add Message'>
  </form>
    
        class WithoutTimestamp < Pretty
      def call(severity, time, program_name, message)
        '#{::Process.pid} TID-#{Sidekiq::Logging.tid}#{context} #{severity}: #{message}\n'
      end
    end
    
          def inline?
        self.__test_mode == :inline
      end
    
        def match(request_method, path)
      case matcher
      when String
        {} if path == matcher
      else
        if path_match = path.match(matcher)
          Hash[path_match.names.map(&:to_sym).zip(path_match.captures)]
        end
      end
    end
  end
end
