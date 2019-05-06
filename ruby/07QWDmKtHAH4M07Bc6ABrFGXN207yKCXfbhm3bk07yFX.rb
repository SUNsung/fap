require 'action_view/helpers/tags/collection_helpers'
    
          def rate_limit_resets_in
        # We add a few seconds to the rate limit so we don't _immediately_
        # resume when the rate limit resets as this may result in us performing
        # a request before GitHub has a chance to reset the limit.
        octokit.rate_limit.resets_in + 5
      end
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
              new(hash)
        end
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
        def create
      authorize :email_domain_block, :create?
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
        web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data,
      user_id: active_session.user_id,
      access_token_id: active_session.access_token_id
    )
    
      included do
    before_action :set_session_activity
  end
    
    namespace :bower do
    
        private
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
      describe '#create' do
    let(:stranger) { FactoryGirl.create(:user) }
    
        streams.each do |stream_path, stream_class|
      describe 'a GET to #{stream_path}' do
        it 'assigns a stream of the proper class' do
          get stream_path
          expect(response).to be_success
          expect(assigns[:stream]).to be_a stream_class
        end
      end
    end
  end
    
          def gets
        return unless $stdin.tty?
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
      def validate_target_file
    if File.exist?(target_file)
      if  delete_target_file?
        File.delete(target_file)
      else
        signal_error('Package creation cancelled, a previously generated package exist at location: #{target_file}, move this file to safe place and run the command again')
      end
    end
  end
    
          @command.output_type.tap do |val|
        next if val.nil?
        mandatory(FPM::Package.types.include?(val),
                  'Invalid output package (-t flag) type #{val.inspect}. ' \
                  'Expected one of: #{types.join(', ')}')
      end
    
        if attributes[:pear_php_dir]
      logger.info('Setting php_dir', :php_dir => attributes[:pear_php_dir])
      safesystem('pear', '-c', config, 'config-set', 'php_dir', '#{staging_path(installroot)}/#{attributes[:pear_php_dir]}')
    end
    
        File.write(build_path('build-info'), `pkg_info -X pkg_install | egrep '^(MACHINE_ARCH|OPSYS|OS_VERSION|PKGTOOLS_VERSION)'`)
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]
    
        safesystem('tar', *args)
    
        realpath = Pathname.new(input_path).realpath.to_s
    ::Dir.chdir(build_path) do
      safesystem('unzip', realpath)
    end
    
      # Get the recommended 'tar' command for this platform.
  def tar_cmd
    return @@tar_cmd if defined? @@tar_cmd