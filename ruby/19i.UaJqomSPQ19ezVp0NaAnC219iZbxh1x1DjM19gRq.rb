
        
          # Use a different logger for distributed setups.
  # require 'syslog/logger'
  # config.logger = ActiveSupport::TaggedLogging.new(Syslog::Logger.new 'app-name')
    
      factory :noroot_project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/noroot.yml') }
    end
    
            expect(project.startup_pane).to eq('sample:0.4')
      end
    end
  end
    
            options = {
          args: project_options[:args],
          custom_name: project_options[:custom_name],
          force_attach: attach,
          force_detach: detach,
          name: project_options[:name],
          project_config: project_options[:project_config]
        }
    
      before { instance.extend Tmuxinator::WemuxSupport }
    
      expansion(:inspection) {
    {
      :inspected => o.inspected == 1 ? true : false,
      :spam => o.spam == 1 ? true : false,
      :spam_score => o.spam_score.to_f,
      :threat => o.threat == 1 ? true : false,
      :threat_details => o.threat_details
    }
  }
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @address_endpoint = @server.address_endpoints.find_by_uuid!(params[:id]) }
    
      def create
    @smtp_endpoint = @server.smtp_endpoints.build(safe_params)
    if @smtp_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :smtp_endpoints]]
    else
      render_form_errors 'new', @smtp_endpoint
    end
  end