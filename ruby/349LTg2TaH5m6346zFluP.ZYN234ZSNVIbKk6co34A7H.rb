
        
                @current_document.related_posts
      end
      attr_writer :current_document
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        it 'shows reblogs by default' do
      recipient.follow!(sender)
      is_expected.to change(Notification, :count)
    end
    
    class ActivityPub::DistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
      def signed_payload
    @signed_payload ||= Oj.dump(serialize_payload(@account, ActivityPub::UpdateSerializer, signer: @account, sign_with: @options[:sign_with]))
  end
end

    
    describe Settings::Preferences::NotificationsController do
  render_views
    
      class_methods do
    def ldap_get_user(attributes = {})
      resource = joins(:account).find_by(accounts: { username: attributes[Devise.ldap_uid.to_sym].first })
    
        it 'makes followers unfollow old account' do
      expect(follower.following?(old_account)).to be false
    end
    
      context 'when a matching undo has been received first' do
    let(:undo_json) do
      {
        '@context': 'https://www.w3.org/ns/activitystreams',
        id: 'bar',
        type: 'Undo',
        actor: ActivityPub::TagManager.instance.uri_for(sender),
        object: json,
      }.with_indifferent_access
    end
    
          explicit_path = ::File.join(temp_path, LOGSTASH_DIR)
      dependencies_path = ::File.join(temp_path, DEPENDENCIES_DIR)
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end