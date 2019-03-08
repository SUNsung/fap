
        
            def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
      private
    
        # Mobile devices do not support regular notifications, so we enable push notifications by default
    alerts_enabled = active_session.detection.device.mobile? || active_session.detection.device.tablet?
    
    # Include LoggerSilence from ActiveSupport. This is needed to silent assets
# requests with `config.assets.quiet`, because the default silence method of
# the logging gem is no-op. See: https://github.com/TwP/logging/issues/11
Logging::Logger.send :alias_method, :local_level, :level
Logging::Logger.send :alias_method, :local_level=, :level=
Logging::Logger.send :include, LoggerSilence

    
          get :index, params: {a_id: @aspect.id, page: '1'}, format: :json
      save_fixture(response.body, 'aspects_manage_contacts_json')
    end
    
        it 'does redirect if there are no invites available with this code' do
      code = InvitationCode.create(user: bob)
      code.update_attributes(count: 0)
    
      gem 'danger'
end
    
    #{stack}
#{executable_path}
### Plugins
    
              <% end %>
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end