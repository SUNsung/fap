
        
                css('.openParens').each do |node|
          node.parent.name = 'pre'
          node.parent.content = node.parent.css('code, pre').map(&:content).join('\n')
        end
    
            css('.nav-index-section').each do |node|
          node.content = node.content
        end
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
      private
    
      def update
    if subscription.verify(body, request.headers['HTTP_X_HUB_SIGNATURE'])
      ProcessingWorker.perform_async(@account.id, body.force_encoding('UTF-8'))
    end
    
        @web_subscription.update!(data: data_params)
    
      Devise.omniauth_configs.each_key do |provider|
    provides_callback_for provider
  end
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
    World(RemoteCommandHelpers)

    
            # Note that `scm_plugin_installed?` comes from Capistrano::DSL
        if scm_plugin_installed?
          delete(:scm)
          return
        end
    
            if callable.is_a?(Question)
          ValidatedQuestion.new(validation_callback)
        else
          validation_callback
        end
      end
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
    class LogStash::PluginManager::Update < LogStash::PluginManager::Command
  REJECTED_OPTIONS = [:path, :git, :github]
  # These are local gems used by LS and needs to be filtered out of other plugin gems
  NON_PLUGIN_LOCAL_GEMS = ['logstash-core', 'logstash-core-plugin-api']
    
    def attach_attachment(name, definition = nil)
  snippet = 'has_attached_file :#{name}'
  if definition
    snippet += ', \n'
    snippet += definition
  end
  snippet += '\ndo_not_validate_attachment_file_type :#{name}\n'
  cd('.') do
    transform_file('app/models/user.rb') do |content|
      content.sub(/end\Z/, '#{snippet}\nend')
    end
  end
end
    
    When /^(?:|I )attach the file '([^']*)' to '([^']*)'$/ do |path, field|
  attach_file(field, File.expand_path(path))
end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
      included do
    helper_method :organization
    before_action :add_organization_to_page_title
  end
    
      def create
    scope = @server ? @server.domains : organization.domains
    @domain = scope.build(params.require(:domain).permit(:name, :verification_method))
    
      def new
    @http_endpoint = @server.http_endpoints.build
  end
    
      def create
    @ip_pool = IPPool.new(safe_params)
    if @ip_pool.save
      redirect_to_with_json [:edit, @ip_pool], :notice => 'IP Pool has been added successfully. You can now add IP addresses to it.'
    else
      render_form_errors 'new', @ip_pool
    end
  end
    
      def remove_from_queue
    if @message.queued_message && !@message.queued_message.locked?
      @message.queued_message.destroy
    end
    redirect_to_with_json organization_server_message_path(organization, @server, @message.id)
  end
    
      private
    
      def create
    @user_invite = UserInvite.active.find_by!(:uuid => params[:invite_token])
    @user = User.new(params.require(:user).permit(:first_name, :last_name, :email_address, :password, :password_confirmation))
    @user.email_verified_at = Time.now
    if @user.save
      @user_invite.accept(@user)
      self.current_user = @user
      redirect_to root_path
    else
      render 'new', :layout => 'sub'
    end
  end