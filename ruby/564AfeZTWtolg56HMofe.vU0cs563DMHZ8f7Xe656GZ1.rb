
        
        #
    
              # WebSockets requests will have a Connection: Upgrade header
          if parser.http_method != 'GET' || parser.upgrade?
            super
          elsif parser.request_url =~ %r!^\/livereload.js!
            headers = [
              'HTTP/1.1 200 OK',
              'Content-Type: application/javascript',
              'Content-Length: #{reload_size}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
    Then(/^the current directory will be a symlink to the release$/) do
  run_vagrant_command(exists?('e', TestApp.current_path))
end
    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
          def fetch_for(key, default, &block)
        block ? values.fetch(key, &block) : values.fetch(key, default)
      end
    
              it 'returns orders sorted by completed_at' do
            expect(json_response['data'].count).to eq Spree::Order.count
            expect(json_response['data'].pluck(:id)).to eq Spree::Order.select('*').order(completed_at: :asc).pluck(:id).map(&:to_s)
          end
        end
      end
    end
    
          it 'returns account data with included default billing address' do
        expect(json_response['included']).to    include(have_type('address'))
        expect(json_response['included'][0]).to eq(Spree::V2::Storefront::AddressSerializer.new(user.billing_address).as_json['data'])
      end
    end
    
            it 'completes an order' do
          expect(order.reload.state).to eq('complete')
          expect(order.completed_at).not_to be_nil
          expect(json_response['data']).to have_attribute(:state).with_value('complete')
        end
      end
    
          it_behaves_like 'returns 404 HTTP status'
    end
  end
end

    
    desc 'Creates a sandbox application for simulating the Spree code in a deployed Rails app'
task :sandbox do
  Bundler.with_clean_env do
    exec('lib/sandbox.sh')
  end
end

    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
    require 'paperclip/railtie' if defined?(Rails::Railtie)
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end