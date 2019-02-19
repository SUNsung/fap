
        
          # GET /resource/confirmation?confirmation_token=abcdef
  def show
    self.resource = resource_class.confirm_by_token(params[:confirmation_token])
    yield resource if block_given?
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
                authentication_keys_changed || encrypted_password_changed
          end
        else
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:encrypted_password_changed?) && encrypted_password_changed?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('#{attribute}_changed?') && send('#{attribute}_changed?')
            end
    
          def rememberable_value
        if respond_to?(:remember_token)
          remember_token
        elsif respond_to?(:authenticatable_salt) && (salt = authenticatable_salt.presence)
          salt
        else
          raise 'authenticatable_salt returned nil for the #{self.class.name} model. ' \
            'In order to use rememberable, you must ensure a password is always set ' \
            'or have a remember_token column in your model or implement your own ' \
            'rememberable_value in the model with custom logic.'
        end
      end
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
    desc 'deploy public directory to github pages'
multitask :push do
  puts '## Deploying branch to Github Pages '
  puts '## Pulling any updates from Github Pages '
  cd '#{deploy_dir}' do 
    Bundler.with_clean_env { system 'git pull' }
  end
  (Dir['#{deploy_dir}/*']).each { |f| rm_rf(f) }
  Rake::Task[:copydot].invoke(public_dir, deploy_dir)
  puts '\n## Copying #{public_dir} to #{deploy_dir}'
  cp_r '#{public_dir}/.', deploy_dir
  cd '#{deploy_dir}' do
    system 'git add -A'
    message = 'Site updated at #{Time.now.utc}'
    puts '\n## Committing: #{message}'
    system 'git commit -m \'#{message}\''
    puts '\n## Pushing generated #{deploy_dir} website'
    Bundler.with_clean_env { system 'git push origin #{deploy_branch}' }
    puts '\n## Github Pages deploy complete'
  end
end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    end