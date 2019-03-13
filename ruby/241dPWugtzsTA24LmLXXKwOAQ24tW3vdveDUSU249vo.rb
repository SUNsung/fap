
        
            def rescue_connection_failed_error(e)
      if e.message.include?('Connection reset by peer - SSL_connect')
        handle_tls_error!(e)
      else
        handle_unknown_error!(e)
      end
    end
    
            expect(result).to include(''fastlane/spec/fixtures/oclint/src/AppDelegate.m'')
      end
    
    # Here be helper
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
        def empty?
      @entries.empty?
    end
    
        def root_page?
      subpath.blank? || subpath == '/' || subpath == root_path
    end
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
            css('img[style]').each do |node|
          node['align'] ||= node['style'][/float:\s*(left|right)/, 1]
          node['style'] = node['style'].split(';').map(&:strip).select { |s| s =~ /\Awidth|height/ }.join(';')
        end
    
      def prev_page
    account_outbox_url(@account, page: true, min_id: @statuses.first.id) unless @statuses.empty?
  end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      private
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      def request_locale
    preferred_locale || compatible_locale
  end
    
      included do
    before_action :set_rate_limit_headers, if: :rate_limited_request?
  end
    
              format('%#o', 0).should == '0'
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end

    
          attr_reader :key, :default, :options
    
          def with(properties)
        properties.each { |key, value| add_property(key, value) }
        self
      end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
          def link_to_clone(resource, options = {})
        options[:data] = { action: 'clone', 'original-title': Spree.t(:clone) }
        options[:class] = 'btn btn-primary btn-sm with-tip'
        options[:method] = :post
        options[:icon] = :clone
        button_link_to '', clone_object_url(resource), options
      end
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end