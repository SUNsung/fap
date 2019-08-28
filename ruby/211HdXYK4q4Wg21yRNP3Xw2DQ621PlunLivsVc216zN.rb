
        
              context '#run_workers' do
        it 'runs all the workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
        end
    
      describe 'helpers' do
    it 'should generate a correct request options hash' do
      expect(@checker.send(:request_options)).to eq({headers: {'User-Agent' => 'Huginn - https://github.com/huginn/huginn', 'Authorization' => 'Bearer '1234token''}})
    end
    
          def handle_start_point_response(endpoint)
        _status, header, response = endpoint.call(request.env)
        if response.redirect?
          redirect_to header['Location']
        else
          save_params_and_render_consent_form(endpoint)
        end
      end
    
          def find
        client = Api::OpenidConnect::OAuthApplication.find_by(client_name: params[:client_name])
        if client
          render json: {client_id: client.client_id}
        else
          render json: {error: 'Client with name #{params[:client_name]} does not exist'}
        end
      end
    
    class HomeController < ApplicationController
  def show
    partial_dir = Rails.root.join('app', 'views', 'home')
    if user_signed_in?
      redirect_to stream_path
    elsif request.format == :mobile
      if partial_dir.join('_show.mobile.haml').exist? ||
         partial_dir.join('_show.mobile.erb').exist? ||
         partial_dir.join('_show.haml').exist?
        render :show
      else
        redirect_to user_session_path
      end
    elsif partial_dir.join('_show.html.haml').exist? ||
          partial_dir.join('_show.html.erb').exist? ||
          partial_dir.join('_show.haml').exist?
      render :show
    elsif Role.admins.any?
      render :default
    else
      redirect_to podmin_path
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
             get '/?:filter?' do
           selected_fields = extract_fields(params['filter'].to_s.strip)
           values = node.all(selected_fields)
    
            private
        def os_payload
          @stats.os
        end
    
        def format_jvm_stats(stats)
      result = stats.extract_metrics([:jvm], :uptime_in_millis)
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.win_platform?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.win_platform?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.win_platform?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.win_platform?
    
    
  SETTINGS.on_post_process do |settings|
    # If the data path is overridden but the queue path isn't recompute the queue path
    # We need to do this at this stage because of the weird execution order
    # our monkey-patched Clamp follows
    if settings.set?('path.data')
      if !settings.set?('path.queue')
        settings.set_value('path.queue', ::File.join(settings.get('path.data'), 'queue'))
      end
      if !settings.set?('path.dead_letter_queue')
        settings.set_value('path.dead_letter_queue', ::File.join(settings.get('path.data'), 'dead_letter_queue'))
      end
    end
  end
    
      class PluginSection < Node
    def expr
      recursive_select(Branch, Plugin).map(&:expr)
    end
  end
    
      validates :domain, :presence => true, :uniqueness => true
    
      def safe_params
    params.require(:address_endpoint).permit(:address)
  end
    
      private
    
        if @domain.save
      if @domain.verified?
        redirect_to_with_json [:setup, organization, @server, @domain]
      else
        redirect_to_with_json [:verify, organization, @server, @domain]
      end
    else
      render_form_errors 'new', @domain
    end
  end
    
      def new
    @ip_pool_rule = @server ? @server.ip_pool_rules.build : organization.ip_pool_rules.build
  end
    
      def update
    @organization_obj = current_user.organizations_scope.find(organization.id)
    if @organization_obj.update(params.require(:organization).permit(:name, :time_zone))
      redirect_to_with_json organization_settings_path(@organization_obj), :notice => 'Settings for #{@organization_obj.name} have been saved successfully.'
    else
      render_form_errors 'edit', @organization_obj
    end
  end
    
      def create
    @smtp_endpoint = @server.smtp_endpoints.build(safe_params)
    if @smtp_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :smtp_endpoints]]
    else
      render_form_errors 'new', @smtp_endpoint
    end
  end
    
      def edit
    @user = User.find(current_user.id)
  end
    
      def make_owner
    if @user.is_a?(User)
      organization.make_owner(@user)
      redirect_to_with_json [organization, :users], :notice => '#{@user.name} is now the owner of this organization.'
    else
      raise Postal::Error, 'User must be a User not a UserInvite to make owner'
    end
  end
    
      def update
    if @webhook.update(safe_params)
      redirect_to_with_json [organization, @server, :webhooks]
    else
      render_form_errors 'edit', @webhook
    end
  end