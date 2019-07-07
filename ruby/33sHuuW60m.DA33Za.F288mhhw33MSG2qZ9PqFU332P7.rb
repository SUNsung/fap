
        
                action_completed(@program[:name], status: FastlaneCore::ActionCompletionStatus::SUCCESS)
        return return_value
      rescue Commander::Runner::InvalidCommandError => e
        # calling `abort` makes it likely that tests stop without failing, so
        # we'll disable that during tests.
        if FastlaneCore::Helper.test?
          raise e
        else
          abort('#{e}. Use --help for more information')
        end
      rescue Interrupt => e
        # We catch it so that the stack trace is hidden by default when using ctrl + c
        if FastlaneCore::Globals.verbose?
          raise e
        else
          action_completed(@program[:name], status: FastlaneCore::ActionCompletionStatus::INTERRUPTED, exception: e)
          abort('\nCancelled... use --verbose to show the stack trace')
        end
      rescue \
        OptionParser::InvalidOption,
        OptionParser::InvalidArgument,
        OptionParser::MissingArgument => e
        # calling `abort` makes it likely that tests stop without failing, so
        # we'll disable that during tests.
        if FastlaneCore::Helper.test?
          raise e
        else
          if self.active_command.name == 'help' && @default_command == :help # need to access directly via @
            # This is a special case, for example for pilot
            # when the user runs `fastlane pilot -u user@google.com`
            # This would be confusing, as the user probably wanted to use `pilot list`
            # or some other command. Because `-u` isn't available for the `pilot --help`
            # command it would show this very confusing error message otherwise
            abort('Please ensure to use one of the available commands (#{self.commands.keys.join(', ')})'.red)
          else
            # This would print something like
            #
            #   invalid option: -u
            #
            abort(e.to_s)
          end
        end
      rescue FastlaneCore::Interface::FastlaneCommonException => e # these are exceptions that we dont count as crashes
        display_user_error!(e, e.to_s)
      rescue FastlaneCore::Interface::FastlaneError => e # user_error!
        rescue_fastlane_error(e)
      rescue Errno::ENOENT => e
        rescue_file_error(e)
      rescue Faraday::SSLError, OpenSSL::SSL::SSLError => e # SSL issues are very common
        handle_ssl_error!(e)
      rescue Faraday::ConnectionFailed => e
        rescue_connection_failed_error(e)
      rescue => e # high chance this is actually FastlaneCore::Interface::FastlaneCrash, but can be anything else
        rescue_unknown_error(e)
      ensure
        FastlaneCore.session.finalize_session
      end
    end
    
          it 'handles the exclude_dirs parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle')
      end
    
          self.default_value
    end
  end
end

    
            it 'sets up metadata folder in fastlane folder' do
          expect(options[:metadata_path]).to eq('./fastlane/metadata')
        end
      end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
      it 'should run scheduled agents' do
    mock(Agent).run_schedule('every_1h')
    mock.instance_of(IO).puts('Queuing schedule for every_1h')
    @scheduler.send(:run_schedule, 'every_1h')
  end
    
      describe 'migrating an actual agent' do
    before do
      valid_params = {
                        'auth_token' => 'token',
                        'room_name' => 'test',
                        'room_name_path' => '',
                        'username' => 'Huginn',
                        'username_path' => '$.username',
                        'message' => 'Hello from Huginn!',
                        'message_path' => '$.message',
                        'notify' => false,
                        'notify_path' => '',
                        'color' => 'yellow',
                        'color_path' => '',
                      }
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
          spec['version'] = Bootstrap::VERSION
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
        <div id='rack'>
      <h3 id='env-info'>Rack ENV</h3>
      <table class='req'>
        <tr>
          <th>Variable</th>
          <th>Value</th>
        </tr>
         <% env.sort_by { |k, v| k.to_s }.each { |key, val| %>
         <tr>
           <td><%=h key %></td>
           <td class='code'><div><%=h val %></div></td>
         </tr>
         <% } %>
      </table>
      <div class='clear'></div>
    </div> <!-- /RACK ENV -->
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
      it 'should allow changing report only' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :report_uri => '/my_amazing_csp_report_parser', :report_only => true
      run DummyApp
    end
    
        it 'adds the correct Set-Cookie header' do
      get '/some/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'