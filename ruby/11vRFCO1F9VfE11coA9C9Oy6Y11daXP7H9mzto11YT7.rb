
        
            def set_error(platform, block)
      unless error_blocks[platform].nil?
        UI.error('You defined multiple `error` blocks in your `Fastfile`. The last one being set will be used.')
      end
      error_blocks[platform] = block
    end
    
          begin
        if xcode_outdated
          # We have to raise that error within this `begin` block to show a nice user error without a stack trace
          FastlaneCore::UI.user_error!('fastlane requires a minimum version of Xcode #{Fastlane::MINIMUM_XCODE_RELEASE}, please upgrade and make sure to use `sudo xcode-select -s /Applications/Xcode.app`')
        end
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'foo.bar')
          end').runner.execute(:test)
        end
      end
    
          context 'when specify strict option' do
        it 'adds strict option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true
            )
          end').runner.execute(:test)
    
          it 'yields command output' do
        expect_command('ls', '-la', exitstatus: 1, output: 'Heeeelp! Something went wrong.')
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to eq('Heeeelp! Something went wrong.')
        end
      end
    
      if FastlaneCore::CommandExecutor.which('grep')
    if FastlaneCore::Helper.windows?
      compare_string = simulate_windows_shell_unwrapping(compare_string)
    else
      compare_string = simulate_normal_shell_unwrapping(compare_string)
    end
    compare_command = 'grep 'foo' #{escaped}'
    expected_compare_error = 'grep: ' + compare_string + ': No such file or directory'
  elsif FastlaneCore::CommandExecutor.which('find')
    compare_string = simulate_normal_shell_unwrapping(compare_string)
    compare_string = compare_string.upcase
    compare_command = 'find \'foo\' #{escaped}'
    expected_compare_error = 'File not found - ' + compare_string
  end
    
          sh <<-SH
        git commit --allow-empty -a -m '#{source_version} release'  &&
        git tag -s v#{source_version} -m '#{source_version} release'  &&
        git push && (git push origin || true) &&
        git push --tags && (git push origin --tags || true)
      SH
    end
    
      <script type='text/javascript'>
  //<!--
  function toggle(id) {
    var pre  = document.getElementById('pre-' + id);
    var post = document.getElementById('post-' + id);
    var context = document.getElementById('context-' + id);
    }
    
            safe?(env) ||
          valid_token?(session, env['HTTP_X_CSRF_TOKEN']) ||
          valid_token?(session, Request.new(env).params[options[:authenticity_param]]) ||
          ( options[:allow_if] && options[:allow_if].call(env) )
      end
    
            DIRECTIVES.each do |d|
          if options.key?(d)
            directives << '#{d.to_s.sub(/_/, '-')} #{options[d]}'
          end
        end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end
    
          def retrieve
        map(&:make_new)
      end
    
          # Clear all queued jobs across all workers
      def clear_all
        Queues.clear_all
      end
    
          def enable(*opts)
        opts.each {|key| set(key, true) }
      end
    
          erb(content, options)
    end