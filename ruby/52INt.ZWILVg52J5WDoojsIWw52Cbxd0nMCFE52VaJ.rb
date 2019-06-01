
        
              it 'use custom executable' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              executable: 'custom_carthage'
            )
          end').runner.execute(:test)
    
    describe 'monkey patch of Array.shelljoin (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src https://api.mybank.com; default-src none; font-src https://cdn.mybank.net; frame-src self; img-src https://cdn.mybank.net; media-src https://cdn.mybank.net; object-src https://cdn.mybank.net; report-uri /my_amazing_csp_report_parser; sandbox allow-scripts; script-src https://cdn.mybank.net; style-src https://cdn.mybank.net')
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          # Returns the value of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the value of the hash element
      def value
        node_parts[1]
      end
    
          dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
          def preference_field_tag(name, value, options)
        case options[:type]
        when :integer
          text_field_tag(name, value, preference_field_options(options))
        when :boolean
          hidden_field_tag(name, 0, id: '#{name}_hidden') +
            check_box_tag(name, 1, value, preference_field_options(options))
        when :string
          text_field_tag(name, value, preference_field_options(options))
        when :password
          password_field_tag(name, value, preference_field_options(options))
        when :text
          text_area_tag(name, value, preference_field_options(options))
        else
          text_field_tag(name, value, preference_field_options(options))
        end
      end
    
          def link_to_clone(resource, options = {})
        options[:data] = { action: 'clone', 'original-title': Spree.t(:clone) }
        options[:class] = 'btn btn-primary btn-sm with-tip'
        options[:method] = :post
        options[:icon] = :clone
        button_link_to '', clone_object_url(resource), options
      end
    
              def order_token
            request.headers['X-Spree-Order-Token'] || params[:order_token]
          end
    
                log_state_changes if params[:state]
    
              def shipping_rates_service
            Spree::Api::Dependencies.storefront_checkout_get_shipping_rates_service.constantize
          end