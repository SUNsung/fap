
        
                @path = File.expand_path(path)
        podspec_content = File.read(path)
    
                editor = editor(screenshot)
    
          UI.success('Successfully submitted the app for review!')
    end
    
            return ['-destination '#{value}'']
      end
    
        def handle_results(tests_exit_status)
      result = TestResultParser.new.parse_result(test_results)
      SlackPoster.new.run(result)
    
            app.tunes_all_build_trains(platform: platform).each do |train|
          message = []
          message << 'Found train (version): #{train.version_string}'
          message << ', comparing to supplied version: #{version}' if version
          UI.verbose(message.join(' '))
    
          def self.find_api_token(params)
        return if params[:gsp_path]
        unless params[:api_token].to_s.length > 0
          Dir['./**/Info.plist'].each do |current|
            result = Actions::GetInfoPlistValueAction.run(path: current, key: 'Fabric')
            next unless result
            next unless result.kind_of?(Hash)
            params[:api_token] ||= result['APIKey']
            UI.verbose('found an APIKey in #{current}')
          end
        end
      end
    
          def self.get_version_number!(plist_file)
        plist = Xcodeproj::Plist.read_from_path(plist_file)
        UI.user_error!('Unable to read plist: #{plist_file}') unless plist
    
      context '#in_use?' do
    let(:index) { [] }
    
          iso_env.box3('base', '1.0', :foo, vagrantfile: <<-VF)
      Vagrant.configure('2') do |config|
        config.ssh.port = 123
      end
      VF
    
            # Filters triggers to be fired based on configured restraints
        #
        # @param [Array] triggers An array of triggers to be filtered
        # @param [String] guest_name The name of the current guest
        # @param [Symbol] type The type of trigger (:command or :type)
        # @return [Array] The filtered array of triggers
        def filter_triggers(triggers, guest_name, type)
          # look for only_on trigger constraint and if it doesn't match guest
          # name, throw it away also be sure to preserve order
          filter = triggers.dup
    
          # Load dependencies into a request set for resolution
      request_set = Gem::RequestSet.new(*plugin_deps)
      # Never allow dependencies to be remotely satisfied during cleaning
      request_set.remote = false
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def backtrace_pattern
      loc = Rake.application.find_rakefile_location
      return unless loc
    
          def warn_set_scm_is_deprecated
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure your project is compatible with future versions of Capistrano,
remove the :scm setting and instead add these lines to your Capfile after
`require 'capistrano/deploy'`:
    
          def untrusted_keys
        keys - @trusted_keys
      end
    
      # escape unicode
  content.gsub!(/./) { |c| c.bytesize > 1 ? '\\u{#{c.codepoints.first.to_s(16)}}' : c }
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end

    
          alias react deny
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
          def gateway_error(exception)
        @order.errors.add(:base, exception.message)
        invalid_resource!(@order)
      end
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def show
          respond_with(@payment)
        end
    
        it 'returns nil if an except is provided' do
      valid_article = create(:article, tags: 'explainlikeimfive')
      expect(described_class.new(valid_article, 'explainlikeimfive').tag).to eq(nil)
    end
    
          it 'flashes an error message' do
        post '/users/api_secrets', params: { api_secret: invalid_params }
        expect(flash[:error]).to be_truthy
        expect(flash[:notice]).to be_nil
      end
    end
  end
end

    
          it 'renders to appropriate page if user changes username twice and go to middle username' do
        user.update(username: 'new_hotness_#{rand(10_000)}')
        middle_username = user.username
        user.update(username: 'new_new_username_#{rand(10_000)}')
        get '/#{middle_username}/#{article.slug}'
        expect(response.body).to redirect_to('/#{user.username}/#{article.slug}')
      end
    end
    
        it 'returns unauthorized if the user is not the author' do
      second_user = create(:user)
      article = create(:article, user: second_user)
      expect { get '#{article.path}/manage' }.to raise_error(Pundit::NotAuthorizedError)
    end
  end
    
      private