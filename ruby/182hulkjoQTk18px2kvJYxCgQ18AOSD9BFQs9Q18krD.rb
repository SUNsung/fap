
        
            Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
    class TestApp < Rails::Application
  config.root = File.dirname(__FILE__)
  config.session_store :cookie_store, key: 'cookie_store_key'
  secrets.secret_token    = 'secret_token'
  secrets.secret_key_base = 'secret_key_base'
  config.eager_load = false
    
            # If this action doesn't exist on the provider, then an exception
        # must be raised.
        if callable.nil?
          raise Errors::UnimplementedProviderAction,
            action: name,
            provider: @provider.to_s
        end
    
            @id               = id
        @local_data_path  = raw['local_data_path']
        @name             = raw['name']
        @provider         = raw['provider']
        @state            = raw['state']
        @vagrantfile_name = raw['vagrantfile_name']
        @vagrantfile_path = raw['vagrantfile_path']
        # TODO(mitchellh): parse into a proper datetime
        @updated_at       = raw['updated_at']
        @extra_data       = raw['extra_data'] || {}
    
            # Download a file from the remote machine to the local machine.
        #
        # @param [String] from Path of the file on the remote machine.
        # @param [String] to Path of where to save the file locally.
        def download(from, to)
        end
    
              # Otherwise set the value
          data[key] = value
        end
      end
    end
  end
end

    
                  # Create an environment for this location and yield the
              # machine in that environment. We silence warnings here because
              # Vagrantfiles often have constants, so people would otherwise
              # constantly (heh) get 'already initialized constant' warnings.
              begin
                env = entry.vagrant_env(
                  @env.home_path, ui_class: @env.ui_class)
              rescue Vagrant::Errors::EnvironmentNonExistentCWD
                # This means that this environment working directory
                # no longer exists, so delete this entry.
                entry = @env.machine_index.get(name.to_s)
                @env.machine_index.delete(entry) if entry
                raise
              end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
    When /^I fill in the new user form/ do
  fill_in_new_user_form
end
    
    require 'rubygems'
    
      def login_page
    path_to 'the new user session page'
  end
    
      namespace :package do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build #{gem} packages'
      task gem => %w[.gem .tar.gz].map { |e| package(gem, e) }
    end
    
          def self.token(session)
        self.new(nil).mask_authenticity_token(session)
      end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
              react_and_close(env, body) or [status, headers, body]
        else
          [status, headers, body]
        end
      end
    
          def authenticate_user
        return if @current_api_user
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def approve
          authorize! :approve, @order, params[:token]
          @order.approved_by(current_api_user)
          respond_with(@order, default_template: :show)
        end